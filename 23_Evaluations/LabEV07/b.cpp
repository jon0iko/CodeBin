#include <bits/stdc++.h>
using namespace std;

int length(char a[]) {
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }

    return l;
}

int main() {
    int n;
    cin >> n;
    char s[n][10001];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += length(s[i]);
    }

    int iteration=0;
    string ans = "";

    for (int i = 0; iteration <= total; i++, iteration++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j][i]>='a' && s[j][i]<='z' || s[j][i]>='A' && s[j][i]<='Z')
            {
                ans += s[j][i];
            }
            
        }
        
    }

    cout << ans << endl;

    return 0;
    

}