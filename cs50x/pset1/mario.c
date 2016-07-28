//this program asks the user for a pyramid height value, and then the program
//creates a half-pyramid made of hash symbols that has as many rows as the user's input.
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 0;
    //user inputs his or her pyramid height value, representing the pyramid's number of rows.
    do 
    {
    printf("Height: ");
    n = GetInt();
    }
    while(n>23 || n<0);
    
    if (n==1)
    {
    printf("##\n");
    }
    else if (n>1)
    {
        for (int row = 0; row < n; row ++)
        //create the number of rows that the user inputs
        {
            for (int space = row; n > (space + 1); space++)
            {
            printf(" ");
            // the intuition is that  we start at
            // the first row with as many spaces as possible; 
            // then we reduce the number of spaces as the rows increase
            }
            for (int hash = row; (hash + 2) > 0; hash--)
            {
            printf("#");
            // the intuition is that  we start at
            // the first row with as few hashes as necessary; 
            // then we increase the number of spaces as the rows increase
            }
            
            printf("\n");
            
        }
    }
    return 0;
}
