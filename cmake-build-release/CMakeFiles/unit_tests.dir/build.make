# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Pierrick\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7142.21\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Pierrick\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7142.21\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles\unit_tests.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\unit_tests.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\unit_tests.dir\flags.make

CMakeFiles\unit_tests.dir\src\ecs\component\drawable\Drawable.cpp.obj: CMakeFiles\unit_tests.dir\flags.make
CMakeFiles\unit_tests.dir\src\ecs\component\drawable\Drawable.cpp.obj: ..\src\ecs\component\drawable\Drawable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/unit_tests.dir/src/ecs/component/drawable/Drawable.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\unit_tests.dir\src\ecs\component\drawable\Drawable.cpp.obj /FdCMakeFiles\unit_tests.dir\ /FS -c C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\ecs\component\drawable\Drawable.cpp
<<

CMakeFiles\unit_tests.dir\src\ecs\component\drawable\Drawable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unit_tests.dir/src/ecs/component/drawable/Drawable.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\unit_tests.dir\src\ecs\component\drawable\Drawable.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\ecs\component\drawable\Drawable.cpp
<<

CMakeFiles\unit_tests.dir\src\ecs\component\drawable\Drawable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unit_tests.dir/src/ecs/component/drawable/Drawable.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\unit_tests.dir\src\ecs\component\drawable\Drawable.cpp.s /c C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\ecs\component\drawable\Drawable.cpp
<<

CMakeFiles\unit_tests.dir\src\ecs\component\tools\vector3\Vector3.cpp.obj: CMakeFiles\unit_tests.dir\flags.make
CMakeFiles\unit_tests.dir\src\ecs\component\tools\vector3\Vector3.cpp.obj: ..\src\ecs\component\tools\vector3\Vector3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/unit_tests.dir/src/ecs/component/tools/vector3/Vector3.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\unit_tests.dir\src\ecs\component\tools\vector3\Vector3.cpp.obj /FdCMakeFiles\unit_tests.dir\ /FS -c C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\ecs\component\tools\vector3\Vector3.cpp
<<

CMakeFiles\unit_tests.dir\src\ecs\component\tools\vector3\Vector3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unit_tests.dir/src/ecs/component/tools/vector3/Vector3.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\unit_tests.dir\src\ecs\component\tools\vector3\Vector3.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\ecs\component\tools\vector3\Vector3.cpp
<<

CMakeFiles\unit_tests.dir\src\ecs\component\tools\vector3\Vector3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unit_tests.dir/src/ecs/component/tools/vector3/Vector3.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\unit_tests.dir\src\ecs\component\tools\vector3\Vector3.cpp.s /c C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\ecs\component\tools\vector3\Vector3.cpp
<<

CMakeFiles\unit_tests.dir\src\ecs\entity\Entity.cpp.obj: CMakeFiles\unit_tests.dir\flags.make
CMakeFiles\unit_tests.dir\src\ecs\entity\Entity.cpp.obj: ..\src\ecs\entity\Entity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/unit_tests.dir/src/ecs/entity/Entity.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\unit_tests.dir\src\ecs\entity\Entity.cpp.obj /FdCMakeFiles\unit_tests.dir\ /FS -c C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\ecs\entity\Entity.cpp
<<

CMakeFiles\unit_tests.dir\src\ecs\entity\Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unit_tests.dir/src/ecs/entity/Entity.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\unit_tests.dir\src\ecs\entity\Entity.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\ecs\entity\Entity.cpp
<<

CMakeFiles\unit_tests.dir\src\ecs\entity\Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unit_tests.dir/src/ecs/entity/Entity.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\unit_tests.dir\src\ecs\entity\Entity.cpp.s /c C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\ecs\entity\Entity.cpp
<<

CMakeFiles\unit_tests.dir\src\ecs\systems\Renderer.cpp.obj: CMakeFiles\unit_tests.dir\flags.make
CMakeFiles\unit_tests.dir\src\ecs\systems\Renderer.cpp.obj: ..\src\ecs\systems\Renderer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/unit_tests.dir/src/ecs/systems/Renderer.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\unit_tests.dir\src\ecs\systems\Renderer.cpp.obj /FdCMakeFiles\unit_tests.dir\ /FS -c C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\ecs\systems\Renderer.cpp
<<

CMakeFiles\unit_tests.dir\src\ecs\systems\Renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unit_tests.dir/src/ecs/systems/Renderer.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\unit_tests.dir\src\ecs\systems\Renderer.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\ecs\systems\Renderer.cpp
<<

CMakeFiles\unit_tests.dir\src\ecs\systems\Renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unit_tests.dir/src/ecs/systems/Renderer.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\unit_tests.dir\src\ecs\systems\Renderer.cpp.s /c C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\ecs\systems\Renderer.cpp
<<

CMakeFiles\unit_tests.dir\src\error\Error.cpp.obj: CMakeFiles\unit_tests.dir\flags.make
CMakeFiles\unit_tests.dir\src\error\Error.cpp.obj: ..\src\error\Error.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/unit_tests.dir/src/error/Error.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\unit_tests.dir\src\error\Error.cpp.obj /FdCMakeFiles\unit_tests.dir\ /FS -c C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\error\Error.cpp
<<

CMakeFiles\unit_tests.dir\src\error\Error.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unit_tests.dir/src/error/Error.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\unit_tests.dir\src\error\Error.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\error\Error.cpp
<<

CMakeFiles\unit_tests.dir\src\error\Error.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unit_tests.dir/src/error/Error.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\unit_tests.dir\src\error\Error.cpp.s /c C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\src\error\Error.cpp
<<

# Object files for target unit_tests
unit_tests_OBJECTS = \
"CMakeFiles\unit_tests.dir\src\ecs\component\drawable\Drawable.cpp.obj" \
"CMakeFiles\unit_tests.dir\src\ecs\component\tools\vector3\Vector3.cpp.obj" \
"CMakeFiles\unit_tests.dir\src\ecs\entity\Entity.cpp.obj" \
"CMakeFiles\unit_tests.dir\src\ecs\systems\Renderer.cpp.obj" \
"CMakeFiles\unit_tests.dir\src\error\Error.cpp.obj"

# External object files for target unit_tests
unit_tests_EXTERNAL_OBJECTS =

unit_tests.exe: CMakeFiles\unit_tests.dir\src\ecs\component\drawable\Drawable.cpp.obj
unit_tests.exe: CMakeFiles\unit_tests.dir\src\ecs\component\tools\vector3\Vector3.cpp.obj
unit_tests.exe: CMakeFiles\unit_tests.dir\src\ecs\entity\Entity.cpp.obj
unit_tests.exe: CMakeFiles\unit_tests.dir\src\ecs\systems\Renderer.cpp.obj
unit_tests.exe: CMakeFiles\unit_tests.dir\src\error\Error.cpp.obj
unit_tests.exe: CMakeFiles\unit_tests.dir\build.make
unit_tests.exe: _deps\raylib-build\raylib\raylib.lib
unit_tests.exe: _deps\raylib-build\raylib\external\glfw\src\glfw3.lib
unit_tests.exe: CMakeFiles\unit_tests.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable unit_tests.exe"
	C:\Users\Pierrick\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7142.21\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\unit_tests.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\unit_tests.dir\objects1.rsp @<<
 /out:unit_tests.exe /implib:unit_tests.lib /pdb:C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\cmake-build-release\unit_tests.pdb /version:0.0 /machine:X86 /INCREMENTAL:NO /subsystem:console  _deps\raylib-build\raylib\raylib.lib criterion.lib -lgcov winmm.lib _deps\raylib-build\raylib\external\glfw\src\glfw3.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\unit_tests.dir\build: unit_tests.exe

.PHONY : CMakeFiles\unit_tests.dir\build

CMakeFiles\unit_tests.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\unit_tests.dir\cmake_clean.cmake
.PHONY : CMakeFiles\unit_tests.dir\clean

CMakeFiles\unit_tests.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\cmake-build-release C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\cmake-build-release C:\Epi\delivery\Tek2\YEP\B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez\cmake-build-release\CMakeFiles\unit_tests.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\unit_tests.dir\depend

