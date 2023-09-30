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
        double a,b,c;
        cin>>a>>b>>c;
        cout << hex << left << showbase << nouppercase; 
        cout << (long long) a << endl;
        // printf("0x%x\n", x);
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
        // printf("%15.02lf\n", b);
         
        cout << b << endl; 
        cout << scientific << uppercase << noshowpos << setprecision(9); 
        cout << c << endl; 
        // printf("%e\n",c);
    }
    
    return 0;
}