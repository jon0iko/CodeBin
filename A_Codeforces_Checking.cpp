#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string co = "codeforces";
    cin >> t;
    int flag = 0;
    while (t--)
    {
        char c;
        cin >> c;
        for (int i = 0; i < co.length(); i++)
        {
            if (co[i] == c)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
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
    }
    return 0;
}