#include <cs50.h>
#include <stdio.h>

int main(void){
    // Prompt user for values
    int x = get_int("x: ");
    int y = get_int("y: ");
    int z = x + y
    printf("%i\n", z);

     // Prompt user for values 32 bit
    long x = get_long("x: ");
    long y = get_long("y: ");
    long z = x + y
    printf("%i\n", z);

    if(x < y){
        printf("x is smaller than y.");
    }else if(x > y){
        printf("y is smaller than x.");
    }else{
        printf("x and y are equal.");
    }
}