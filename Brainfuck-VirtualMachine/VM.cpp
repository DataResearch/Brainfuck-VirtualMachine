#include "VM.h"
#include <stdio.h>

VM::VM()
{
	buffer = new char[max_buffer_size];
}

VM::~VM()
{
	delete[] buffer;
	buffer = nullptr;
}

void VM::execute(char _char)
{
	switch (_char)
	{
	case '>':
		++this->location_buffer;
		break;
	case '<':
		--this->location_buffer;
		break;
	case '+':
		++(this->buffer[this->location_buffer]);
		break; 
	case '-':
		--(this->buffer[this->location_buffer]);
		break;
	case '[':
		//not implemented yet
		break;
	case ']':
		//not implemented yet
		break;
	case '.':
		putchar(this->buffer[this->location_buffer]);
		break;
	case ',':
		this->buffer[this->location_buffer] = getchar();
		break;
	default:
		break;
	}
}
