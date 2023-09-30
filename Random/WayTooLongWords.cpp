#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin>>n;
    string s, ans = "";

    while (n--)
    {
        cin>>s;
        int length = s.length();
        if (length > 10)
        {
            char begin = s[0];
            char end = s[length-1];
            cout<<begin<<length-2<<end<<endl;
        } else {
            cout<<s<<endl;
        }
    }
    return 0;
}