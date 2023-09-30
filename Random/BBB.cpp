#include <iostream>
using namespace std;

int main()
{
    int a, b, i;
    cin >> a >> b;

    for (i = 0; a <= b; i++)
    {
        a = a * 3;
        b = b * 2;
    }
    cout << i << endl;
    return 0;
}

1
14
3
3
4
8
100
4
12
15
25
40