#include "roots.h"

vector <double> roots_eq(double A, double B, double C)
{
	double D = 0.;
	D = B * B - 4. * A * C;
	vector <double> roots;
	if (A != 0)
	{
		if (D > 0)
		{
			roots.push_back(2);
			roots.push_back(-B / 2. / A - abs(sqrt(D) / 2. / A));
			roots.push_back(-B / 2. / A + abs(sqrt(D) / 2. / A));
		}
		if (D == 0)
		{
			roots.push_back(1);
			roots.push_back(-B / 2. / A);
		}
	}
	else if (B != 0)
	{
		roots.push_back(1);
		roots.push_back(-C / B);
	}
	else if (C != 0)
		roots.push_back(0);
	else roots.push_back(3);
	return roots;
}