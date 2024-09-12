#include<stdio.h>
#include<string.h>
int main(){
 char str1[100],str2[100];
  printf("Enter the string 1:");
  scanf("%s",str1);
  printf("Enter the string 2:");
  scanf("%s",str2);
  int result=strcmp(str1,str2);

  if(result==0){
    printf("The strings are equal");
  }
  else if(result<0){
    printf("%s comes before %s lexicographically\n",str1,str2);
  }else {
    printf("%s comes after %s lexicographically\n",str1,str2);
      
  }
}
