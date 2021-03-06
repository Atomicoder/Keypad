#SingleInstance Force
Gui +LastFound +AlwaysOnTop -Caption +ToolWindow ; +ToolWindow avoids a taskbar button and an alt-tab menu item.
Gui, Font, cWhite s30 bold, Century Gothic 
Gui, Color, cWhite
Gui, Margin, 0, 0
Gui, Add, Text, vMyText cWhite, _____________ ; ______ serve to auto-size the window.

; Make all pixels of this color transparent and make the text itself translucent (150):1
WinSet, TransColor,cWhite 200

Gui, Show, x200 y73 NoActivate ; NoActivate avoids deactivating the currently active window.
Gui, Hide
return

^!Numpad1::
    WinActivate ahk_class ApplicationFrameWindow ahk_exe ApplicationFrameHost.exe
Return

^!Numpad2::
    WinActivate ahk_class Chrome_WidgetWin_1 ahk_exe Slack.exe
Return

^!Numpad3::
    WinActivate ahk_class Chrome_WidgetWin_1 ahk_exe Teams.exe
Return

^!Numpad4::
    IfWinNotExist ahk_class AE_CApplication_17.6 
    {
        WinActivate ahk_class AE_CApplication_17.6 ahk_exe AfterFX.exe
        WinMaximize
    }
    Else{
        run AfterFX.exe
        WinMaximize
    }

Return

^!Numpad5::
    IfWinExist ahk_class illustrator
    {
        WinActivate ahk_class illustrator
    }
    else{
        run "C:\Program Files\Adobe\Adobe Illustrator 2021\Support Files\Contents\Windows\Illustrator.exe"
    }
Return

^!Numpad6::
    WinActivate ahk_class Photoshop
Return

^!Numpad8::
    WinActivate ahk_class Chrome_WidgetWin_1 ahk_exe Code.exe
Return

~^C::
    osdShow("UNO")
return

osdShow(comText){
    GuiControl,, MyText, %comText%
    Gui, Show, NoActivate
    Sleep, 1000
    Gui, Hide

}
