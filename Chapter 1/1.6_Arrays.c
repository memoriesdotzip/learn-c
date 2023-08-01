#include <stdio.h>

#define IN 0

#define OUT 1

#define MAXLENGTH 11

#define MAXHIST 15

#define ASCII_LEN 128

int main()
{
    // “Let us write a program to count the number of occurrences of each digit, of white space characters (blank, tab, newline), and of all other characters. This is artificial, but it permits us to illustrate several aspects of C in one program.”

    // int c, numWhite, numOther;

    // numOther = numWhite = 0;

    // int numDigits[10];

    // for (int i = 0; i < 10; i++)
    // {
    //     numDigits[i] = 0;
    // }

    // while ((c = getchar()) != EOF)
    // {
    //     if (c >= '0' && c <= '9')
    //     {
    //         ++numDigits[c - '0'];
    //     }
    //     else if (c == ' ' || c == '\t' || c == '\n')
    //     {
    //         ++numWhite;
    //     }
    //     else
    //     {
    //         ++numOther;
    //     }
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", numDigits[i]);
    // }

    // printf("%d %d", numWhite, numOther);

    /*-------------*/

    // printf("Exercise1-13\n");

    // int c, state, numChar, overflow, maxVal, len;

    // int numWordsByLength[MAXLENGTH];

    // state = OUT;

    // numChar = overflow = 0;

    // for (int i = 0; i < MAXLENGTH; i++)
    // {
    //     numWordsByLength[i] = 0;
    // }

    // // Sorting words by length in the array

    // while ((c = getchar()) != EOF)
    // {
    //     if (c == ' ' || c == '\n' || c == '\t')
    //     {
    //         state = OUT;
    //         if (numChar > 0)
    //         {
    //             if (numChar < MAXLENGTH)
    //             {
    //                 ++numWordsByLength[numChar];
    //             }
    //             else
    //             {
    //                 ++overflow;
    //             }
    //         }
    //         numChar = 0;
    //     }

    //     else if (state == OUT)
    //     {
    //         state = IN;
    //         numChar = 1;
    //     }

    //     else
    //     {
    //         ++numChar;
    //     }
    // }

    // maxVal = 0;

    // for (int i = 1; i < MAXLENGTH; i++)
    // {
    //     if (numWordsByLength[i] > maxVal)
    //     {
    //         maxVal = numWordsByLength[i];
    //     }
    // }

    // len = 0;

    // for (int i = 1; i < MAXLENGTH; i++)
    // {
    //     printf("%5d-%5d : ", i, numWordsByLength[i]);
    //     if (numWordsByLength[i] > 0)
    //     {
    //         if ((len = numWordsByLength[i] * MAXHIST / maxVal) <= 0)
    //         {
    //             len = 1;
    //         }
    //     }
    //     else
    //     {
    //         len = 0;
    //     }

    //     while (len > 0)
    //     {
    //         putchar('*');
    //         --len;
    //     }
    //     printf("\n");
    // }

    // printf("%d Words with character length >= %d\n", overflow, MAXLENGTH);

    /*---------*/

    printf("Exercise 1-14");

    int c;
    int charArray[ASCII_LEN];
    int maxVal;
    int len;

    for (int i = 0; i < ASCII_LEN; i++)
    {
        charArray[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        ++charArray[c];
    }

    maxVal = len = 0;

    for (int i = 0; i < ASCII_LEN; i++)
    {
        if (charArray[i] > maxVal)
        {
            maxVal = charArray[i];
        }
    }

    for (int i = 0; i < ASCII_LEN; i++)
    {
        if (charArray[i] > 0)
        {
            if ((len = charArray[i] * MAXHIST / maxVal) == 0)
            {
                len = 1;
            }
        }
        else
        {
            len = 0;
        }

        printf("%5c - %5d : ", i, charArray[i]);
        while (len > 0)
        {
            putchar('*');
            --len;
        }
        putchar('\n');
    }
}
