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
        int a,b,c;
        cin>>a>>b>>c;
        if (a==c-b)
        {
            cout<<'+'<<endl;
        } else
        {
            cout<<'-'<<endl;
        }

    }
    

    return 0;
}