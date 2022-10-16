#include <stdio.h>
#include <stdlib.h>


int main(){
    int a = 22;
    int *ptr = &a;

    printf("Address of A - %p\n", &a);
    printf("Block A - %p\n", ptr);
    printf("%p\n", *ptr);
    printf("Block B - %p\n", &ptr);
}