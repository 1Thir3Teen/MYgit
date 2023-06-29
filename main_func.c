#include <stdio.h>

int fst_var = 10;

int main()
{
    printf("%d is my fst_var\n",fst_var);

    fst_var++;
    --((fst_var++)++);

    printf("%d is my snd fst_var\n",fst_var);

    printf("Hello Boys\n");

    return 0;
}
