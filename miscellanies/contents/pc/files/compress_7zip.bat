@echo off

for %%f in (%*) do (
  echo %%f
  "C:\Program Files\7-Zip\7z.exe" a -mmt=on -mx=9 %%~dpf%%~nf.zip %%f
)

pause 
