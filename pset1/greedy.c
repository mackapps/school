//this program asks the user how much change s/he needs.
//then the program outputs the minimum number of coins needed to give the change.
//example: if the user inputs a value of 0.30, then the program will output a value of 2, representing one quarter and one nickel.

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
float given_amount;
int coin_amount;
    do
    {
    printf("How much change do you need?\n");
    given_amount = (100 * GetFloat());
    coin_amount = roundf(given_amount);
    }
    while (given_amount <= 0);
    

int a = coin_amount/25;
int b = (coin_amount - (a*25))/10;
int c = (coin_amount - (a*25) - (b*10))/5;
int d = (coin_amount - (a*25) - (b*10) - (c*5))/1;
int e = a + b + c + d;
   
printf("%d\n",e);


return 0;
}
