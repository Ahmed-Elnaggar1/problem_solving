//not working o(1)

/*#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int num1, num2;
    
    int sumOfFirst = 0;
    int sumOfSecond = 0;
    int a, an;
    int maxi, mini;
    while (t--)
    {
        //adjusting parameters for equation to get number of terms an = a+(n-1)d
        // n = ((an-a)/d) +1
        cin >> num1 >> num2;
        maxi = max(num1, num2);
        mini = min(num1, num2);

        if (mini % 2 == 1)
        {
            a = mini + 2;
        }
        else
        {
            a = mini + 1;
        }
        if (maxi % 2 == 1)
        {
            an = maxi - 2;
        }
        else
        {
            an = maxi - 1;
        }
        if (an < a)
        {
            cout << "0"<<endl;
        }
        else
        {
            int n = ((an - a) / 2) + 1;
            float x = (float)n / 2;

            long long Sn = x * float(a + an);
            cout <<Sn << endl;
        }
        
    }
   
    return 0;
}*/


#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int sum = 0;
        int maxi = max(x, y);
        int mini = min(x, y);

        if (mini % 2 == 0)
        {
            mini++;
        }
        else
        {
            mini = mini + 2;
        }
        for (int i = mini; i < maxi; i += 2)
        {
            sum = sum + i;
        }
        cout << sum << endl;
        
    }
   
    return 0;
}
   
