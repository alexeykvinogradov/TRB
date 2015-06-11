
SET (dirs "")

LIST(APPEND dirs "common")
LIST(APPEND dirs "gfx")
#LIST(APPEND dirs "gui")
LIST(APPEND dirs "sfx")

SUBDIRS(${dirs})