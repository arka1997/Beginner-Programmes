#include <iostream>
#include <climits>
using namespace std;
void foo(int*& x, int**& y) {
    // modifying x or y here will modify a or b in main
	cout << x;
	cout << **y;
	int d = 5;
	int *c = &d;
	x = c;
	cout << x;
}

int main() {
    int val = 42;
    int *a  = &val;
    int **b = &a;
    foo(a, b);
	// cout << **b;
    return 0;
}
