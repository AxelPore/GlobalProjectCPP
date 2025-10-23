cmake_minimum_required (VERSION 3.24)
project(GlobalProjectCpp LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 23)


# Activez Rechargement à chaud pour les compilateurs MSVC si cela est pris en charge.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

add_library(Common SHARED "Common/ParseDecimal.cpp")

target_include_directories(Common
 PUBLIC "Common/ParseDecimal.h"
)

#target_link_libraries(Common
#	PUBLIC GTest::GTest GTest::Main # utilisé en interne
#)


# Ajoutez une source à l'exécutable de ce projet.
add_executable (GlobalProject "main.cpp")

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
