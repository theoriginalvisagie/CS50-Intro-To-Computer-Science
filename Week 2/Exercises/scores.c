#include <cs50.h>
#include <stdio.h>

int main(void){
    int n = get_int("How many scores do you have? ");
    int scores[n];

    for(int i = 0; i < n; i++){
        scores{i} = get_int("Scores: ");
    }

    
    printf("The average os %f\n", (scores[0] + scores[1] + scores[3])/3.0);

    string s = "HI!";
    printf("%i %i %i\n", s[0], s[1], [2]);

}