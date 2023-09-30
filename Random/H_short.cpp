#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

bool square(unsigned int n) {
  int root = floor(sqrt(n));
  if (root*root == n)
  {
    return true;
  } else {
    return false;
  }
  
}


int main() {
  unsigned int n;
  while (cin>>n)
  {

    if (n == 0)
    {
      break;
    }
    
    if (square(n))
    {
      cout<<"yes"<<endl;
    } else {
      cout<<"no"<<endl;
    }
    
  }
  

  return 0;
}