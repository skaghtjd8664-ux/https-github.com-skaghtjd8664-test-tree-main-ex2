#include <stdio.h>

int main()
{
    float num;
    unsigned int bits;

    scanf("%f", &num);

    bits = *(unsigned int*)&num;

    printf("%d/", (bits >> 31) & 1);

    for (int i = 30; i >= 23; i--)
    {
        printf("%d", (bits >> i) & 1);
        if (i == 27) printf(" ");
    }
    printf("/");

    for (int i = 22; i >= 0; i--)
    {
        printf("%d", (bits >> i) & 1);

        if (i % 4 == 3 && i != 3)
            printf(" ");
    }

    return 0;
}