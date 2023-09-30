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
      cout<<"Case "<<i<<": "<<a<<endl;
    } else if ((b > a && b < c) || (b > c && b < a))
    {
      cout<<"Case "<<i<<": "<<b<<endl;
    } else if ((c > a && c < b) || (c > b && c < a)) {
      cout<<"Case "<<i<<": "<<c<<endl;
    }
  
  }
  return 0;
}