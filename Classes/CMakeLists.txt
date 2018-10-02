file(GLOB_RECURSE VAR_SOURCES
    "./*.cpp"
)

#generating lib (.a = static object)
add_library(newClass ${VAR_SOURCES})

#installing lib to location
#install(TARGETS newClass DESTINATION /usr/lib)

