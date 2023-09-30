#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int count=n;
        string s;
        cin>>s;
        for (int i = 0; i < s.length()/2; i++)
        {
            if ((s[i]=='1' && s[n-1]=='0') || (s[i]=='0' && s[n-1]=='1'))
            {
                count -= 2;
                n--;
            } else {
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
    
}