#include <stdio.h>
#include <stdlib.h>
typedef long long int lli;

typedef struct vector{

    int size;
    int* value;

    vector(){
        size = 5;
        value = (int*) calloc(size, sizeof(int));
    }

    int getValue(int index) {
        if (index>=size)
        {
            return -1;
        }
        else {
            return value[index];
        }
        
    }

    void addValue(int x) {
        size++;
        value = (int*) realloc(value, (size*sizeof(int)));
        value[size-1] = x;
        return;
    }

    void deleteValue() {
        size--;
        printf("%d\n",size);
        value = (int*) realloc(value, (size*sizeof(int)));
    }


}vector;

int main()
{
    vector v = vector();
    
    for (int i = 0; i < 5; i++)
    {
        v.value[i] = i+1;
    }
    
    // printf("%d\n",v.getValue(2));

    v.deleteValue();
    // v.deleteValue();

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%d\n",v.value[i]);
    // }
    
    return 0;
}