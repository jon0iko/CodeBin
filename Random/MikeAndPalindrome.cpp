#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cin>>s;
    int count = 0;

    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[(s.length() - i - 1)])
        {
            count += 1;
        }
    }

    if (count == 1)
    {
        cout<<"YES"<<endl;
    } else if ((count == 0) && (s.length() % 2 != 0))
    {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    
    return 0;
}