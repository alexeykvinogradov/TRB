
SET(GAME_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/game")

SET(dirs "")

LIST(APPEND dirs "app")
LIST(APPEND dirs "game")

SUBDIRS(${dirs})