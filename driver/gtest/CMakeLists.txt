SET(LIB_NAME "driverpcsim-test")
project (${LIB_NAME})

add_executable( ${LIB_NAME} 
	test.cpp
	controlbus_test.cpp
	relay_test.cpp
	hal_test.cpp
)

target_link_libraries(${LIB_NAME} 
	gtest
	pthread
   driverpcsim
)
