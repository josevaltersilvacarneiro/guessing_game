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
	int guess;

	for (;;) {
		print_header();                           /* Print the header */

		cout << "Type your guess: ";
		cin >> guess;

		if (secret_number != guess)
			cout << "You lost" << endl;
		else {
			cout << "You got it right" << endl;
			break;
		}
	}

	return 0;
}
