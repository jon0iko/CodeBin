#include <iostream>
using namespace std;

int main() {

    int T, a, b,j = 0, sum = 0;
    cin>>T;
    while (T--)
    {   
        cin>>a;
        cin>>b;
        j++;
        for (int i = a; i <= b; i++)
        {
            if (i % 2 == 0)
            {
               continue;
            } else {
                sum = sum + i;
            }
            
        }

        cout<<"Case "<<j<<": "<<sum<<endl;
        sum = 0;
    }
    

    return 0;
}