
#include<stdio.h>
#include<string.h>
int main()
{
   char str[50];
   int i,j=0;
   printf("Enter the string : ");
   gets(str);

      for(i=0;str[i];i++)
        {
        str[i]=str[i+j];
         if(str[i]==' '|| str[i]=='\t')
           {
            j++;
            i--;
           }
        }
   printf("White space: %d\n",j);
   printf("After removing white space: %s\n",str);
   return 0;
}
