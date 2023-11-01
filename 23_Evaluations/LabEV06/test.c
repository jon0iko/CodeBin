#include <stdio.h>

// Structure to store student's height and roll number
struct Student
{
    double height;
    int roll;
};

int main()
{
    int N, K;
    scanf("%d", &N); // Number of students
    struct Student students[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &students[i].height);
        students[i].roll = i + 1; // 1-based indexing
    }

    scanf("%d", &K); // Position

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (students[j].height > students[j + 1].height)
            {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Print the roll number at the Kth position
    printf("%d\n", students[K - 1].roll);

    return 0;
}