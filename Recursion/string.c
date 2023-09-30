#include <stdio.h>
typedef long long int lli;

int length(char a[]) {
    int l;
    for (int i = 0; a[i] != '\0'; i++)
    {
        l++;
    }
    return l;
}

int lengthR (char a[], int i){

    if (a[i]=='\0')
    {
        return i;
    }
    
    lengthR(a,i+1);
    
}


void concat(char a[], char b[]) {
    int aL = length(a);
    int bL = length(b);

    int i;
    for (i = 0; b[i] != '\0'; i++)
    {
        a[aL+i] = b[i];
    }
    
    a[aL+i] = '\0';

}

void strcat_recursive(char dest[], const char src[], int destIndex) {

    if (src[0] == '\0') {
        return; 
    }
    
    dest[destIndex] = src[0];
    
    
    strcat_recursive(dest, src + 1, destIndex + 1);
}

void copy(char a[], char b[]) {
    int i;
    for ( i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
}

void copyR(char a[], char b[],int i) {
    if (a[i]=='\0')
    {
        b[i]=='\0';
        return;
    }
    
    b[i] = a[i];

    copyR(a,b,i+1);
}

int compare(char a[], char b[]) {
    int i =0;
    while (a[i] == b[i])
    {
        if (a[i]=='\0')
        {
            return 0;
        }
        i++;
    }

    if (a[i]>b[i])
    {
        return 1;
    }
    else {
        return -1;
    }

}

int compareR(char a[], char b[], int i){
    if (a[i]=='\0'&&b[i]=='\0')
    {
        return 0;
    }
    else if (a[i]=='\0')
    {
        return -1;
    }
    else if (b[i]=='\0')
    {
        return 1;
    }
    else if (a[i]>b[i])
    {
        return 1;
    }
    else if (a[i]<b[i])
    {
        return -1;
    }
    
    compareR(a,b,0);
}

int main()
{
    char a[50],b[50];
    scanf("%s", a);
    getchar();
    scanf("%s", b);

    // copyR(a,b,0);

    printf("%d\n",compareR(a,b,0));

    // copy(a,b);

    // printf("%s\n",b);

    // printf("%d\n", lengthR(a,0));

    return 0;
}