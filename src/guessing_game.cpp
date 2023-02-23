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
input_guess(void)
{
	int guess;

	cout << "Type your guess: ";
	cin >> guess;

	return guess;
}

int
main(void)
{
	bool      hit;
	const int SECRET_NUMBER = 42;
	int       guess;

	do {
		print_header();			/* Print the header */
		
		guess = input_guess();		/* Get the guess */
		hit = SECRET_NUMBER == guess;

		if (!hit)
			cout << "You lost" << endl;
	} while (!hit);

	cout << "You got it right" << endl;
	
	return 0;
}
