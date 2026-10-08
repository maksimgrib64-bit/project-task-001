#include "logic.h"

string input_odd_numbers(int n, int m) {
	if (n == m and n % 2 == 0) {
		return "";
	}
	if (n >= m) {
		int t=n;
		n = m;
		m = t;
	}
	string result = to_string(m%2==0?--m:m);
	for (int i = m-2; i >= n; i -=2) {
		result += " "+ to_string(i) + " ";
	}


	return result;
}
