#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 22;
    int *ptr = &a;

    printf("Linked List use in Pointers");

    printf("Head of the first block of linked list %p\n", &a);
    printf("Data of the First Block of linked list %d\n", a);
    printf("Next of the First Block of Linked list %p\n", &ptr);
}