#include "logic.h"

string input_odd_numbers(int n, int m) {
	if (n >= m) {
		return "";
	}

	int start = (m % 2 != 0) ? m : m - 1;
	string result = "";
	for (int i = start; i >= n; i -= 2) {
		result += to_string(i) + "";
	}


	return result;
}
