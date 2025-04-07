#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s, i, min_a = 5000;
    int c = 0;
    scanf("%d", &s);
    int a[s], b[s];
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
        if (min_a > a[i])
        {
            min_a = a[i];
             printf("%d",min_a);
        }
    }
    for (i = 0; i < s; i++)
    {
        scanf("%d", &b[i]);
    }
    i = 0;
     for(i=0;i<=s-1;i++)
   
    while (i < s)
    {
        if (a[i] >= b[i])
        {
            while (a[i] > min_a)
            {
                a[i] = a[i] - b[i];
                c++;
            }
            if (a[i] < min_a)

            {
                min_a = a[i];
                i = 0;
            }
        }
        if (a[i] != min_a)
        {
            c = -1;
            break;
        }
        i++;
    }
    printf("%d", c);
    return 0;
}