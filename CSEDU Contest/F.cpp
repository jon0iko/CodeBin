#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int T, a, b, c, arr[3];
    string result;
    cin>>T;

    for (int i = 1; i <= T; i++)
    {   
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+3);
        
        int sqa = pow(arr[0], 2);
        int sqb = pow(arr[1], 2);
        int sqc = pow(arr[2], 2);

        if (sqc == sqa + sqb)
        {
            result = "yes";
        } else {
            result = "no";
        }
        
        cout<<"Case "<<i<<":"<<" "<<result<<endl;
    }
    return 0;
}