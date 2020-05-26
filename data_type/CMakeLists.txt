cmake_minimum_required(VERSION 3.5)

project(data_type)

set(ALT_NAME altnames.c)
set(SHOWF_PT showf_pt.c)
set(FLOAT_ERR floaterr.c)

add_executable(alt_name ${ALT_NAME})
add_executable(showf_pt ${SHOWF_PT})
add_executable(floaterr ${FLOAT_ERR})