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
        int n,evensum=0,oddsum=0,num;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>num;
            if (num%2==0)
            {
                evensum += num;
            } else
            {
                oddsum += num;
            }
        }
        if (evensum>oddsum)
        {
            cout<<"YES"<<endl;
        } else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}