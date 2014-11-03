@ECHO OFF
REM Javadoc Batch Processor
REM Original idea and batch file by Brian Maier, Spring 2010 Class

SET filename=%1
SET classname=%filename:~0,-5%
SET V1=C:\Program Files\Java\jdk1.6.0_23\bin\

REM **************************************************
REM ** Echo the parameters sent to the batch file
REM **************************************************
CLS
ECHO Java Batch Processor, Ver 1.02, 02/21/2010
ECHO For Support Contact: JCouture@sdccd.edu
ECHO ---------------------------------------------
ECHO Processing File: %1
ECHO Class Name %filename:~0,-5%
ECHO Compiler/Javadoc Located At: %V1%
ECHO ---------------------------------------------
ECHO -
REM **************************************************
REM ** CHECK FOR ERROR CONDITIONS
REM ** AND HALT PROCESSING IF NECESSARY
REM **************************************************
IF EXIST options.txt GOTO PROCESSOK
ECHO You need to have an OPTIONS.TXT file
GOTO ERRORINPROCESS

:PROCESSOK
REM **************************************************
REM ** Create a folders if needed
REM **************************************************
IF NOT EXIST %cd%\docs-temp mkdir %cd%\docs-temp
IF NOT EXIST %cd%\docs mkdir %cd%\docs

REM **************************************************
REM ** Run the JAVA Compiler
REM ** This assumes there is an options.txt file 
REM ** in the same folder as your source code
REM **************************************************
REM IF %ERRORLEVEL%=0 GOTO PROCESSOK2
"%V1%javac" %1
IF %ERRORLEVEL% EQU 0 GOTO PROCESSOK2
GOTO ERRORINCOMPILE

:PROCESSOK2
REM **************************************************
REM ** Run the JAVADOC program
REM ** This assumes there is an options.txt file 
REM ** in the same folder as your source code
REM **************************************************
"%V1%javadoc" @options.txt -d %cd%\docs-temp %filename%

REM **************************************************
REM Move the Javadoc output to the \docs folder
REM **************************************************
move %cd%\docs-temp\%classname%.html %cd%\docs\%classname%.html
move %cd%\docs-temp\src-html\%classname%.html %cd%\docs\%classname%-src.html 

REM **************************************************
REM ** Get rid of the temporary folder
REM **************************************************
rmdir /S /Q %cd%\docs-temp

REM **************************************************
REM ** Report Success
REM **************************************************
ECHO -
ECHO -
ECHO ******************************************************************
ECHO Your documentation is in
ECHO %cd%\docs
ECHO ******************************************************************
ECHO -
DIR %cd%\docs\*.html
GOTO DONE

:ERRORINCOMPILE
REM **************************************************
REM ** There was a problem with the doc generation
REM **************************************************
ECHO There was an error in your code

:ERRORINPROCESS
REM **************************************************
REM ** There was a problem with the doc generation
REM **************************************************
ECHO There was a problem generating your documentation

:DONE