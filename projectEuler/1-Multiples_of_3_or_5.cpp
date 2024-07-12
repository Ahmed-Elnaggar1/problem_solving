#include <iostream>
using namespace std;

int main()
{

    int number = 1000;
    int x3 = (number - 1) / 3;
    int x5 = (number - 1) / 5;
    int x15 = (number - 1) / 15;

    int sum1 = (x3 * (3 + 3 * x3)) / 2;
    int sum2 = (x5 * (5 + 5 * x5)) / 2;
    int sum3 = (x15 * (15 + 15 * x15)) / 2;
    int sum = sum1 + sum2 - sum3;
    cout << sum;

    return 0;
}
