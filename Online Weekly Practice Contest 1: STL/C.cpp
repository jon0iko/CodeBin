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
    int q;
    cin>>q;

    while (q--)
    {
        int num;
        cin>>num;
        auto itr = lower_bound(v.begin(),v.end(), num);
        if(binary_search(v.begin(),v.end(), num)) {
            cout<<"Yes "<<(itr-v.begin())+1<<endl;
        } else {
            cout<<"No "<<(itr-v.begin())+1<<endl;
        }
    }
    
    
    return 0;
}