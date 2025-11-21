#include <stdio.h>
int main()
{
    int i, start, end, sum = 0;

    printf("Enter the lower limit number.\n");
    scanf("%d", &start);

    printf("Enter the higher limit number.\n");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        if (i % 2 != 0)
    {
    sum = sum + i;
    }
    
    }
    printf("The sum of the odd numbers between %d to %d is %d\n", start, end, sum);
    return 0;

}
