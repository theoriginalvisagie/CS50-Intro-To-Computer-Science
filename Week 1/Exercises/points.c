#include <cs50.h>
#include <stdio.h>

int main(void){
    int points = get_int("How many points did you receive?");
    const int MYPOINTS = 2;

    if(points < MYPOINTS){
        printf("You didn't loose a lot");
    }else if(points > MYPOINTS){
        printf("You lost a lot");
    }
}