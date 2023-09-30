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
    int n,x;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++) {
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    for (int i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}