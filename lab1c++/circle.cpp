#include "stdafx.h"
#include "circle.h"


using namespace std;

void circle::changeSize(double proc)
{
	double procOf = rad / 100 * proc;
	rad += procOf;
}
double circle::Circuit()
{
	return 2 * Pi*rad;
}
double circle::Area()
{
	return Pi*rad*rad;
}
double circle::Diametr()
{
	return rad * 2;
}