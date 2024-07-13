#include <iostream>
using namespace std;

int main() {
    long long originalNumber, tempNumber, reversedNumber = 0;
    cin >> originalNumber;

    tempNumber = originalNumber;

    while (tempNumber > 0) {
        reversedNumber = reversedNumber * 10 + tempNumber % 10;
        tempNumber /= 10;
    }
    cout << reversedNumber << endl;
    if (originalNumber == reversedNumber) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}