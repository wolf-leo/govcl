
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

function ToggleBox_Create(AOwner: TComponent): TToggleBox; extdecl;
begin
  Result :=  TToggleBox.Create(AOwner);
end;

procedure ToggleBox_Free(AObj: TToggleBox); extdecl;
begin
  AObj.Free;
end;

function ToggleBox_CanFocus(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function ToggleBox_ContainsControl(AObj: TToggleBox; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function ToggleBox_ControlAtPos(AObj: TToggleBox; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure ToggleBox_DisableAlign(AObj: TToggleBox); extdecl;
begin
  AObj.DisableAlign;
end;

procedure ToggleBox_EnableAlign(AObj: TToggleBox); extdecl;
begin
  AObj.EnableAlign;
end;

function ToggleBox_FindChildControl(AObj: TToggleBox; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure ToggleBox_FlipChildren(AObj: TToggleBox; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function ToggleBox_Focused(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function ToggleBox_HandleAllocated(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ToggleBox_InsertControl(AObj: TToggleBox; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure ToggleBox_Invalidate(AObj: TToggleBox); extdecl;
begin
  AObj.Invalidate;
end;

procedure ToggleBox_RemoveControl(AObj: TToggleBox; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure ToggleBox_Realign(AObj: TToggleBox); extdecl;
begin
  AObj.Realign;
end;

procedure ToggleBox_Repaint(AObj: TToggleBox); extdecl;
begin
  AObj.Repaint;
end;

procedure ToggleBox_ScaleBy(AObj: TToggleBox; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure ToggleBox_ScrollBy(AObj: TToggleBox; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure ToggleBox_SetBounds(AObj: TToggleBox; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ToggleBox_SetFocus(AObj: TToggleBox); extdecl;
begin
  AObj.SetFocus;
end;

procedure ToggleBox_Update(AObj: TToggleBox); extdecl;
begin
  AObj.Update;
end;

procedure ToggleBox_BringToFront(AObj: TToggleBox); extdecl;
begin
  AObj.BringToFront;
end;

procedure ToggleBox_ClientToScreen(AObj: TToggleBox; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure ToggleBox_ClientToParent(AObj: TToggleBox; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function ToggleBox_Dragging(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function ToggleBox_HasParent(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ToggleBox_Hide(AObj: TToggleBox); extdecl;
begin
  AObj.Hide;
end;

function ToggleBox_Perform(AObj: TToggleBox; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ToggleBox_Refresh(AObj: TToggleBox); extdecl;
begin
  AObj.Refresh;
end;

procedure ToggleBox_ScreenToClient(AObj: TToggleBox; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure ToggleBox_ParentToClient(AObj: TToggleBox; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure ToggleBox_SendToBack(AObj: TToggleBox); extdecl;
begin
  AObj.SendToBack;
end;

procedure ToggleBox_Show(AObj: TToggleBox); extdecl;
begin
  AObj.Show;
end;

function ToggleBox_GetTextBuf(AObj: TToggleBox; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function ToggleBox_GetTextLen(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  {$ifdef darwin}Length(AObj.Caption){$else}AObj.GetTextLen{$endif};
end;

procedure ToggleBox_SetTextBuf(AObj: TToggleBox; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function ToggleBox_FindComponent(AObj: TToggleBox; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ToggleBox_GetNamePath(AObj: TToggleBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure ToggleBox_Assign(AObj: TToggleBox; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function ToggleBox_ClassType(AObj: TToggleBox): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function ToggleBox_ClassName(AObj: TToggleBox): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function ToggleBox_InstanceSize(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function ToggleBox_InheritsFrom(AObj: TToggleBox; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function ToggleBox_Equals(AObj: TToggleBox; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ToggleBox_GetHashCode(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ToggleBox_ToString(AObj: TToggleBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

procedure ToggleBox_AnchorToNeighbour(AObj: TToggleBox; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  AObj.AnchorToNeighbour(ASide, ASpace, ASibling);
end;

procedure ToggleBox_AnchorParallel(AObj: TToggleBox; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  AObj.AnchorParallel(ASide, ASpace, ASibling);
end;

procedure ToggleBox_AnchorHorizontalCenterTo(AObj: TToggleBox; ASibling: TControl); extdecl;
begin
  AObj.AnchorHorizontalCenterTo(ASibling);
end;

procedure ToggleBox_AnchorVerticalCenterTo(AObj: TToggleBox; ASibling: TControl); extdecl;
begin
  AObj.AnchorVerticalCenterTo(ASibling);
end;

procedure ToggleBox_AnchorAsAlign(AObj: TToggleBox; ATheAlign: TAlign; ASpace: Integer); extdecl;
begin
  AObj.AnchorAsAlign(ATheAlign, ASpace);
end;

procedure ToggleBox_AnchorClient(AObj: TToggleBox; ASpace: Integer); extdecl;
begin
  AObj.AnchorClient(ASpace);
end;

function ToggleBox_GetAllowGrayed(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.AllowGrayed;
end;

procedure ToggleBox_SetAllowGrayed(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.AllowGrayed := AValue;
end;

function ToggleBox_GetAlign(AObj: TToggleBox): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure ToggleBox_SetAlign(AObj: TToggleBox; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function ToggleBox_GetAnchors(AObj: TToggleBox): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ToggleBox_SetAnchors(AObj: TToggleBox; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function ToggleBox_GetAutoSize(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure ToggleBox_SetAutoSize(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.AutoSize := AValue;
end;

function ToggleBox_GetCaption(AObj: TToggleBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure ToggleBox_SetCaption(AObj: TToggleBox; AValue: PChar); extdecl;
begin
  AObj.Caption := AValue;
end;

function ToggleBox_GetChecked(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.Checked;
end;

procedure ToggleBox_SetChecked(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.Checked := AValue;
end;

function ToggleBox_GetColor(AObj: TToggleBox): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure ToggleBox_SetColor(AObj: TToggleBox; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function ToggleBox_GetConstraints(AObj: TToggleBox): TSizeConstraints; extdecl;
begin
  Result :=  AObj.Constraints;
end;

procedure ToggleBox_SetConstraints(AObj: TToggleBox; AValue: TSizeConstraints); extdecl;
begin
  AObj.Constraints := AValue;
end;

function ToggleBox_GetDoubleBuffered(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ToggleBox_SetDoubleBuffered(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function ToggleBox_GetDragCursor(AObj: TToggleBox): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure ToggleBox_SetDragCursor(AObj: TToggleBox; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function ToggleBox_GetDragKind(AObj: TToggleBox): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure ToggleBox_SetDragKind(AObj: TToggleBox; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function ToggleBox_GetDragMode(AObj: TToggleBox): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure ToggleBox_SetDragMode(AObj: TToggleBox; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function ToggleBox_GetEnabled(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ToggleBox_SetEnabled(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function ToggleBox_GetFont(AObj: TToggleBox): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure ToggleBox_SetFont(AObj: TToggleBox; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function ToggleBox_GetHint(AObj: TToggleBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure ToggleBox_SetHint(AObj: TToggleBox; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

//EVENT_TYPE:TNotifyEvent
procedure ToggleBox_SetOnChange(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnChange}
  {$DEFINE EventMethodName := OnChange}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ToggleBox_SetOnClick(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

//EVENT_TYPE:TDragDropEvent
procedure ToggleBox_SetOnDragDrop(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

//EVENT_TYPE:TDragOverEvent
procedure ToggleBox_SetOnDragOver(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

//EVENT_TYPE:TEndDragEvent
procedure ToggleBox_SetOnEndDrag(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ToggleBox_SetOnEnter(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEnter}
  {$DEFINE EventMethodName := OnEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ToggleBox_SetOnExit(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnExit}
  {$DEFINE EventMethodName := OnExit}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure ToggleBox_SetOnMouseDown(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ToggleBox_SetOnMouseEnter(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ToggleBox_SetOnMouseLeave(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

//EVENT_TYPE:TMouseMoveEvent
procedure ToggleBox_SetOnMouseMove(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure ToggleBox_SetOnMouseUp(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

//EVENT_TYPE:TMouseWheelEvent
procedure ToggleBox_SetOnMouseWheel(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheel}
  {$DEFINE EventMethodName := OnMouseWheel}
  EventMethodCode
end;

//EVENT_TYPE:TMouseWheelUpDownEvent
procedure ToggleBox_SetOnMouseWheelDown(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheelDown}
  {$DEFINE EventMethodName := OnMouseWheelDown}
  EventMethodCode
end;

//EVENT_TYPE:TMouseWheelUpDownEvent
procedure ToggleBox_SetOnMouseWheelUp(AObj: TToggleBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheelUp}
  {$DEFINE EventMethodName := OnMouseWheelUp}
  EventMethodCode
end;

function ToggleBox_GetParentDoubleBuffered(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure ToggleBox_SetParentDoubleBuffered(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function ToggleBox_GetParentFont(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure ToggleBox_SetParentFont(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function ToggleBox_GetParentShowHint(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ToggleBox_SetParentShowHint(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ToggleBox_GetPopupMenu(AObj: TToggleBox): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ToggleBox_SetPopupMenu(AObj: TToggleBox; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ToggleBox_GetShowHint(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ToggleBox_SetShowHint(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function ToggleBox_GetState(AObj: TToggleBox): TCheckBoxState; extdecl;
begin
  Result :=  AObj.State;
end;

procedure ToggleBox_SetState(AObj: TToggleBox; AValue: TCheckBoxState); extdecl;
begin
  AObj.State := AValue;
end;

function ToggleBox_GetTabOrder(AObj: TToggleBox): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure ToggleBox_SetTabOrder(AObj: TToggleBox; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function ToggleBox_GetTabStop(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure ToggleBox_SetTabStop(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function ToggleBox_GetVisible(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ToggleBox_SetVisible(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

function ToggleBox_GetDockClientCount(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function ToggleBox_GetDockSite(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure ToggleBox_SetDockSite(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function ToggleBox_GetMouseInClient(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.MouseInClient;
end;

function ToggleBox_GetVisibleDockClientCount(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function ToggleBox_GetBrush(AObj: TToggleBox): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function ToggleBox_GetControlCount(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function ToggleBox_GetHandle(AObj: TToggleBox): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function ToggleBox_GetParentWindow(AObj: TToggleBox): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ToggleBox_SetParentWindow(AObj: TToggleBox; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function ToggleBox_GetShowing(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.Showing;
end;

function ToggleBox_GetUseDockManager(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure ToggleBox_SetUseDockManager(AObj: TToggleBox; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function ToggleBox_GetAction(AObj: TToggleBox): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure ToggleBox_SetAction(AObj: TToggleBox; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

function ToggleBox_GetBiDiMode(AObj: TToggleBox): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ToggleBox_SetBiDiMode(AObj: TToggleBox; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure ToggleBox_GetBoundsRect(AObj: TToggleBox; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ToggleBox_SetBoundsRect(AObj: TToggleBox; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ToggleBox_GetClientHeight(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ToggleBox_SetClientHeight(AObj: TToggleBox; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ToggleBox_GetClientOrigin(AObj: TToggleBox; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure ToggleBox_GetClientRect(AObj: TToggleBox; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ToggleBox_GetClientWidth(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ToggleBox_SetClientWidth(AObj: TToggleBox; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function ToggleBox_GetControlState(AObj: TToggleBox): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure ToggleBox_SetControlState(AObj: TToggleBox; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function ToggleBox_GetControlStyle(AObj: TToggleBox): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure ToggleBox_SetControlStyle(AObj: TToggleBox; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function ToggleBox_GetFloating(AObj: TToggleBox): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function ToggleBox_GetParent(AObj: TToggleBox): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ToggleBox_SetParent(AObj: TToggleBox; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function ToggleBox_GetLeft(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure ToggleBox_SetLeft(AObj: TToggleBox; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function ToggleBox_GetTop(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure ToggleBox_SetTop(AObj: TToggleBox; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function ToggleBox_GetWidth(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure ToggleBox_SetWidth(AObj: TToggleBox; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function ToggleBox_GetHeight(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure ToggleBox_SetHeight(AObj: TToggleBox; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function ToggleBox_GetCursor(AObj: TToggleBox): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ToggleBox_SetCursor(AObj: TToggleBox; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function ToggleBox_GetComponentCount(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ToggleBox_GetComponentIndex(AObj: TToggleBox): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ToggleBox_SetComponentIndex(AObj: TToggleBox; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ToggleBox_GetOwner(AObj: TToggleBox): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function ToggleBox_GetName(AObj: TToggleBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure ToggleBox_SetName(AObj: TToggleBox; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function ToggleBox_GetTag(AObj: TToggleBox): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ToggleBox_SetTag(AObj: TToggleBox; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function ToggleBox_GetAnchorSideLeft(AObj: TToggleBox): TAnchorSide; extdecl;
begin
  Result :=  AObj.AnchorSideLeft;
end;

procedure ToggleBox_SetAnchorSideLeft(AObj: TToggleBox; AValue: TAnchorSide); extdecl;
begin
  AObj.AnchorSideLeft := AValue;
end;

function ToggleBox_GetAnchorSideTop(AObj: TToggleBox): TAnchorSide; extdecl;
begin
  Result :=  AObj.AnchorSideTop;
end;

procedure ToggleBox_SetAnchorSideTop(AObj: TToggleBox; AValue: TAnchorSide); extdecl;
begin
  AObj.AnchorSideTop := AValue;
end;

function ToggleBox_GetAnchorSideRight(AObj: TToggleBox): TAnchorSide; extdecl;
begin
  Result :=  AObj.AnchorSideRight;
end;

procedure ToggleBox_SetAnchorSideRight(AObj: TToggleBox; AValue: TAnchorSide); extdecl;
begin
  AObj.AnchorSideRight := AValue;
end;

function ToggleBox_GetAnchorSideBottom(AObj: TToggleBox): TAnchorSide; extdecl;
begin
  Result :=  AObj.AnchorSideBottom;
end;

procedure ToggleBox_SetAnchorSideBottom(AObj: TToggleBox; AValue: TAnchorSide); extdecl;
begin
  AObj.AnchorSideBottom := AValue;
end;

function ToggleBox_GetChildSizing(AObj: TToggleBox): TControlChildSizing; extdecl;
begin
  Result :=  AObj.ChildSizing;
end;

procedure ToggleBox_SetChildSizing(AObj: TToggleBox; AValue: TControlChildSizing); extdecl;
begin
  AObj.ChildSizing := AValue;
end;

function ToggleBox_GetBorderSpacing(AObj: TToggleBox): TControlBorderSpacing; extdecl;
begin
  Result :=  AObj.BorderSpacing;
end;

procedure ToggleBox_SetBorderSpacing(AObj: TToggleBox; AValue: TControlBorderSpacing); extdecl;
begin
  AObj.BorderSpacing := AValue;
end;

function ToggleBox_GetDockClients(AObj: TToggleBox; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function ToggleBox_GetControls(AObj: TToggleBox; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function ToggleBox_GetComponents(AObj: TToggleBox; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function ToggleBox_GetAnchorSide(AObj: TToggleBox; AKind: TAnchorKind): TAnchorSide; extdecl;
begin
  Result :=  AObj.AnchorSide[AKind];
end;

function ToggleBox_StaticClassType: TClass; extdecl;
begin
  Result := TToggleBox;
end;

exports
  ToggleBox_Create,
  ToggleBox_Free,
  ToggleBox_CanFocus,
  ToggleBox_ContainsControl,
  ToggleBox_ControlAtPos,
  ToggleBox_DisableAlign,
  ToggleBox_EnableAlign,
  ToggleBox_FindChildControl,
  ToggleBox_FlipChildren,
  ToggleBox_Focused,
  ToggleBox_HandleAllocated,
  ToggleBox_InsertControl,
  ToggleBox_Invalidate,
  ToggleBox_RemoveControl,
  ToggleBox_Realign,
  ToggleBox_Repaint,
  ToggleBox_ScaleBy,
  ToggleBox_ScrollBy,
  ToggleBox_SetBounds,
  ToggleBox_SetFocus,
  ToggleBox_Update,
  ToggleBox_BringToFront,
  ToggleBox_ClientToScreen,
  ToggleBox_ClientToParent,
  ToggleBox_Dragging,
  ToggleBox_HasParent,
  ToggleBox_Hide,
  ToggleBox_Perform,
  ToggleBox_Refresh,
  ToggleBox_ScreenToClient,
  ToggleBox_ParentToClient,
  ToggleBox_SendToBack,
  ToggleBox_Show,
  ToggleBox_GetTextBuf,
  ToggleBox_GetTextLen,
  ToggleBox_SetTextBuf,
  ToggleBox_FindComponent,
  ToggleBox_GetNamePath,
  ToggleBox_Assign,
  ToggleBox_ClassType,
  ToggleBox_ClassName,
  ToggleBox_InstanceSize,
  ToggleBox_InheritsFrom,
  ToggleBox_Equals,
  ToggleBox_GetHashCode,
  ToggleBox_ToString,
  ToggleBox_AnchorToNeighbour,
  ToggleBox_AnchorParallel,
  ToggleBox_AnchorHorizontalCenterTo,
  ToggleBox_AnchorVerticalCenterTo,
  ToggleBox_AnchorAsAlign,
  ToggleBox_AnchorClient,
  ToggleBox_GetAllowGrayed,
  ToggleBox_SetAllowGrayed,
  ToggleBox_GetAlign,
  ToggleBox_SetAlign,
  ToggleBox_GetAnchors,
  ToggleBox_SetAnchors,
  ToggleBox_GetAutoSize,
  ToggleBox_SetAutoSize,
  ToggleBox_GetCaption,
  ToggleBox_SetCaption,
  ToggleBox_GetChecked,
  ToggleBox_SetChecked,
  ToggleBox_GetColor,
  ToggleBox_SetColor,
  ToggleBox_GetConstraints,
  ToggleBox_SetConstraints,
  ToggleBox_GetDoubleBuffered,
  ToggleBox_SetDoubleBuffered,
  ToggleBox_GetDragCursor,
  ToggleBox_SetDragCursor,
  ToggleBox_GetDragKind,
  ToggleBox_SetDragKind,
  ToggleBox_GetDragMode,
  ToggleBox_SetDragMode,
  ToggleBox_GetEnabled,
  ToggleBox_SetEnabled,
  ToggleBox_GetFont,
  ToggleBox_SetFont,
  ToggleBox_GetHint,
  ToggleBox_SetHint,
  ToggleBox_SetOnChange,
  ToggleBox_SetOnClick,
  ToggleBox_SetOnDragDrop,
  ToggleBox_SetOnDragOver,
  ToggleBox_SetOnEndDrag,
  ToggleBox_SetOnEnter,
  ToggleBox_SetOnExit,
  ToggleBox_SetOnMouseDown,
  ToggleBox_SetOnMouseEnter,
  ToggleBox_SetOnMouseLeave,
  ToggleBox_SetOnMouseMove,
  ToggleBox_SetOnMouseUp,
  ToggleBox_SetOnMouseWheel,
  ToggleBox_SetOnMouseWheelDown,
  ToggleBox_SetOnMouseWheelUp,
  ToggleBox_GetParentDoubleBuffered,
  ToggleBox_SetParentDoubleBuffered,
  ToggleBox_GetParentFont,
  ToggleBox_SetParentFont,
  ToggleBox_GetParentShowHint,
  ToggleBox_SetParentShowHint,
  ToggleBox_GetPopupMenu,
  ToggleBox_SetPopupMenu,
  ToggleBox_GetShowHint,
  ToggleBox_SetShowHint,
  ToggleBox_GetState,
  ToggleBox_SetState,
  ToggleBox_GetTabOrder,
  ToggleBox_SetTabOrder,
  ToggleBox_GetTabStop,
  ToggleBox_SetTabStop,
  ToggleBox_GetVisible,
  ToggleBox_SetVisible,
  ToggleBox_GetDockClientCount,
  ToggleBox_GetDockSite,
  ToggleBox_SetDockSite,
  ToggleBox_GetMouseInClient,
  ToggleBox_GetVisibleDockClientCount,
  ToggleBox_GetBrush,
  ToggleBox_GetControlCount,
  ToggleBox_GetHandle,
  ToggleBox_GetParentWindow,
  ToggleBox_SetParentWindow,
  ToggleBox_GetShowing,
  ToggleBox_GetUseDockManager,
  ToggleBox_SetUseDockManager,
  ToggleBox_GetAction,
  ToggleBox_SetAction,
  ToggleBox_GetBiDiMode,
  ToggleBox_SetBiDiMode,
  ToggleBox_GetBoundsRect,
  ToggleBox_SetBoundsRect,
  ToggleBox_GetClientHeight,
  ToggleBox_SetClientHeight,
  ToggleBox_GetClientOrigin,
  ToggleBox_GetClientRect,
  ToggleBox_GetClientWidth,
  ToggleBox_SetClientWidth,
  ToggleBox_GetControlState,
  ToggleBox_SetControlState,
  ToggleBox_GetControlStyle,
  ToggleBox_SetControlStyle,
  ToggleBox_GetFloating,
  ToggleBox_GetParent,
  ToggleBox_SetParent,
  ToggleBox_GetLeft,
  ToggleBox_SetLeft,
  ToggleBox_GetTop,
  ToggleBox_SetTop,
  ToggleBox_GetWidth,
  ToggleBox_SetWidth,
  ToggleBox_GetHeight,
  ToggleBox_SetHeight,
  ToggleBox_GetCursor,
  ToggleBox_SetCursor,
  ToggleBox_GetComponentCount,
  ToggleBox_GetComponentIndex,
  ToggleBox_SetComponentIndex,
  ToggleBox_GetOwner,
  ToggleBox_GetName,
  ToggleBox_SetName,
  ToggleBox_GetTag,
  ToggleBox_SetTag,
  ToggleBox_GetAnchorSideLeft,
  ToggleBox_SetAnchorSideLeft,
  ToggleBox_GetAnchorSideTop,
  ToggleBox_SetAnchorSideTop,
  ToggleBox_GetAnchorSideRight,
  ToggleBox_SetAnchorSideRight,
  ToggleBox_GetAnchorSideBottom,
  ToggleBox_SetAnchorSideBottom,
  ToggleBox_GetChildSizing,
  ToggleBox_SetChildSizing,
  ToggleBox_GetBorderSpacing,
  ToggleBox_SetBorderSpacing,
  ToggleBox_GetDockClients,
  ToggleBox_GetControls,
  ToggleBox_GetComponents,
  ToggleBox_GetAnchorSide,
  ToggleBox_StaticClassType;
