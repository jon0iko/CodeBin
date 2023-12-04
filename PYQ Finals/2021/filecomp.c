#include <stdio.h>
typedef long long int lli;


int compare(FILE *f1, FILE *f2) {
    char ch1, ch2;

    while ((ch1 = fgetc(f1)) != EOF && (ch2 = fgetc(f2)) != EOF) {
        if (ch1 != ch2) {
            // If characters are not the same, check for whitespace error
            if (ch1 != ' ' && ch1 != '\t' && ch1 != '\n' &&
                ch2 != ' ' && ch2 != '\t' && ch2 != '\n') {
                return 0; // Return 0 for any other kind of mismatches
            }
        }
    }
    // Check if both files are at their ends
    if (ch1 == EOF && ch2 == EOF)
        return 1; // Return 1 if contents are exactly the same
    else
        return 2; // Return 2 for whitespace error
}

int main()
{
    FILE *f1,*f2;
    char fname1[100],fname2[100];
    scanf("%s %s", fname1, fname2);
    f1 = fopen(fname1, "r");
    f2 = fopen(fname2, "r");

    int ans = compare(f1,f2); 

    if (ans==1)
    {
        printf("Same\n");
    }
    else if (ans==2)
    {
        printf("Whitespace Error\n");
    }
    else {
        printf("Different\n");
    }
    return 0;
}