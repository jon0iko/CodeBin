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
        int n,k, a;
        cin>>n>>k;
        int arr[n], ans[n];
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }

        for (int i = 0; i < n; i++)
        {
            int temp = arr[i];
            for (int j = 0; j < v.size(); j++)
            {
                if (abs(v[j] - temp) <= 2)
                {
                    ans[i] = v[j];
                    v.erase(v.begin() + j);
                    break;
                }
            }
            
        }

        for (int i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}