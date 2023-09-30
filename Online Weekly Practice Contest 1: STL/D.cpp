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
    set<int> s;
    while (q--)
    {
        int x, y;
        cin >> y >> x;
        if (y == 1)
        {
            s.insert(x);
        }
        else if (y == 2)
        {
            if (s.find(x) != s.end())
            {
                s.erase(x);
            }
            else
            {
                continue;
            }
        }
        else if (y == 3)
        {
            if (s.find(x) == s.end())
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}