cmake_minimum_required(VERSION 3.19..3.26)

project(tokiponapiilosona
	VERSION 0.1.0
	DESCRIPTION "toki pona pi ilo sona"
	LANGUAGES CXX)

#add_library(tokiponapiilosona_lib SHARED)
#target_include_directories(tokiponapiilosona_lib PUBLIC "include")
#target_compile_features(tokiponapiilosona_lib PUBLIC cxx_std_20)

add_executable(tokiponapiilosona "apps/tokiponapiilosona.cpp")
target_include_directories(tokiponapiilosona PUBLIC "include")
target_compile_features(tokiponapiilosona PUBLIC cxx_std_20)
#target_link_libraries(tokiponapiilosona PUBLIC tokiponapiilosona_lib)