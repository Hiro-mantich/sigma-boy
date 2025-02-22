# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\sigma-boy_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\sigma-boy_autogen.dir\\ParseCache.txt"
  "sigma-boy_autogen"
  )
endif()
