#include <iostream>

using namespace std;

int main()
{
	const int MINUTES_PER_HOUR = 60;
	int numHours = 6;

	// MINUTES_PER_HOUR++;
	numHours++;

	cout << "There are " << numHours * MINUTES_PER_HOUR << " minutes in " << numHours << " hours." << '\n';

	unsigned int zeroHours = 0;
	zeroHours--;
	cout << "1 hour before zero hour is " << zeroHours << '\n';



}
