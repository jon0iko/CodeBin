#include <stdio.h>
typedef long long int lli;
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;

    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }

    return 1;
}

// Function to find and print the prime divisors of a number
void primeDivisors(int n, int a[]) {
  //  printf("Prime divisors of %d are: ", n);
    int k=0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            a[k++];
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    if (n > 1 && isPrime(n)) {
        a[k++];
    }
    a[k++]= 1000;
}

int main() {
    int num;
    //printf("Enter a number: ");
    scanf("%d", &num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);  
    }
    int x, k=0;
    scanf("%d",&x);
    int xdiv[x];
    int ans[num];
    for (int i = 0; i < num; i++)
    {
        int idiv[i];
        primeDivisors(x,xdiv);
        primeDivisors(i, idiv);
        sort(xdiv);
        sort(idiv);
        for (int i = 0; xdiv[i] != 1000; i++)
        {
            if (idiv[])
            {
                /* code */
            }
            
        }
        
        
    }
    
    
    return 0;
}


