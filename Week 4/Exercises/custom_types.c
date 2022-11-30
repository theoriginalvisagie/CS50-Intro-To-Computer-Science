#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
    struct car
    {
        int year;
        char model[10];
        char olat[7];
        int omdemeter;
        double engine_size;
    }

    typedef struct car car_t;

    /*========================*/

    typedef struct car
    {
        int year;
        char model[10];
        char plate[7];
        int omdemeter;
        double engine_size;
    }
    car car_t;

    car_t mycar;

    mycar.year = 2022;
}