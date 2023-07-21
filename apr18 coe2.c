#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],b[10];
    scanf("%s",a);
    scanf("%s",b);
    int n=strlen(a);
    char c[n],p,q;
    int count=0,n1=0,n2=0;
    for(int i=0;i<n;i++)
    {
        if(count<2 && a[i]!=b[i])
        {
            if(count==0)
            {
                count++;
                p=b[i];
                n1=i;
            }
            else if(count==1)
            {
                count++;
                q=b[i];
                n2=i;
            }
        }
        else
        {
            c[i]=a[i];
        }
    }
    c[n1]=q;
    c[n2]=p;
    count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==c[i])
        {
            count++;
        }
    }
    if(count==n)
    {
        printf("Yes\n");
    }
    else if(count<=1)
    {
        printf("No\n");
    }
    else
    {
        printf("No\n");
    }
}
