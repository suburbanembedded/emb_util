#pragma once

#include <cstdint>
#include <cstddef>

class UART_base
{
public:
	UART_base()
	{

	}
	virtual ~UART_base()
	{

	}

	virtual bool initialize() = 0;
	
	virtual bool open() = 0;
	virtual bool close() = 0;

	virtual size_t write(uint8_t const * const  buf, const size_t len) = 0;
	virtual size_t read(uint8_t* const buf, const size_t len) = 0;

protected:

};
