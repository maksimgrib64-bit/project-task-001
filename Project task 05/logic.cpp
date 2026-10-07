#include "logic.h"
bool is_digits_count_even(long long number) {
	if (number == 0) {
		return false;
	}
	long long temp = abs(number);
	int count = 0;

	while (temp > 0) {
		count++;
		temp /= 10;
	}
	return count % 2 == 0;

}