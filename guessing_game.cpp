#include <iostream>

using namespace std;

void
print_header(void)
{
	cout << "*********************************" << endl;
	cout << "* Welcome to the guessing game! *" << endl;
	cout << "*********************************" << endl;
}

int
main(void)
{
	int secret_number = 42;

	print_header();                           /* Print the header */
	cout << "The value of the secret number is " << secret_number << endl;
	return 0;
}
