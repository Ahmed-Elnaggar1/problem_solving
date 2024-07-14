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
 
        // Step 1: Count the number of ones in the binary representation of N
        int countOnes = 0;
        int temp = N;
        while (temp > 0) {
            if (temp & 1) { // Check if the least significant bit is 1
                countOnes++;
            }
            temp = temp >> 1; // Right shift temp by 1 to process the next bit
        }
 
        // Step 2: Create a new number with the same number of ones
        int result = (1 << countOnes) - 1;
 
        // Output the result
        cout << result << endl;
    }
   
    return 0;
}