#include <iostream>
#include <math.h>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    double r, result;
    const double pi = 2 * acos (0.0);
    cin>>T;

    for (int i = 1; i <= T; i++)
    {
        cin>>r;
        double sqa = pow((r*2), 2);
        double circa = pi*r*r;
        double result = sqa - circa;
        cout<< fixed << setprecision(2);
        cout<<"Case "<<i<<": "<<result<<endl;
    }
    return 0;
    
}