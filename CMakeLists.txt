cmake_minimum_required(VERSION 3.20)
project(link_list)

set(CMAKE_CXX_STANDARD 14)

add_executable(link_list main.cpp Single_linked_list.cpp Header_file.h Double_linked_list.cpp Single_linked_list.h Double_linked_list.h Static_linked_list.cpp Static_linked_list.h)
