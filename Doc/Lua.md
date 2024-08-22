# Lua Project

1. New Lua Project

2. Add Lua Src Files
Include All Src Files 
Exclude luac.c

3. Set Definition 
Configuration Properties 
-> C/C++ -> Preprocessor 
-> Preprocessor Definitions 
-> Add LUA_BUILD_AS_DLL

# Main Project

1. Set Include Directories
Configuration Properties 
-> VC++ Directories 
-> Include Directories 
-> Add $(SolutionDir)Lua\Src

2. Set Linker
-> Configuration Properties 
-> Linker 

2.1 -> General
-> Additional Library Directories
-> Add $(TargetDir)

2.2 -> Input
-> Additional Dependencies
-> Add "Lua.lib"


3. Copy Lua Files
-> Configuration Properties 
-> Build Events
-> Post-Build Events
-> Command Line
-> Add xcopy "$(ProjectDir)Lua" "$(TargetDir)Lua" /E /I /Y 