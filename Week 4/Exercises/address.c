#include <stdio.h>
// #include <cs50.h>
int main(void){
    // int n is at specific address in memory, i.e. 0x123

    int n = 50;
    int *p = &n; // single & = address of variable, '*' to tell c you want to store an address in the pointer.
    printf("%i\n", n);

    printf("%p\n", p);

    printf("%i\n", *p); // Print what ever is at that address
}

/*============================*/
int main(void){
    typedef char *string;
    //string s = "HI!";
    char *s = "HI!";
    char *p = &s[0];

    printf("%s\n", s);
    // Below will produce the same address in memory
    printf("%p\n", p);
    printf("%p\n", s);
}

/*============================*/
// Pointer Arithmetic
int main(void){
    char *s = "HI!";

    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
}

/*============================*/
// Pointer Arithmetic
int main(void){
    int numbers[] = {1,2,3,4,5,6,7};

    printf("%i\n", *numbers);
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));
    printf("%i\n", *(numbers + 5));
    printf("%i\n", *(numbers + 6));
}