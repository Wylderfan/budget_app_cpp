cmake_minimum_required(VERSION 3.16)
project(budget_app_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(budget_app_cpp
    src/main.cpp
    src/backend/db/db_connection.cpp
    src/backend/services/budget_manager.cpp
    src/frontend/widgets/widget_init.cpp
    src/frontend/dialogs/dialog_init.cpp
)

target_link_libraries(budget_app_cpp PRIVATE
    Qt6::Widgets
) 