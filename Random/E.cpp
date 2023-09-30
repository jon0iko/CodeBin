#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

float x[100], y[100];

double coDis (int a, int b) {
    double distance = sqrt(abs(((x[a] - x[b]) * (x[a] - x[b])) + abs((y[a] - y[b]) * (y[a] - y[b]))));
    return distance;
}

int main() {
    int N;
    double sum = 0;
    float R;
    double pi = acos(-1);
    cin>>N>>R;
   

    for (int i = 0; i < N; i++)
    {
        cin>>x[i]>>y[i];
    }
    

    for (int i = 1; i < N; i++)
    {
        sum = sum + coDis(i, i-1);
    }
    
    double ropeLength =  sum + coDis(0, N-1) + (2*pi*R);

    printf("%.2lf\n",ropeLength);

    return 0;
}   