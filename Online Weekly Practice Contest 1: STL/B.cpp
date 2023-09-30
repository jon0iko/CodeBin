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
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.pb(x);
    }
    int r;
    cin>>r;
    v.erase(v.begin()+r-1);
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for (int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}