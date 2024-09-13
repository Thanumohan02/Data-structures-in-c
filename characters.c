#include<stdio.h>
void printdetails(char name[],char fathername[],char mothername[]);
  
int main(){
  printdetails("pooja","basavarj","renuka");
  return 0;
}
void printdetails(char name[],char fathername[],char mothername[])
{
  printf("my name is :%s\n",name);
  printf("my father name is :%s\n",fathername);
  printf("my mother name is: %s\n",mothername);

}
 
  
  
