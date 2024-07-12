
#include <iostream>
using namespace std;

int q1Answer() {
    int number = 1000;
    int x3 = (number - 1) / 3; 
    int x5 = (number - 1) / 5;  
    int x15 = (number - 1) / 15;  

    int sum1 = (x3 * (3 + 3 * x3)) / 2;
    int sum2 = (x5 * (5 + 5 * x5)) / 2;
    int sum3 = (x15 * (15 + 15 * x15)) / 2;
    int sum = sum1 + sum2 - sum3;

    return sum;
}

long q2Answer() {
    long term1 = 0;
    long term2 = 1;
    long sum = 0;
    sum += term2;
    while (true)
    {
        long nextTerm = term1 + term2;
        if (nextTerm > 4000000)
        {
            break;
        }
        if (nextTerm % 2 == 0)
        {
            sum += nextTerm;
        }
        term1 = term2;
        term2 = nextTerm;
    }
    return sum;
}
long q3Answer()
{
    int n = 100;
    long sumOfFirstElements = (n * (n + 1)) / 2;
    long squareOfSum = sumOfFirstElements * sumOfFirstElements;
    long sumOfSquare = (n * (n + 1) * ((2 * n) + 1)) / 6;
    cout << squareOfSum- sumOfSquare ;
    return squareOfSum-sumOfSquare  ;
}
// Answer of Q4 least number divisble from range 1 to 20
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

long long q4Answer() {
    int n = 20;
    long long lcm_result = 1;
    for (int i = 1; i <= n; i++) {
        lcm_result = lcm(lcm_result, i);
    }
    return lcm_result;
}

int main() {


    cout << "Answer of multiples problem is " << q1Answer() << endl;
    cout << "Answer of Sum even fib terms is " << q2Answer() << endl;
    cout << "Answer of sum square difference is " << q3Answer() << endl;
    cout << "Answer of least number divisible from 1 to 20 " << q4Answer() << endl;




    return 0;
}
