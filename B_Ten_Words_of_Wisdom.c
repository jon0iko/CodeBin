#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--) {
        int n,ans,flag=0;
        scanf("%d",&n);
        for (int i = 1; i <= n; i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            if (a<=10)
            {
               if (b>flag)
               {
                   flag=b;
                   ans=i;
               }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}