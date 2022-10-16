 #include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 22;
    int *ptr = &a;
    int **pptr = &ptr;
    int ***ppptr = &pptr;
    int ****pppptr = &ppptr;

    printf("%p\n", &a);
    printf("%p\n", ptr);
    printf("%p\n", pptr);
    printf("%p\n", ppptr);
    printf("%p\n", pppptr);
    printf("\n");

    printf("%d\n", a);
    printf("%d\n", *ptr);
    printf("%d\n", **pptr);
    printf("%d\n", ***ppptr);
    printf("%d\n", ****pppptr);
    printf("\n");
    printf("Changing the value of a\n");
    a = 330;
    //****pppptr = 220;

    printf("%d\n", a);
    printf("%d\n", *ptr);
    printf("%d\n", **pptr);
    printf("%d\n", ***ppptr);
    printf("%d\n", ****pppptr);
}