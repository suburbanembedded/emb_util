#pragma once

#include <cstdint>
#include <cstddef>

class SPI_base
{
public:
	SPI_base()
	{

	}
	virtual ~SPI_base()
	{

	}

	typedef void(*SlaveSelectCallback)(const bool enable);

	virtual bool initialize() = 0;
	
	virtual bool open() = 0;
	virtual bool close() = 0;

	virtual size_t write(uint8_t const * const  buf, const size_t len, SlaveSelectCallback ss_callback) = 0;
	virtual size_t read(uint8_t* const buf, const size_t len, SlaveSelectCallback ss_callback) = 0;

	virtual size_t write(uint16_t const * const  buf, const size_t len, SlaveSelectCallback ss_callback) = 0;
	virtual size_t read(uint16_t* const buf, const size_t len, SlaveSelectCallback ss_callback) = 0;

	virtual size_t write(uint32_t const * const  buf, const size_t len, SlaveSelectCallback ss_callback) = 0;
	virtual size_t read(uint32_t* const buf, const size_t len, SlaveSelectCallback ss_callback) = 0;

protected:

};
