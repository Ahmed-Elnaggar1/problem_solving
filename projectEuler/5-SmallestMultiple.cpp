
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {

    int n = 20;
    long long lcm_result = 1;
    for (int i = 1; i <= n; i++) {
        lcm_result = lcm(lcm_result, i);
    }
    cout << lcm_result;
    return 0;
}
