#include <stdio.h>
typedef long long int lli;

typedef struct {
    char name[100];
    int roll;
    double marks;
    double cgpa;
} student;

int main()
{
    int n;
    scanf("%d", &n);
    student s[n];
    for(int i = 0; i < n; i++){
        scanf("%s %d %lf %lf", s[i].name, &s[i].roll, &s[i].marks, &s[i].cgpa);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (s[j].cgpa<s[j+1].cgpa)
            {
                student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
            else if (s[j].cgpa==s[j+1].cgpa)
            {
                if (s[j].marks<s[j+1].marks)
                {
                    student temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                }
            }
            
        }
    }

    for(int i = 0; i < n; i++){
        printf("%s %d %.2lf %.2lf\n", s[i].name, s[i].roll, s[i].marks, s[i].cgpa);
    }
    
    return 0;
}