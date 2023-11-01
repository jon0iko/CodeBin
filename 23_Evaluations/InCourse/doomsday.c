#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int x, y;
    scanf("%d%d", &x, &y);
    int row[x * y + 2];
    int col[x * y + 2];
    int s = 0, r = 10, lol = y + 1;

    for (int i = 1; i <= x * y; i++) {
        if (i == lol) {
            s = r;
            r += 10;
            lol += y;
        }
        row[i] = s;
        s++;
    }

    s = 0;
    r = 1;
    lol = x + 1;

    for (int i = 1; i <= x * y; i++) {
        if (i == lol) {
            s = r;
            r++;
            lol += x;
        }

        col[i] = s;
        s += 10;
    }

    while (m--) {
        int a, b;
        scanf("%d%d", &a, &b);
        row[a * y + b + 1] = -1;
        col[b * x + a + 1] = -1;
    }

    int mx = -1, cnt = 0;

    for (int i = 1; i <= x * y; i++) {
        if (row[i] != -1) {
            cnt++;
        }

        if (row[i] == -1 || i == (x * y)) {
            if (mx < cnt)
                mx = cnt;
            cnt = 0;
        }
    }

    cnt = 0;

    for (int i = 1; i <= x * y; i++) {
        if (col[i] != -1)
            cnt++;

        if (col[i] == -1 || i == (x * y)) {
            if (mx < cnt)
                mx = cnt;
            cnt = 0;
        }
    }

    printf("%d\n", mx);

    return 0;
}