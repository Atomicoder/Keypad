#SingleInstance, Force
SendMode Input
SetWorkingDir, %A_ScriptDir%

AllOff:
    Hotkey, ^numpad1, Off
    Hotkey, ^numpad2, Off
    Hotkey, ^numpad3, Off
    Hotkey, ^numpad4, Off
    Hotkey, ^numpad5, Off
return

^Numpad0::

    InputBox, DirectoryName, Set Active Project Folder, Enter active folder path:,, 300, 130,,,,, %DirectoryName%

    if(ErrorLevel = 1){
        return
    }
    else if FileExist(DirectoryName){
        MsgBox, , Active Folder Set, Active Folder: %DirectoryName%., 2
        Hotkey, ^numpad1, On
        Hotkey, ^numpad2, On
        Hotkey, ^numpad3, On
        Hotkey, ^numpad4, On
        Hotkey, ^numpad5, On
        return
    }
    else if(DirectoryName = "")
    {

        MsgBox,, Hotkey Off, Entry field blank., 2
        Gosub, AllOff
        return 
    }
    Else
    {
        MsgBox,, Hotkey Off, Invalid file path., 2
        Gosub, AllOff
        return 
    }

^Numpad1::
    if FileExist(DirectoryName "/Images")
        run, %DirectoryName%/Images
return

^Numpad2::
    if FileExist(DirectoryName "/Videos")
        run, %DirectoryName%/Videos
return

^Numpad3::
    if FileExist(DirectoryName "/Output")
        run, %DirectoryName%/Output
return

^Numpad4::
    if FileExist(DirectoryName "/Images")
        run, %DirectoryName%/Images
return

^Numpad5::

    run, C:\Users\s.boldu\Downloads
return

