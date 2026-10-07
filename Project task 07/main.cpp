#include "logic.h"
#include <iostream>
using namespace std;

int main() {
	int height;
	char symbol;
	cout << "Input the height of pyramid in lines:";
	cin >> height;
	cout << "Input the symbol to build the pyramid:";
	cin >> symbol;
	string result = get_pyramid(height, symbol);
	cout << result << endl;
}