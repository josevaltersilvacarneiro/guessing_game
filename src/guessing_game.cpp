#include <iostream>

using namespace std;

#define NUMBER_OF_TRIES 10

unsigned int
get_try(void)
{
	static unsigned int _try = NUMBER_OF_TRIES;

	return _try != 0 ? --_try : 0;
}

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
	int	  _try;

	do {
		print_header();			/* Print the header */
		
		_try = NUMBER_OF_TRIES - get_try();
		cout << _try << "ª try!" << endl;

		guess = input_guess();		/* Get the guess */
		hit = SECRET_NUMBER == guess;

		if (!hit)
			cout << "You lost" << endl;
	} while (!hit && _try != NUMBER_OF_TRIES);

	if (hit)
		cout << "You got it right" << endl;
	
	return 0;
}
