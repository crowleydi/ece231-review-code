#include <fstream>
#include <iostream>

int main()
{
	std::ofstream fout("output.txt");

	fout << "Hello, Skyler!" << std::endl;
	fout << "Thank you for the great exam questions." << std::endl;

	return 0;
}
