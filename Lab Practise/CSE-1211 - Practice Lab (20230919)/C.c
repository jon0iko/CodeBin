#include <stdio.h>
#include <string.h>

void decrypt(int key, char ciphertext[], char plaintext[], int n) {
int ciphercode[n];
int plaincode[n];

for (int i = 0; i < n; i++) {
    if (ciphertext[i] == '_') {
        ciphercode[i] = 0;
    } else if (ciphertext[i] == '.') {
        ciphercode[i] = 27;
    }else {
        ciphercode[i] = ciphertext[i] - 'a' + 1;
    } 
}
for (int i = 0; i < n; i++) {
    int index = (i * key) % n;
        int diff = (ciphercode[i] +i) % 28;
        plaincode[index] = diff;
}
for (int i = 0; i < n; i++) {
    if (plaincode[i] == 0) {
        plaintext[i] = '_';
    } else if (plaincode[i] == 27) {
        plaintext[i] = '.';
    }else {
        plaintext[i] = plaincode[i] + 'a' - 1;
    }
}

plaintext[n] = '\0';
}

int main() {
int key;
char ciphertext[71];
char plaintext[71];

while (1) {
    scanf("%d", &key);
    if (key == 0) {
        break;
    }
    scanf("%s", ciphertext);
    int n = strlen(ciphertext);
    decrypt(key, ciphertext, plaintext, n);
    printf("%s\n", plaintext);
}

return 0;
}