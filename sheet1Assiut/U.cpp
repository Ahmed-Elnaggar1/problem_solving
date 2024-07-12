#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a;
	cin >> a;
	float check = a-int(a);
	cout << fixed << setprecision(3);
	if (check == 0)
		cout << "int "<<int(a)<<endl;
	else
		cout << "float "<<int(a)<<" "<<check<<endl;

	return 0;

}
