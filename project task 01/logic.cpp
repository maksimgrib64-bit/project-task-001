#include "logic.h"
string calculate_likes(int like, int day) {
	if (like<0 or day<=0) {
		return "Error";
	}
	string result = "Day 1: " + to_string(like) + "likes";
	int count = 0;

	for (int i = 2; i <= day; i++) {
		result += "\nDay " + to_string(i) + ": " + to_string(i * like) + " likes";

	}
	return result;
}
