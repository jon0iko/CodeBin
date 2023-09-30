#include <bits/stdc++.h>
using namespace std;

bool proBef(int x, int arr[], int n) {
    arr[n];
    int product = 1,rpro=1;
    for (int i=0; i < x; i++)
    {
        product *= arr[i];
    }
    for (int j = n; j > x; j--)
    {
        rpro *= arr[j-1];
    }
    if (product == rpro)
    {
        return true;
    } else {
        return false;
    }
}

int main() {
    int t,k = -1,result;
    cin>>t;

    while (t--)
    {
        int n, product = 1;
        cin>>n;
        int arr[n];

        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (proBef(i,arr,n))
            {
                result=i;
                break;
            } else
            {
                result= -1;
            }
        }
        cout<<result<<endl;
    }

    return 0;
}   