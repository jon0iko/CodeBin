#include <iostream>
using namespace std;

int main() {
    int T, N, P, sum = 0;
    int a = 6, b = 7;
    cin>>T;
    while (T--)
    {
        cin>>N;
        cin>>P;
        int days[N];
        int h;
        while (P--)
        {
            cin>>h;
            for (int i = 1; i <= N; i++)
            {
                if (i % h == 0)
                {

                    days[i] = 1;
                }
                
            }
            
        }
        for (int j: days) {
                if (j == 1)
                {
                    sum = sum + j;
                }
                
            }
        cout<<sum<<endl;
    }
    

    return 0;
}