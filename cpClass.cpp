#include <bits/stdc++.h>
using namespace std;

void pairSorting()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());
    // use sort(v.begin(),v.end(), comp) if wanna use customized sorting

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}

void countingSort() // use when 1 <= a[i] <= 10^7
{

    int n;
    cin >> n;
    vector<int> a(n);


    int mx = 0, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn,a[i]);
    }

    vector<int> frequency(mx + 1, 0);

    for (int i = 0; i < n; i++)
    {
        frequency[a[i]]++;
    }

    vector<int> ans(n);

    for (int i = mn, j = 0; i <= mx; i++)
    {
        for (int cnt = 1; cnt <= frequency[i]; cnt++)
        {
            ans[j++] = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << '\n';
    }
}

int main()
{
    vector<int> v(5);
    v.push_back(2);

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",v[i]);
    }
    
    return 0;
}