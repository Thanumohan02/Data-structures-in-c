#include<stdio.h>
#include<string.h>
int main(){
  char str1[20];
  char str2[20];
  char tot[40];
  printf("enter first word:");
  scanf("%s",str1);
  printf("Enter second word:");
  scanf("%s",str2);
  strcpy(tot,str1);
  strcat(tot,str2);
  printf("concatenated string is %s",tot);
}
