#include "OoohClassy.h"

double OoohClassy::Calculate(double x, char oper, double y)
{
	switch (oper)
	// switch like nintendo
	{
	case '+':
	// when plus sign we:
		return x + y;
	case '-':
	// when minus sign we:
		return x - y;
	case '*':
	// when asterix(multiply) sign we sign we:
		return x * y;
	case '/':
	// when slash(divide) sign we sign we:
		return x / y;
	default:
		return 0.0;
	}
}
