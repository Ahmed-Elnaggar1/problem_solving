#include <iostream>
#include<iomanip>
using namespace std;
 
int main()
{
    float new_price, percentage;
    cin >> percentage >> new_price;
    new_price *= 100;
    float new_percentage = (100 - percentage);
    float old_price = new_price / new_percentage;
 
    cout << fixed << setprecision(2) << old_price;
	return 0;
 
}