#include <iostream>

void
print_header(void)
{
	std::cout << "*********************************" << std::endl;
	std::cout << "* Welcome to the guessing game! *" << std::endl;
	std::cout << "*********************************" << std::endl;
}

int
main(void)
{
	print_header();                           /* Print the header */
	
	return 0;
}
