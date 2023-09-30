#include <iostream>
using namespace std;

int main() {

    int N, M ,sum =0, out;
    cin>>N>>M;

    int asnmnt[M];

    for (int i = 0; i < M; i++)
    {
        cin>>asnmnt[i];
        sum += asnmnt[i];
    }

    if (sum > N)
    {
        out = -1;
    } else {
        out = N - sum;
    }
    

    cout<<out<<endl;

    return 0;
}