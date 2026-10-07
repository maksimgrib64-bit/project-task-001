#include "logic.h"

string get_pyramid(int height, char symbol) {
	if (height <= 0) {
		return "Error!Some data was entered incorrectly.";
	}
	string result = "";
	for (int i = 1; i <= height; ++i) {
		for (int j = 0; j < height - i; ++j) {
			result += "";
		}
		for (int k = 0; k < 2 * i - 1; ++k) {
			result += symbol;
		}
		result += "\n";
	}
	return  result;
}
