#include <stdio.h>

void Display(void)
{
    int i = 5;

    while (i >= 1)
    {
        printf("%d ", i);
        i--;
    }
    printf("\n");
}

int main(void)
{
    Display();
    return 0;
}