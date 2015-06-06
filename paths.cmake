######################################
# File paths
######################################

SET (ROOT_DIR "${CMAKE_SOURCE_DIR}/")
SET (SRC_ROOT_DIR "${CMAKE_SOURCE_DIR}/src")
SET (GLOBAL_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")

MESSAGE(${ROOT_DIR})

# Build directories
SET (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${ROOT_DIR}/bin/" CACHE FILEPATH "Executable output directory"    )
SET (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${ROOT_DIR}/bin/" CACHE FILEPATH "Module library (?) output directory")
SET (CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${ROOT_DIR}/bin/" CACHE FILEPATH "Static and import library output directory")

SET (CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG   "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/debug")
SET (CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/release")
SET (CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG   "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/debug")
SET (CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/release")
SET (CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG   "${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/debug")
SET (CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/release")

SET (TRB_INSTALLATION_PREFIX "${ROOT_DIR}/sandbox" CACHE FILEPATH "Intermediate installation directory")

###############################
# Additional includes
###############################