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
	bool hit;
	int  secret_number = 42;
	int  guess;

	do {
		print_header();                           /* Print the header */

		cout << "Type your guess: ";
		cin >> guess;

		hit = secret_number == guess;

		if (!hit)
			cout << "You lost" << endl;
	} while (!hit);

	cout << "You got it right" << endl;
	
	return 0;
}
