@echo off
setlocal
set "ROOT=%~dp0"
set "PRIVATE=%LOCALAPPDATA%\Orbita-ReXGlue\1.1.26"
if not exist "%PRIVATE%\default.xex" (
    if not exist "%PRIVATE%" mkdir "%PRIVATE%" || exit /b 1
    copy /y "%ROOT%game\default.xex" "%PRIVATE%\default.xex" >nul || exit /b 1
)
start "" "%ROOT%orbita.exe" "--title.game_root=%PRIVATE%" --title.game_writable=true --ui.fullscreen=false
