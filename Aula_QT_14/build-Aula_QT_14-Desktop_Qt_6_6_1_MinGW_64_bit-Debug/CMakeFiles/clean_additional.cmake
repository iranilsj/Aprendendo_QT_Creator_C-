# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Aula_QT_14_autogen"
  "CMakeFiles\\Aula_QT_14_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Aula_QT_14_autogen.dir\\ParseCache.txt"
  )
endif()
