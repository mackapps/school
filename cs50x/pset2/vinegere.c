#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char encrypt(char input2, int key2);

int main(int argc, string argv[])
{

    //if user does not enter one command, then exit program.
    if (argc != 2)
    {
        printf("ERROR: Input only 1 command\n");
        return 1;
    }
    
    //if user does not enter alphabetical characters into the
    //command, then exit program.
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isalpha(argv[1][i]))
        {
        //if isalpha is true, then user input is alphabetical
        }
        else
        {
        printf("FAIL\n");
        return 1;
        }
    }
    
    //convert user's command for the keyword into a string called "key"
    int keylength = strlen(argv[1]);
    int mainkey[keylength];
    
    for (int i = 0; i < keylength; i++)
    {
    mainkey[i] = toupper(argv[1][i]) - 65;
    }
    
    //Get user's string
    string input = GetString();
    
    //Set keycount
    int keycount = 0;

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isalpha(input[i]))
        {
            printf("%c", input[i]);
        }
        else
        {
            printf("%c", encrypt(input[i],mainkey[keycount]));
            
            if (keycount < keylength - 1)
            {
            keycount++;
            }
            else
            {
            keycount = 0;
            }
         
        }
    }
    printf("\n");
}


//function for the encryption process
char encrypt(char userchar, int key2)
{
   if (islower(userchar))
        {
            
            return(((userchar - 97 + key2) % 26) + 97);
        }
        
        else 
        {
            return(((userchar - 65 + key2) % 26) + 65);
        }  
}
