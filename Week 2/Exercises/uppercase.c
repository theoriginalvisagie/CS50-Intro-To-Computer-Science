#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){//void means not tak any CL arguments
    string s = get_string("Before");
    printf("After: ");

    for(int i = 0; int n = strlen(s); i < n; i++){
        // if(s[i] >= 'a' && s[i] <= 'z'){
        //     printf("%c",s[i] - 32)
        // }else{
        //     printf("%c", s[i]);
        // }

        // if(islower(s[i])){
        //     // printf("%c",s[i] - 32);
        //     printf("%c",toupper(s[i]));
        // }else{
        //     printf("%c", s[i]);
        // }

        printf("%c",toupper(s[i]));
    }
    printf("\n");
}