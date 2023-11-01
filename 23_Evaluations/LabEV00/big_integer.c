#include<stdio.h>

int max(int a, int b)
{
    if(a>b) return a;
    else return b;
}

int main()
{
    char a[100], b[100], temp[100];
    scanf("%s", a);
    scanf("%s", b);
    int sz1=0, sz2=0;
    for(int i=0; ; i++)
    {
        temp[i]=a[i];
        if(a[i]=='\0') break;
        sz1++;
    }
    for(int i=sz1-1, j=0; i>=0; i--, j++)
    {
        a[j]=temp[i];
    }
    for(int i=0; ; i++)
    {
        temp[i]=b[i];
        if(b[i]=='\0') break;
        sz2++;
    }
    for(int i=sz1-1, j=0; i>=0; i--, j++)
    {
        b[j]=temp[i];
    }

    if(sz1>sz2)
    {
        for(int i=sz2; i<sz1+1; i++)
        {
            a[i]='0';
        }
    }
    else
    {
        for(int i=sz1; i<sz2+1; i++)
        {
            a[i]='0';
        }
    }

    int carry=0;

    int ans[100];
    int sz=max(sz1, sz2);
    for(int i=0; i<sz+1; i++)
    {
        ans[i]=((a[i]-'0' + b[i]-'0')  + carry) % 10;
        carry=(a[i]-'0' + b[i]-'0')/10;
    }
    for(int i=sz; i>=0; i++)
    {
        printf("%d", ans[i]);
    }

    return 0;
}
