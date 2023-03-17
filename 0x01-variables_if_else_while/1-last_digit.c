#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	srand(time(NULL)); // seed the random number generator with the current time

	int n = rand(); // assign a random number to the variable n

	int last_digit = n % 10; // get the last digit of n

	std::cout << "Last digit of " << n << " is ";

	if (last_digit > 5) {
		std::cout << last_digit << " and is greater than 5" << std::endl;
	} else if (last_digit == 0) {
		std::cout << last_digit << " and is 0" << std::endl;
	} else {
		std::cout << last_digit << " and is less than 6 and not 0" << std::endl;
	}

	return 0;
}
