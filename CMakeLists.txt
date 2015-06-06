
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.9)
PROJECT(TRB) # it is very important where to place the command!

INCLUDE(paths.cmake)
INCLUDE(utils.cmake)

SET(dirs "")

LIST(APPEND dirs "src")

SUBDIRS(${dirs})