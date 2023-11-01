#include <stdio.h>

int door_key[10000001];
int res[10000001];
int prime[10000001];
int x;

void sieve(int prime[]) {
    prime[0] = prime[1] = 0;
    for (int i = 2; i*i <= 1000000; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= 1000000; j += i) {
                prime[j] = 0;
            }
        }
    }
}


int abso(int n) {
    if(n<0) {
        return n*-1;
    }
    else return n;
}

int find_prime(int number, int prime[]) {

    if (number==0 || number==1)
    {
       return 2;
    }
    
    int closest_left = number;
    int closest_right = number;
    for (int i = number; i >= 2; i--) {
        if (prime[i]) {
            closest_left = i;
            break;
        }
    }
    for (int i = number; i <= 10000001; i++)
    {
        if (prime[i]) {
            closest_right = i;
            break;
        }
    }
    
    int closest = ((abso(number - closest_left)*x)<(abso(number - closest_right)*x))? closest_left:closest_right;
    return closest;
}


int main() {
    int N;
    scanf("%d %d", &N, &x);
    for (int i = 0; i < N; i++) {
        scanf("%d", &door_key[i]);
    }
    for (int i = 0; i <= 1000000; i++) {
        prime[i] = 1;   // Initializing as prime
    }
    sieve(prime);
    for (int i = 0; i < N; i++) {
        res[i] = find_prime(door_key[i], prime);
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", res[i]);
    }

    printf("\n");
    return 0;
}