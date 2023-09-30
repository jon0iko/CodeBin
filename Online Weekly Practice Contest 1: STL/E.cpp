#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define eb emplace_back
#define vsort(p) sort(p.begin(), p.end())
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    map<string, int> m;
    while (q--)
    {
        
        int type, number;
        string name;
        cin >> type;
        if(type==1) {
            cin >> name >> number;
            auto itr = m.find(name);
            if (itr != m.end())
            {
                itr->second += number;
            }
            else m.insert({name, number});
        }
        else if (type==2)
        {
            cin >> name;
            m.erase(name);
        }
        else if (type==3)
        {
            cin >> name;
            auto valu = m.find(name);
            if (valu == m.end())
            {
                cout << "0" << endl;

            }
            else
            {
                cout << valu->second << endl;
            }
        }
        
    }
    return 0;
}