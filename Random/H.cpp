#include <iostream>
using namespace std;

int main() {
    int n;
    int toggle = 0;
    while(cin>>n) {
    if (n == 0)
    {
        break;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((j % i == 0) && (j == n))
            {
                toggle = !toggle;
            }
        }
    }
    
    if (toggle == 1)
    {
        cout<<"yes"<<endl;
        toggle = 0;
    } else {
        cout<<"no"<<endl;
        toggle = 0;
    }
}
    return 0;
}