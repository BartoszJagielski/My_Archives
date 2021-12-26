#include <iostream>
#include <climits>
#include <float.h>


auto main() -> int
{
	
	using namespace std;

	long double n_decimal = DBL_MAX;

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// Operator sizeoff zwraca wielkość typu lub zmiennej

	cout << "decimal ma " << sizeof(n_decimal) << " bajty" << endl;

	cout << "int ma " << sizeof (n_int) << " bajty" << endl;
	cout << "short ma "<< sizeof (n_short) << " bajty" << endl;
	cout << "long ma " << sizeof (n_long) << " bajty" <<endl;
	cout << "long long ma " << sizeof (n_llong) << " bajty" << endl;
	cout << endl;


	cout << "Wartosci maksymalne: "<< endl;

	cout << "decimal: " << n_decimal << endl;

	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long:" << n_long << endl;
	cout << "long long: " <<n_llong << endl;
	cout << endl;
}