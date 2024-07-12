#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	x = x / 1000;
	if (x % 2 == 0)
		cout << "EVEN" << endl;
	else
		cout << "ODD" << endl;
	return 0;
}
