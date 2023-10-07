#include <stdio.h>
typedef long long int lli;

void towerofHanoi(int n, char S, char H, char D) {
    if (n==1)
    {
        printf("transfer disk %d from %c to %c\n",n,S,D);
        return;
    }

    towerofHanoi(n-1,S,D,H);
    printf("transfer disk %d from %c to %c\n",n,S,D);
    towerofHanoi(n-1,H,S,D);
    
}

int main()
{
    int n;
    scanf("%d", &n);
    char S,H,D;
    towerofHanoi(n,'S','H','D');
    return 0;
}