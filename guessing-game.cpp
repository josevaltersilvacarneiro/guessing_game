#include <iostream>

void
print_header(void)
{
	std::cout << "*********************************\n";
	std::cout << "* Welcome to the guessing game! *\n";
	std::cout << "*********************************\n";
}

int
main(void)
{
	print_header();                           /* Print the header */
	
	return 0;
}
