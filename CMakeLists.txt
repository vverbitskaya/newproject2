cmake_minimum_required(VERSION 3.16)

project (book_lib) 
find_package(OpenCV REQUIRED)
add_library (book_lib src/book_class.cpp)
target_link_libraries (book_lib ${OpenCV_LIBS})

project (project2)
add_executable (project2 src/main.cpp)
target_link_libraries (project2 book_lib ${OpenCV_LIBS})
