
cmake_minimum_required(VERSION 3.16)

project(TicTacToe LANGUAGES CXX)

# Enable automatic handling for UIC, MOC, and RCC
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Set C++ standard to 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

# Find the required Qt6 packages
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

# Gather sources for the main executable
add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/model ${CMAKE_SOURCE_DIR}/view main.cpp)

# Include directories for headers
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/model ${CMAKE_SOURCE_DIR}/view)

# Link the main executable with the Qt6 libraries
target_link_libraries(${PROJECT_NAME} Qt6::Core Qt6::Gui Qt6::Widgets)

# Optional installation rules
include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
