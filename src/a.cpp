#include <math.h>

double a(int i)
{
	return (pow(-1, i)) * (1 - ((pow(i, 2) + 1) / (pow(i, 2) + 3)));
}
