cmake_minimum_required(VERSION 2.8)
project(HELLOWORLD)
aux_source_directory(./ DIR_SRC)
add_executable(helloworld ${DIR_SRC})
