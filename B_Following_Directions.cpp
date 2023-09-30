#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0, y = 0;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
            {
                y += 1;
            }
            else if (s[i] == 'D')
            {
                y -= 1;
            }
            else if (s[i] == 'L')
            {
                x -= 1;
            }
            else if (s[i] == 'R')
            {
                x += 1;
            }
            if (x == 1 && y == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        s.clear();
    }
    return 0;
}

#include <stdio.h>

int main() {

    return 0;
}