#include<stdio.h>
 int fibo(int n,int k,int geeknum[])
 {
   int geek[k+n];
   for(int i=0;i<k;i++)
   {
   geek[i]=geeknum[i];
 }
     for(int i=k;i=k+n;i++)
     {
       int sum=0;
       for(int j=i-k;j<i;j++)
       {
       sum=sum+geek[j];
     }
     geek[i]=sum;
   }
   return geek[k+n-1];
 }
 int main()
 {
   int n,k;
   scanf("%d",&n);
   scanf("%d",&k);
   int geeknum[k];
   for(int i=0;i<k;i++)
   {
     scanf("%d",&geeknum[i]);
   }
   int result=fibo(n,k,geeknum);
   printf("%d",n,result);
   return 0;
 }
