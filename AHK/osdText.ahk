#SingleInstance Force
Gui +LastFound +AlwaysOnTop -Caption +ToolWindow ; +ToolWindow avoids a taskbar button and an alt-tab menu item.
Gui, Font, cWhite s30 bold, Century Gothic 
Gui, Color, cWhite
Gui, Margin, 0, 0
Gui, Add, Text, vMyText cWhite, _____________ ; ______ serve to auto-size the window.

; Make all pixels of this color transparent and make the text itself translucent (150):
WinSet, TransColor,cWhite 200

Gui, Show, x-500 y73 NoActivate ; NoActivate avoids deactivating the currently active window.
Gui, Hide
return

~^c::
    osdShow("Copy")
return

~^v:: 
    osdShow("Paste")
Return

osdShow(comText){
    GuiControl,, MyText, %comText%
    Gui, Show
    Sleep, 2000
    Gui, Hide

}

