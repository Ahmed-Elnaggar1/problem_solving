#include <iostream>
using namespace std;

int main()
{
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	long long res = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
	if (res < 10)
		cout << 0 << res << endl;
	else
		cout << res << endl;
	return 0;

}
