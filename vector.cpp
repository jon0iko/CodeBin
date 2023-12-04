#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;
    size_t size;
    size_t capacity;
} Vector;

void initVector(Vector *vec) {
    vec->arr = NULL;
    vec->size = 0;
    vec->capacity = 0;
}

void pushBack(Vector *vec, int value) {
    if (vec->size >= vec->capacity) {
        vec->capacity = (vec->capacity == 0) ? 1 : vec->capacity * 2;
        vec->arr = (int*) realloc(vec->arr, vec->capacity * sizeof(int));
        if (vec->arr == NULL) {
            printf("Memory allocation failed.\n");
            exit(EXIT_FAILURE);
        }
    }
    vec->arr[vec->size++] = value;
}

int getValueAt(Vector *vec, size_t index) {
    if (index >= vec->size) {
        printf("Index out of bounds.\n");
        exit(EXIT_FAILURE);
    }
    return vec->arr[index];
}

void deleteValue(Vector *vec, int value) {
    size_t i, j;

    for (i = 0; i < vec->size; ++i) {
        if (vec->arr[i] == value) {
            for (j = i; j < vec->size - 1; ++j) {
                vec->arr[j] = vec->arr[j + 1];
            }
            vec->size--;
            return;
        }
    }

    printf("Value %d not found in the vector.\n", value);
}

void pop_back(Vector *vec) {
    if (vec->size == 0) {
        printf("Vector is empty, cannot pop.\n");
        return;
    }
    vec->size--;
}

int main() {
    Vector myVector;
    initVector(&myVector);

    pushBack(&myVector, 10);
    pushBack(&myVector, 20);
    pushBack(&myVector, 30);

    printf("Before pop_back:\n");
    for (size_t i = 0; i < myVector.size; ++i) {
        printf("%d ", myVector.arr[i]);
    }
    printf("\n");

    pop_back(&myVector); // Remove the last element

    printf("After pop_back:\n");
    for (size_t i = 0; i < myVector.size; ++i) {
        printf("%d ", myVector.arr[i]);
    }
    printf("\n");

    free(myVector.arr);

    return 0;
}
