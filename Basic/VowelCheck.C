#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    switch(c)
    {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':

            printf("%c is a vowel\n");
            break;
        default:
            printf("%c is a consonant\n", c);
            break;
    }

    return 0;
}