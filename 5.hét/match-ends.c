#include <string.h>
#include <stdio.h>

typedef char* string;

int match_ends(int n, string words[])
{
    int db = 0;
    for(int i = 0; i < n; ++i)
    {
        int hossz = strlen(words[i]);

        if (hossz >= 2 && words[i][0] == words[i][hossz -1 ])
        {
            db++;
        }
    }
    return db;
}

int main()
{
    string szavak1[] = {"aba", "xyz", "aa", "x", "bbb"};
    int meret1 = 5;
    int eredmeny = match_ends(meret1,szavak1);
    printf("Egyező szavak száma:%d\n", eredmeny);

    for (int i = 0; i < meret1; ++i)
    {
        puts(szavak1[i]);
    }



    return 0;
}