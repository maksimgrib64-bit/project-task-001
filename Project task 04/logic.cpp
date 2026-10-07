#include "logic.h"

string get_order(int n, int m) {
	string result = "";
	int step(n < m) ? 1 : -1;
	int count = abs(m - n) + 1;

	for (int i = 0; i < count; ++i) {
		result += to_string(n + i * step) + "";
	}

	return result;

}
