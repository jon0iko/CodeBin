#include <bits/stdc++.h>

typedef struct Student {
    char name[101];
    int roll;
    char contact[16];
    int k;
    double marks[20];
}Student;

int match(char a[], char b[]) {
    int x = strlen(a);
    int y = strlen(b);
    int j;

    for (int i = 0; i <= x - y; i++) {

        for (j = 0; j < y; j++) {
            if (a[i + j] != b[j]) {
                break;
            }
        }

    if (j == y) return 1;
    }
    return 0;
}

void print(Student students[], int n, char matchS[]) {

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (match(students[i].name, matchS)) {
            count++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (match(students[i].name, matchS)) {
            double avg = 0.0;
            for (int j = 0; j < students[i].k; j++) {
                avg += students[i].marks[j];
            }
            avg /= students[i].k;

            printf("%s %d %s %.2lf\n", students[i].name, students[i].roll, students[i].contact, avg);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %s %d", students[i].name, &students[i].roll, students[i].contact, &students[i].k);
        for (int j = 0; j < students[i].k; j++) {
            scanf("%lf", &students[i].marks[j]);
        }
    }

    char matchS[101];
    scanf("%s", matchS);

    print(students, n, matchS);

    return 0;
}