#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
 
        int countOnes = 0;
        int temp = N;
        while (temp > 0) {
            if (temp & 1) { 
                countOnes++;
            }
            temp = temp >> 1; 
        }
 
        int result = (1 << countOnes) - 1;
 
        cout << result << endl;
    }
   
    return 0;
}