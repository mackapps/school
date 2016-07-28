#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    //get user's name
    string name = GetString();
    //print first character in upper case
    printf("%c", toupper(s[0]));
    //print the character that comes after a space in upper case
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (s[i] == ' ')
        {
        printf("%c", toupper(name[i+1]));
        }
    }
    printf("\n");
}
