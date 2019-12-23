#pragma once

#include <cstdint>
#include <cstddef>

class CAN_base
{
public:
	CAN_base()
	{
		
	}
	virtual ~CAN_base()
	{
		
	}

	virtual bool initialize() = 0;
	
	virtual bool open() = 0;
	virtual bool close() = 0;
	
protected:

};
