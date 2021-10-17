file(GLOB FILENAMES *.cpp)

add_executable(run_tests ${FILENAMES})
if (ENABLE_COVERAGE)
  target_link_libraries(run_tests PUBLIC amazing gcov)
else()
  target_link_libraries(run_tests PUBLIC amazing)
endif()
