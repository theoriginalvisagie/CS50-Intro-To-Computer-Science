#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
    string s = get_string("s: ");

    string t = s;

    t[0] = toupper(t[0]);

    printf("s: %s", s);
    printf("t: %s", t);
}

/*======================*/
// Correct Solution
// Dynamic memory allocation

int main(void){
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    if(t == NULL){
        return 1;
    }

    strcpy(t, s);

    if(strlen(t) > 0){
        t[0] = toupper(t[0]);
    }

    printf("s: %s", s);
    printf("t: %s", t);

    free(t);
}