#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    for (int i = 0; i<100;i++)
    {
        if (i%3 == 0)
        {
            if (i%5 ==0)
            {
                printf("Fizzbuzz\n");
            }
            else
            {
                printf("Fizz\n");
            }
        }
        else if (i%5 == 0)
        {
            printf("Buzz\n");
        }
        else 
        {
            printf("%d\n",i);
        }
    }
}
