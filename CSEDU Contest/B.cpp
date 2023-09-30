#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T,n;
    double a, b;
    cin>>T;

    while (T--)
    {
        cin>>n;
        a = floor(n/2);
        b = n - a;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}