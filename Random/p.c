#include <stdio.h>


int main() {

    int N, M ,sum =0, out;
    scanf("%d",&N);
    scanf("%d",&M) ;

    int asnmnt[M];

    for (int i = 0; i < M; i++)
    {
        scanf("%d",&asnmnt[i]);
        sum += asnmnt[i];
    }

    if (sum > N)
    {
        out = -1;
    } else {
        out = N - sum;
    }

    printf("%d\n",out);

    return 0;
}