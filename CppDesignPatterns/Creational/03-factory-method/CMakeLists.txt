cmake_minimum_required(VERSION 3.21)

project(factory_method
   VERSION  0.1.0
   DESCRIPTION "Factory method example code."
   HOMEPAGE_URL https://github.com/CharlesDias/LinkedInLearning-MasterCPP
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)          # Define explicitly to use of the standard C++20 declared in the previous line
set(CMAKE_CXX_EXTENSIONS OFF)                # Disabling vendor-specific extensions

# This is necessary for Sonarlint tools
# If enabled, generates a compile_commands.json file containing the exact compiler calls for all 
# translation units of the project in machine-readable form.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

### CMAKE Modules
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/)
include(Docs)

set(CLASSES_LIBRARIES_NAME classes_libraries)
set (APP_NAME app)

add_subdirectory(lib)
add_subdirectory(app)