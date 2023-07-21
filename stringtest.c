#include <stdio.h>
#include <string.h>
int isValid(char s[])
{
    int n = strlen(s);
    int left = 0, right = 0, star = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            left++;
        }
        else if (s[i] == ')')
        {
            right++;
        }
        else
        {
            star++;
        }
    }
    if (left > right + star)
    {
        return 0;
    }
    if (right > left + star)
    {
        return 0;
    }
    if (left == right || left == right + star || right == left + star)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        char s[100];
        scanf("%s", s);
        if (isValid(s))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
