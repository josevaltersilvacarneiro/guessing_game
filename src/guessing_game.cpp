#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define INTERVAL	10
#define NUMBER_OF_TRIES 10
#define MAX_SCORE	1000

int
randm(void)
{
	/* This function returns a random number */

	int seconds = time(NULL);
	srand(seconds);

	return rand() % INTERVAL;
}

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
	float	  score = MAX_SCORE;
	bool      hit;
	const int SECRET_NUMBER = randm();
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

		score -= (float) abs(guess - SECRET_NUMBER) / 2;
	} while (!hit && _try != NUMBER_OF_TRIES);

	cout << "Your score: " << score << endl;

	if (hit)
		cout << "You got it right" << endl;
	
	return 0;
}
