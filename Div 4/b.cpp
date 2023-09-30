#include <iostream>
#include <string>
using namespace std;

int convert(char l) {
    int ret = l;
    return ret;
}

int main() {    
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (convert(s.at(i)) > max)
            {
                max = s.at(i);
            }
            
        }
        int result = max - 'a' + 1;
        cout<<result<<endl;

    }

    return 0;
}