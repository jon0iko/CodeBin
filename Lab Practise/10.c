#include <stdio.h>
typedef long long ll;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        double a, as, ct, m, f, total;
        char grade;
        scanf("%lf %lf %lf %lf %lf", &a, &as, &ct, &m, &f);
        f = (f * 40) / 100;
        m = (m * 30) / 50;
    
        total = f + m + ct + as + a;
        if (total >= 90)
        {
            printf("Student %d : A\n", i);
        }
        else if (total >= 86)
        {
            printf("Student %d : A-\n", i);
        }
        else if (total >= 82)
        {
            printf("Student %d : B+\n", i);
        }
        else if (total >= 78)
        {
            printf("Student %d : B\n", i);
        }

        else if (total >= 74)
        {
            printf("Student %d : B-\n", i);
        }
        else if (total >= 70)
        {
            printf("Student %d : C+\n", i);
        }
        else if (total >= 66)
        {
            printf("Student %d : C\n", i);
        }
        else if (total >= 62)
        {
            printf("Student %d : C-\n", i);
        }
        else if (total >= 58)
        {
            printf("Student %d : D+\n", i);
        }
        else if (total >= 55)
        {
            printf("Student %d : D\n", i);
        }
        else
        {
            printf("Student %d : F\n", i);
        }
    }

    return 0;
}