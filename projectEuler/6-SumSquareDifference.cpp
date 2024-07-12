#include <iostream>
using namespace std;

int main() {
    int n = 100;
    long sumOfFirstElements = (n * (n + 1)) / 2;
    long squareOfSum = sumOfFirstElements * sumOfFirstElements;
    long sumOfSquare = (n * (n + 1) * ((2 * n) + 1)) / 6;
    cout << squareOfSum - sumOfSquare;
    return 0;
}
