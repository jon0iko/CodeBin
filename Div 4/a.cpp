#include <iostream>
using namespace std;

int main() {    
    int t;
    cin>>t;

    while (t--)
    {
        int a,b,c, result;
        cin>>a>>b>>c;

        if ((a > b && a < c) || (a < b && a > c))
        {
            result = a;
        } else if ((b > a && b < c) || (b < a && b > c))
        {
            result = b;
        } else if ((c > a && c < b) || (c < a && c > b)) {
            result = c;
        }
        
        cout<<result<<endl;

    }
    

    return 0;
}