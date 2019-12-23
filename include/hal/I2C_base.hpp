#pragma once

#include <cstdint>
#include <cstddef>

class I2C_base
{
public:
	I2C_base()
	{

	}
	virtual ~I2C_base()
	{

	}

	virtual bool initialize() = 0;
	
	virtual bool open() = 0;
	virtual bool close() = 0;

	virtual bool write(uint8_t const * const  buf, const size_t len) = 0;
	virtual bool read(uint8_t* const buf, const size_t len) = 0;

	virtual bool write_register(uint8_t const * const  reg_buf, const size_t reg_len, uint8_t const * const  data_buf, const size_t data_len) = 0;
	virtual bool read_register(uint8_t const * const  reg_buf, const size_t reg_len, uint8_t* const  data_buf, const size_t data_len) = 0;

protected:

};
