#include <stdio.h>
#include <stdlib.h>

int main(){

    // Arrays are actually treated as pointers

    int *arr[100];
    *arr[22] = 22;
    printf("%d\n", *arr[22]);
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
    
}