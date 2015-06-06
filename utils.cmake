##################################
# Useful macros and functions
##################################

FUNCTION(ADD_SOURCE_GROUP NAME VAR)
  SET(${VAR} ${ARGN} PARENT_SCOPE)
  SOURCE_GROUP("${NAME}" FILES ${ARGN})
  LIST(APPEND ALL_PROJECT_SOURCES ${ARGN})
  SET(ALL_PROJECT_SOURCES ${ALL_PROJECT_SOURCES} PARENT_SCOPE)
ENDFUNCTION()
