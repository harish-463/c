#include<stdio.h>
#include<string.h>
int main()
{
    int s_size,goal_size;

    scanf("%d",&s_size);

    scanf("%d",&goal_size);
    char s[s_size],goal[goal_size];
    int check =0;

    scanf(" %s",s);

    scanf(" %s",goal);
    for(int i=0; i<strlen(s)-1; i++)
    {
        for(int j=i+1; j<strlen(s); j++)
        {
            if(i!=j)
            {
                char x = s[i];
                s[i] = s[j];
                s[j] = x;

            }
        }
    }
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i] != goal[i])
        {
            check = 1;
        }
    }
    if(check == 0)
    {
        printf("true");
    }
    else
    {
        printf("false");    
    }
    return 0;
}
