#include <iostream>
#include <Door.h>

int main()
{
	Door *a = new Door();

	a->unLock();


	// .. more code here... 

	delete a;

	// use after free
	a->openDoor();
}
