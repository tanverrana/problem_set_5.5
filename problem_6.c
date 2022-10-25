#include <stdio.h>
int main()
{
    int a, b, i;
    scanf("%d%d", &a, &b);
    if (b > a)
    {
        for (i = a; i <= b; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i = a; i <= 23; i++)
        {
            printf("%d ", i);
            if (i == 23)
            {
                for (i = 0; i <= b; i++)
                {
                    printf("%d ", i);
                }
                break;
            }
        }
    }
    return 0;
}