#include <stdio.h>
#include <string.h>
int main()
{
   char string[20],temp;
   int i,len;
   printf("Enter String : ");
   scanf("%s",&string);
   len=strlen(string)-1;
   for(i=0;i<strlen(string)/2;i++)
   {
      temp=string[i];
      string[i]=string[len];
      string[len--]=temp;
   }
   printf("\nReverse string :%s",string);
}
