#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void){
    int i = get_int("i: ");
    int j = get_int("j: ");

    if(i == j)
    {   
        printf("Same\n");
    }
    else
    {
        printf("Different\n");    
    }
}

/*================================*/

int main(void){
    // string s = get_string("s: ");
    // string t = get_string("t: ");

    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // if(s == t)
    // {   
    //     printf("Same\n");
    // }
    // else
    // {
    //     printf("Different\n");    
    // }

    if(strcmp(s, t) == 0)
    {   
        printf("Same\n");
    }
    else
    {
        printf("Different\n");    
    }
}