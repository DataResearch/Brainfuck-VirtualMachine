#include "VM.h"

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
		//Ignore all characters, that aren't part of the brainfuck language
		break;
	}
}

void VM::code (const std::string& code)
{
	const char* chars = code.c_str();

	for (int i = 0; chars[i]; i++)
	{
		this->execute(chars[i]);
	}
}