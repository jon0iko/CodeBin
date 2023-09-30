#include <iostream>
#include <climits>
using namespace std;

int main() {    
    int t, n, counter = INT_MIN;
    cin>>t;
    bool same = false;

    while (t--) {
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
           for (int j = i+1; j < n; j++)
           {
                if (arr[i] == arr[j])
                {
                    same = true;
                    break;
                }
                
           }
           
        }
        
        if (same)
        {
            cout<<"NO"<<endl;
        } else if (same == false)
        {

            cout<<"YES"<<endl;
        }

        same = false;
        
    }
    return 0;
}