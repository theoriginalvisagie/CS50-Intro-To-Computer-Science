#include <stdio.h>
#include <cs50.h>

int main(void){
    int x = get_long("x: ");
    int y = get_long("y: ");
    float z = (float)x / (float)y
    printf("%.2f\n", z); //.2 = amount of decimal points.

    // if(x < y){
    //     printf("x is smaller than y.");
    // }else if(x > y){
    //     printf("y is smaller than x.");
    // }else{
    //     printf("x and y are equal.");
    // }
}