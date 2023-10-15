:: @echo off
:: chcp 932
:: cmd
@echo off
chcp 932 > nul

:: コマンドプロンプトをUTF-8モードで開く
cmd.exe /u /k

:: .exeファイルの一覧を取得
setlocal enabledelayedexpansion
set "count=0"
for %%i in (*.exe) do (
    set /a count+=1
    set "exe[!count!]=%%i"
    echo !count!. %%i
)

:: ユーザーの選択を受け付ける
set /p choice=実行する.exeファイルを選択してください (1から%count%までの番号を入力): 

:: ユーザーの選択に基づいて.exeファイルを実行
if "%choice%" geq "1" if "%choice%" leq "%count%" (
    start "!exe[%choice%]!"
) else (
    echo 無効な選択です。
)

:: この行まで到達すると、コマンドプロンプトを閉じる
exit
