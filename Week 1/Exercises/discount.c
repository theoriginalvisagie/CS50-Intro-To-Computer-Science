#include <cs50.h>
#include <stdio.h>

float discount(float price, int percent);

int main(void){
    float regular = get_float("Regular Price: ");
    int percent_off = get_int("Percent off: ");
    float sale = discount(regular, percent_off);

    printf("Sale Price: %.2f\n". sale);
}

float discount(float price, int percent){
    return sale = price * (100 - percent) / 100;
}