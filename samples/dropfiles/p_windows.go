//----------------------------------------
//
// Copyright © ying32. All Rights Reserved.
//
// Licensed under Apache License 2.0
//
//----------------------------------------

package main

import (
	"unsafe"

	"github.com/ying32/govcl/vcl/rtl/version"
	"github.com/ying32/govcl/vcl/types"
	"github.com/ying32/govcl/vcl/types/messages"
	"github.com/ying32/govcl/vcl/win"
)

// 注意，当在Windows上使用时如果使用了UAC，则无法收到消息
// 需要使用未公开的winapi   ChangeWindowMessageFilter 或 ChangeWindowMessageFilterEx 根据系统版本不同使用其中的，然后添加
func windowsUACMessageFilter(handle types.HWND) {

	// 有管理员权限，启用这个
	if win.IsAdministrator() {
		if version.OSVersion.Major == 6 && version.OSVersion.Minor == 0 {
			// 判断操作系统的版本号，大于6.0为Vista，Xp不使用这个函数
			win.ChangeWindowMessageFilter(messages.WM_DROPFILES, win.MSGFLT_ADD)

		} else if version.OSVersion.Major == 6 && version.OSVersion.Minor >= 1 {
			// 大于等于6.1为Win7及以上版本
			var changeFilter win.TChangeFilterStruct
			changeFilter.CbSize = uint32(unsafe.Sizeof(changeFilter))
			win.ChangeWindowMessageFilterEx(handle, messages.WM_DROPFILES, win.MSGFLT_ALLOW, &changeFilter)
		}
	}

}