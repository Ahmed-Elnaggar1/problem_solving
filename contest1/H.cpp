#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double n, k, a;
	cin >> n >> k >> a;
	double res = (min(n, k) / a) * max(n, k);
	long long res2 = res;
	double res3 = res - res2;
	if (abs(res3) > 0 && abs(res3) < 1)
		cout << "double" << endl;
	else if (res2 > int(res2))
		cout << "long long" << endl;
	else
		cout << "int" << endl;
	return 0;
}