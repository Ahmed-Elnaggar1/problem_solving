#include <iostream>
using namespace std;
int main()
{
	long long a;
	long long b;
	char s;
	cin >> a >> s >> b;
	if (s == '+')
		cout << a + b << endl;
	else if (s == '-')
		cout << a - b << endl;
	else if (s == '*')
		cout << a * b << endl;
	else
		cout << a / b << endl;
	return 0;
}
