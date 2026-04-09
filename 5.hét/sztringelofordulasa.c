#include <stdio.h>
#include <string.h>

typedef char* string;

int char_count(string s, char c)
{
    int db = 0;
    for(int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == c)
        {
            db++;
        }
    }

    return db;
}

int main()
{
    printf("rfind_char(\"Abba\", 'b') -> %d\n", char_count("Abba", 'b'));
    printf("rfind_char(\"Abba\", 'a') -> %d\n", char_count("Abba", 'a'));
    printf("rfind_char(\"Abba\", 'x') -> %d\n", char_count("Abba", 'x'));
    
    
 return 0;
}