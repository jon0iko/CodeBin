#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define eb emplace_back
#define vsort(p) sort(p.begin(),p.end())
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        
    int p,s,r;
    cin>>p>>s>>r;
    if(r!= 1 && p == s)
    {
        cout<<"case "<<t<<":"<< "NO"<<endl;
    }
    else
    {
        cout<<"case "<<t<<":"<<"YES"<<endl;
    }
    }
    
    return 0;
}