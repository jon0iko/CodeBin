#include <stdio.h>
#include <string.h>

void printDigit(char digit) {
    char digits[10][5][3] = {
        {
            " * ",
            "* *",
            "* *",
            "* *",
            " * "
        },
        {
            "   ",
            "  *",
            "   ",
            "  *",
            "   "
        },
        {
            " * ",
            "  *",
            " * ",
            "*  ",
            " * "
        },
        {
            " * ",
            "  *",
            " * ",
            "  *",
            " * "
        },
        {
            "   ",
            "* *",
            " * ",
            "  *",
            "   "
        },
        {
            " * ",
            "*  ",
            " * ",
            "  *",
            " * "
        },
        {
            " * ",
            "*  ",
            " * ",
            "* *",
            " * "
        },
        {
            " * ",
            "  *",
            "   ",
            "  *",
            "   "
        },
        {
            " * ",
            "* *",
            " * ",
            "* *",
            " * "
        },
        {
            " * ",
            "* *",
            "   ",
            "  *",
            "   "
        }
    };

    int index = digit - '0';

    for (int i = 0; i < 5; i++) {
        printf("%s", digits[index][i]);
    }
}

int main() {
    char str[100];

    printf("Enter an integer: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        printDigit(str[i]);
    }
    
    printf("\n");

    return 0;
}
