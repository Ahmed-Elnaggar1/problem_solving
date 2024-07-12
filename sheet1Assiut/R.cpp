#include <iostream>
using namespace std;
int main()
{
	int x, year, month, day;
	cin >> x;
	year = x / 365;
	month = (x % 365) / 30;
	day = x - ((year * 365) + (month * 30));
	cout << year << " years" << endl << month << " months" << endl << day << " days" << endl;
	return 0;

}
