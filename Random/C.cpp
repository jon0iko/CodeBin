#include <iostream>
using namespace std;

int main() {
  int T, a, b, c, i = 0, ans;
  cin>>T;
  while (T--)
  {
    cin>>a>>b>>c;
    i++;
    if ((a > b && a < c) || (a > c && a < b))
    {
      ans = a;
    } else if ((b > a && b < c) || (b > c && b < a))
    {
      ans = b;
    } else if ((c > a && c < b) || (c > b && c < a)) {
      ans = c;
    }
    cout<<"Case "<<i<<": "<<ans<<endl;
  }
  return 0;
}