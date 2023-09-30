#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    cin.ignore();

    char sentence[n];
    cin.getline(sentence, n);
    cin.ignore();

    int clen = 0, maxlen = 0;

    for (int i = 0; 1; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            if (clen > maxlen)
            {
                maxlen = clen;
            }
            
            clen = 0;   
        } else {
            clen++; 
        }

        if (sentence[i] == '\0')
        {
            break;
        }
        

    }
    
    cout<<maxlen<<endl;

    return 0;
}