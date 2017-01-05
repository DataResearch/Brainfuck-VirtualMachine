#pragma once

class VM
{
private:

	const int max_buffer_size = 30000;

	char* buffer = nullptr; //char* is a buffer that is going to be used for brainfuck
	int location_buffer = 0; //brainfuck starts at the 0th element

public:

	VM();
	~VM();

	void execute(char _char);

};