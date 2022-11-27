#include <cs50.h>
#include <stdio.h>

void getCollatz(int n);

int main(void){
    int colatz = get_int("Where to start? ");

    getCollatz(colatz);
}

void getCollatz(int n){
    if(n == 1){
        printf("%i\n", n);
        return;
    }

    printf("%i\n", n);
    if(n%2 == 0){
        n = n/2;
    }else if(n%2 != 0){
        n = 3*n + 1;
    }

    getCollatz(n);
}