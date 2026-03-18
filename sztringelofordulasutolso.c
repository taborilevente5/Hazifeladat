#include <stdio.h>
#include <string.h>

typedef char* string;

int rfind_char(string s, char c)
{
    int hossz = strlen(s);

    for (int i = hossz-1; i >= 0; i--)
    {
        if (s[i] == c)
        {
            return i;
        }
    }
    return -1;

}


int main()
{
    printf("rfind_char(\"Abba\", 'b') -> %d\n", rfind_char("Abba", 'b'));
    printf("rfind_char(\"Abba\", 'a') -> %d\n", rfind_char("Abba", 'a'));
    printf("rfind_char(\"Abba\", 'x') -> %d\n", rfind_char("Abba", 'x'));
     printf("rfind_char(\"Aladar\", 'a') -> %d\n", rfind_char("Aladar", 'a'));
    
 return 0;
}