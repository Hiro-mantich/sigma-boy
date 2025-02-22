cmake_minimum_required(VERSION 3.16)

project(sigma-boy VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Находим Qt
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

# Явно находим SQLite
find_package(SQLite3 REQUIRED)
# Если find_package не создает цель, пробуем найти вручную:
if(NOT TARGET SQLite3::SQLite3)
    find_library(SQLite3_LIBRARY sqlite3)
    find_path(SQLite3_INCLUDE_DIR sqlite3.h)

    # Если SQLite3 найден, создаем импортированную цель
    if(SQLite3_LIBRARY AND SQLite3_INCLUDE_DIR)
        add_library(SQLite3::SQLite3 STATIC IMPORTED)
        set_target_properties(SQLite3::SQLite3 PROPERTIES
            IMPORTED_LOCATION ${SQLite3_LIBRARY}
            INTERFACE_INCLUDE_DIRECTORIES ${SQLite3_INCLUDE_DIR}
        )
    else()
        message(FATAL_ERROR "SQLite3 not found.")
    endif()
endif()

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

# Создаем цель
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(sigma-boy
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    add_executable(sigma-boy ${PROJECT_SOURCES})
endif()

# Связываем Qt и SQLite с проектом
target_link_libraries(sigma-boy PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql SQLite3::SQLite3)



# Устанавливаем проект
include(GNUInstallDirs)
install(TARGETS sigma-boy
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Завершаем настройку для Qt6
if(${QT_VERSION_MAJOR} EQUAL 6)
    qt_finalize_executable(sigma-boy)
endif()
