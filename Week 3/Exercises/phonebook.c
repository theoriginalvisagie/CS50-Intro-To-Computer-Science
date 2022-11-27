#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    string name;
    string number;
};
person;

int main(void){
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-498-1085";   

    people[1].name = "Charlie";
    people[1].number = "+1-569-784-1235";    


    for(int i = 0; i < 2; i++){
        if(strcmp(people[i].name,"Carter") == 0){
            printf("Found %s\n",people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}

/*int main(void){
    string names[] = {"Bill","Charlie"};
    string numbers[] = {"+1-617-498-1085","+1-569-784-1235"};

    for(int i = 0; i < 2; i++){
        if(strcmp(names[i],"Bill") == 0){
            printf("Found %s\n",numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}*/