#include <stdio.h>

void meow(void); // Breadcrumb to functions else where in file.

int main(void){

    while(true){
        meow();
        // printf("Meow!\n");
    }

    int counter = 0;
    while(counter <= 3){
        meow();
        // printf("Meow!\n");
        counter++;
    }

    for(int i = 0; i <= 3; i++){
        meow();
        // printf("Meow!\n");
    }
}

void meow(void){ //first void = not return anuthing, second void = no input
    printf("Meow!\n");
}

//===========================================

void meow(int n); // Breadcrumb to functions else where in file.

int main(void){
    meow(3);
}

void meow(int n){ //first void = not return anuthing, second void = no input
    for(int i = 0; i <= n; i++){  
        printf("Meow!\n");
    }
}