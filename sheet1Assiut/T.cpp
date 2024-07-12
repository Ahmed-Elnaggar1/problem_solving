#include <iostream>
using namespace std;
int main()
{
	int a, b, c, large, med, small;
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		large = a;
		if (b >= c)
		{
			med = b;
			small = c;
		}
		else
		{
			med = c;
			small = b;
		}
	}
	else if (b >= a && b >= c)
	{
		large = b;
		if (a >= c)
		{
			med = a;
			small = c;
		}
		else
		{
			med = c;
			small = a;
		}
	}
	else if(c>=a && c>=b)
	{
		large = c;
		if (a >= b)
		{
			med = a;
			small = b;
		}
		else
		{
			med = b;
			small = a;
		}
	}
	cout << small << endl << med << endl << large << endl << endl << a << endl << b << endl << c << endl;
	return 0;

}
