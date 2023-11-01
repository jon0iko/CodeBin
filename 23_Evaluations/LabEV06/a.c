#include <stdio.h>
typedef long long int lli;

typedef struct Student
{
    double height;
    int roll;
} Student;

int main()
{
    int n, k;
    scanf("%d", &n);
    Student students[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &students[i].height);
        students[i].roll = i + 1;
    }

    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (students[j].height > students[j + 1].height)
            {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("%d\n", students[k - 1].roll);

    return 0;
}