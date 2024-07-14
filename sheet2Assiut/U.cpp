#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    long long totalSum = 0;
    for (int i = 1; i <= N; ++i) {
        int digitSum = sumOfDigits(i);
        if (digitSum >= A && digitSum <= B) {
            totalSum += i;
        }
    }

    cout << totalSum << endl;

    return 0;
}
