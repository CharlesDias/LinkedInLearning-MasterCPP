add_executable(${APP_NAME}
   main.cpp
)

target_link_libraries(${APP_NAME} PRIVATE
   ${CLASSES_LIBRARIES_NAME}
)