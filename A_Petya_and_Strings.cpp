#include <bits/stdc++.h>
using namespace std;

int main() {
	string n,x;
    int result=0;
    cin>>n>>x;
 
    for(int i=0;i<n.length();i++) {
        int ascii = n[i];
        int ascii2 = x[i];
        if (ascii < 97)
        {
            n[i] += 32;
        } else if (ascii2 < 97)
        {
            x[i] += 32;
        }
        
        // if (n[i] > x[i])
        // {
        //     result = 1;
        //     break;
        // } else if (n[i] < x[i])
        // {
        //    result = -1;
        //    break;
        // }
    }
    cout<<(n[2] < x[2])<<endl;
    // cout<<result<<endl;
    return 0;
}