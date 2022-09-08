#include <stdio.h>
int main()
{

    char str[100], ch;
    int i, vowel, consonant, digit, word, others;
    printf("Eneter a strin =:");
    gets(str);
    i = vowel = consonant = digit = word = others = 0;

    for (i = 0;( ch = str[i]) != '\0'; i++)
    {

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }

        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            consonant++;
        }

        else if (ch <= '0' && ch >= '9')
        {
            digit++;
        }

        else if (ch == ' ')
        {
            word++;
        }

        else
            others++;
    }
       word++;


        printf("number of vowel =%d\n", vowel);

    printf("number of consonant =%d\n", consonant);
    
       printf("number of  digit =%d\n",  digit);
    
         printf("number of word =%d\n", word);
    
       printf("number of others =%d", others);
    getch();
}