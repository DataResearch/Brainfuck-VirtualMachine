#include "VM.h"

int main(int argc, char** args)
{
	VM* vm = new VM();
	vm->code("+++>+++>+++.");




	delete vm;
	vm = nullptr;
}