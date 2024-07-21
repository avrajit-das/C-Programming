#include<stdio.h>

int main()
{
    int start, end, even_sum = 0, odd_sum = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Even numbers: ");
    for(int i= start; i<=end; i++)
    {
        if(i%2 == 0)
        {
            printf("%d", i);
            even_sum += i;
        }
    }
    printf("\nSum of even numbers: %d", even_sum);

    printf("\nOdd numbers: ");
    for(int i = start; i<= end; i++)
    {
        if(i%2!= 0)
        {
            printf("%d", i);
            odd_sum += i;
        }
    }
    printf("\n Sum of Odd numbers: %d", odd_sum);

    return 0;
}
