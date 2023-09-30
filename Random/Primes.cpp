#include <iostream>
using namespace std;

int main() {

    int n, i, j;
    cin>>n;
    

    for ( i = 2; i <= n; i++)
    {
        bool prime = true;
        for ( j = 2; j <= n; j++)
        {
            if ((i % j == 0) && (i != j))
            {
                prime = false;
                break;
            }
        }

        if (prime)
        {
            cout<<i<<" ";
        }
    }
    

    return 0;
}