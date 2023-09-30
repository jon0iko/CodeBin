#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool pal = true;
    char word[n];
    cin>>word;

    for (int i = 0; i < n; i++)
    {
        if (word[i] != word[(n - 1) - i])
        {
            pal = false;
            break;
        }
        
    }
    
    if (pal)
    {
        cout<<"The word is a palindrome"<<endl;
    } else {
        cout<<"Not Palindrome"<<endl;
    }
    

    return 0;
}