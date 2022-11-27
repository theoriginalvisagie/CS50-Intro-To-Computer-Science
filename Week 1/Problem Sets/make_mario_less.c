#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do{
        height = get_int("Height: ");
    }
    while(height <= 0);

    printf("Height: %i\n", height);

    for(int i = 0; i < height; i++){
        for (int space = height - i - 1; space > 0; space--){
            printf(" ");
        }
        for (int hash = 0; hash < i + 1; hash++){
            printf("#");
        }
        printf("\n");
    }
}