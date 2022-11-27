#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // check there is only 1 arguments and it is a number else returns instructions
    if (argc == 2 && isdigit(*argv[1]))
    {
        int k = atoi(argv[1]); // get the ceasar KEY value convert into integar
        string s = get_string("plaintext: ");

        printf("ciphertext: ");

        // Convert letters to cipher equivalent
        for (int i = 0, n = strlen(s) ; i < n; i++)
        {

            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", (((s[i] - 'a') + k) % 26) + 'a');
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%c", (((s[i] - 'A') + k) % 26) + 'A');
            }
            else
            {
                printf("%c", s[i]);
            }
        }

        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

}