#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int r;
    cin >> s;
    cin >> r;

    int n = s.length();
    r = r % n;

    // while (r--)
    // {
    //     char temp = s[0];
    //     for (int i = 0; i < n-1; i++)
    //     {
    //         s[i] = s[i+1];
    //     }
    //     s[n-1] = temp;
    // }

    for(int i = 0; s[i] != '\0'; ++i) {
		printf("%c", s[(i + r) % n]);
	}
    
    cout << endl;
    // cout << s << endl;

    return 0;
}