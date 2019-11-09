
add_library(emb_util
	src/hal/CAN_base.cpp
	src/hal/I2C_base.cpp
	src/hal/SPI_base.cpp
	src/hal/UART_base.cpp
)

target_include_directories(emb_util PUBLIC
	include
)
