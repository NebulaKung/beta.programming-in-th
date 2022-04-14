#include<stdio.h>
#include<string.h>
int main()
{
    int g[3];
    g[0] = 1;
    char c[51];
    int save;
    scanf("%s", c);
    int len = strlen(c);
    for(int i=0;i<len;i++)
    {
        if(c[i]=='A')
        {
            save = g[1];
            g[1] = g[0];
            g[0] = save;
        }
        else if(c[i]=='B')
        {
            save = g[1];
            g[1] = g[2];
            g[2] = save;
        }
        else if(c[i]=='C')
        {
            save = g[2];
            g[2] = g[0];
            g[0] = save;
        }
    }
    for(int i=0;i<3;i++)
    {
        if(g[i]==1)
        printf("%d", i+1);
    }
}