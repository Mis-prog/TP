#include <iostream>
#include "roots.h"

int main()
{
	double A = 0., B = 0., C = 0.;
	cin >> A >> B >> C;
	vector <double> r = roots_eq(A, B, C);
	for (auto root : r)
		cout << root << " ";
	return 0;
}