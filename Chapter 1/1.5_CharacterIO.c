#include <stdio.h>

int main()
{

    // printf("Exercise1-6\n");

    // int c = (getchar()!=EOF);
    // printf("%d\n", c);

    /*---------------*/

    // printf("Exercise1-7\n");
    // printf("%d\n", EOF);

    /*---------------*/

    // printf("Exercise1-8\n");

    // int c, spaces, t, nl;
    // spaces= 0;
    // t = 0;
    // nl = 0;

    // while((c = getchar())!= EOF){
    //     if(c == ' '){
    //         ++spaces;
    //     }
    //     if(c == '\t'){
    //         ++t;
    //     }
    //     if(c == '\n'){
    //         ++nl;
    //     }
    // }

    // printf("Spaces: %d, Tabs: %d, Newlines: %d\n", spaces, t, nl);

    /*----------*/

    // printf("Exercise1-9\n");

    // int c, d;

    // while ((c = getchar()) != EOF)
    // {
    //     if (c != ' ')
    //     {
    //         putchar(c);
    //     }
    //     /*
    //     else if ((c == ' ') && ((d = getchar()) != ' ')) //Issue: code only checks one character ahead.
    //     {
    //         putchar(c);
    //         putchar(d);
    //     }
    //     */

    //     else
    //     {
    //         putchar(c);

    //         while ((c = getchar()) == ' ')
    //         {
    //             ;
    //         }
    //         putchar(c);
    //     }
    // }

    /*----------------*/

    printf("Exercise1-10\n");

    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(c);
        }
    }
}