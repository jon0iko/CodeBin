#include <iostream>
#include <algorithm>
using namespace std;

int main() {    
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;
        int numbers[n];
        int numbers2[n];

        for (int i = 0; i < n; i++)
        {
            cin>>numbers[i];
            numbers2[i] = numbers[i];
        }

        sort(numbers, numbers+n);
        int max = numbers[n-1];
        int secMax = numbers[n-2];

        for (int i = 0; i < n; i++)
        {   
            if (numbers2[i] == max)
            {
                cout<<(numbers2[i] - secMax)<<" ";
            } else {
                cout<<(numbers2[i] - max)<<" ";
            }
        } 
        
        
    }

    return 0;
}