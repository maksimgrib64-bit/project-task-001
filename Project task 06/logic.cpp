#include "logic.h"

string get_prime_numbers(int number) {
	if (number < 2) {
		return"Error.";
	}
	string result = "";
	for (int i = 2; i <= number; ++i) {
		bool is_prime = true;

		for (int j = 2; j * j <= i; ++j) {
			if (i % j == 0) {
				is_prime = false;
				break;
			}
		}
		if (is_prime) {
			result += to_string(i) + "";
		}
	}
	return result;
}