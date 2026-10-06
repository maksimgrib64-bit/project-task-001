#include "test.h"
void test(int n, int m, string expected, string test_name) {
	string actual = get_order(n,m);
	string msg = test_name + "--> ";
	msg += actual == expected ? "Pass" : "Fail";
	cout << msg << endl;

}

void run_all_tests() {
	test();


}