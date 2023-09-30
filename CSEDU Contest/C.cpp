#include <iostream>
using namespace std;

int main() {
    int T, N, d, sum = 0;
    string blank;
    cin>>T;

    for (int i = 1; i <= T; i++)
    {
        getline(cin, blank);
        cin>>N;
        for (int j = 0; j < N; j++)
        {
           cin>>d;
           if (d >= 0)
           {
                sum += d;
           }
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        sum = 0;
    }
    return 0;
}