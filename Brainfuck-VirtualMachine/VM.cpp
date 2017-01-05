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
		break;
	case '<':
		break;
	case '+':
		break; 
	case '-':
		break;
	case '[':
		break;
	case ']':
		break;
	case '.':
		break;
	case ',':
		break;
	default:
		break;
	}
}
