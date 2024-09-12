#include<stdio.h>
void main()
{
  int n,i;
  char str[50];
  printf("enter number of elements:\n");
  scanf("%d",&n);
  printf("enter string:\n");
  scanf("%s",str);
  
  for(i=1;i<=n;i++)
    {
      printf("%c\n",str[i]);
    }
}


