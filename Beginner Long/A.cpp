#include <iostream>
#include <cmath>
using namespace std;

    int main() {
    
    long long int n,a,b;

    while (n--)
    {
        cin>>a>>b;
        long long int power = pow(a, b);
        long long int p = pow(10, 9) + 7;
        cout>> power % p;
    }
    

    return 0;
}