#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;

    int small,capital = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int val = s[i];
        if ((val >= 65) && (val <=90))
        {
            capital += 1;
        } else if ((val >= 97) && (val <=122))
        {
            small += 1;
        }
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        int val = s[i];
        if (small >= capital)
        {
            if ((val >= 65) && (val <=90))
            {
                s[i] = s[i] + 32;
            } else {
                continue;
            }
        } 
        else if (capital > small)
        {
            if ((val >= 97) && (val <= 122))
            {
                s[i] = s[i] - 32;
            } else {
                continue;
            }
        }
    }

    cout<<s<<endl;

    return 0;
}