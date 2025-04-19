@echo off
cls
chcp 65001 rem#dzp

set /a k=
for /f "tokens=* delims=-" %%k in (new-file.txt) do (
  echo %%k
  start spk.exe
)