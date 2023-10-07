#include <stdio.h>
typedef long long int lli;

int strleng(char a[]) {
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }
    return l;
}

int main()
{
    char s[1000001], p[1000001];
    scanf("%s", s);
    scanf("%s", p);

    int ans = 0;
    int n = strleng(s);
    int m = strleng(p);

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (s[i + j] != p[j]) {
                break;
            }
        }
        if (j == m) {
            ans++;
        }
    }


    printf("%d\n", ans);

    return 0;
}