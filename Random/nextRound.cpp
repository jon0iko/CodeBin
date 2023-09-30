#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, count = 0;
    cin>>n>>k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    
    for (int i = 0; i < n; i++)
    {
        int key = arr[k-1];
        if ((arr[i] >= key) && (arr[i]  > 0))
        {
            count += 1;
        }
        
    }
    
    cout<<count<<endl;
    return 0;
}