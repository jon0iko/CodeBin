// #include <stdio.h>
// typedef long long int lli;

// int main()
// {
//     int n, ans;
//     scanf("%d", &n);
//     int zero = 0, one = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if (n == 0)
//         {
//             printf("%d", zero);
//         }
//         else if (n == 1)
//         {
//             printf("%d", one);
//         }
//         else
//         {
//             ans = zero + one;
//             zero = one;
//             one = ans;
//         }
//     }
    
//     printf("%d\n", ans);
//     return 0;
    
// }

#include <stdio.h>

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
        int result = fibonacci(n);
        printf("The %dth Fibonacci number is: %d\n", n, result);
    }

    return 0;
}