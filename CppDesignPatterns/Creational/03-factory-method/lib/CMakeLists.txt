add_library(${CLASSES_LIBRARIES_NAME} STATIC
   ${SOURCE_FILES}
)

target_sources(${CLASSES_LIBRARIES_NAME}
   PRIVATE
   src/cappuccino.cpp
   src/coffee_maker_factory_bad_way.cpp
   src/coffee_maker_factory.cpp
   src/coffee.cpp
   src/espresso.cpp
)

target_include_directories(${CLASSES_LIBRARIES_NAME}
   PUBLIC
   ../lib/include/
)