#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("Say something: ");
    string s = GetString();
    if ( s == NULL)
    {
        return 1;
    }
    // makes a new string place plus the size of char
    
    
    char* t = malloc((strlen(s) + 1) * sizeof(char));
    if (t == NULL)
    {
        free(s);
        return 1;
    }
    
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }
    printf("Capitalizing copy...\n");
    
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    
    printf("Original: %s\n", s);
    printf("Copy:     %s\n", t);
}