#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--)
    {
        int n, sum=0, count=0,x,y;
        cin>>n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i] < 0)
            {
                count +=1;
            }
            sum+= abs(arr[i]);
        }
        sort(arr,arr+n);
        if (count %2 == 0)
        {
            cout<<sum<<endl;
        } else {
            int p = sum-abs((2*arr[0]));
            cout<<p<<endl; 
        }
        
    }
    
    return 0;
}