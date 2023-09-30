#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int length = s.length();
    int arr[length];
    int c = 0;

    for (int i = 0; i < length; i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        else
        {
            arr[c] = s[i] - '0';
        }
        c++;
    }

    sort(arr, arr + c);

    for (int i = 0; i < c; i++)
    {
        cout << arr[i];
        if(i==c-1){
	        break;
	    }
	    cout<<"+";
    }

    return 0;
}