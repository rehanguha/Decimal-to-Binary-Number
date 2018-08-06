#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char b[100];
   int i=0,n,j;
   printf("\n\t\t...DECIMAL to BINARY Converter... --RGJ \n\n");
   printf("Enter the DECIMAL no.: ");
   scanf("%d",&n);
   while(n>=1)
   {
   	if(n%2==0)
      {
      	b[i]='0';
         n=n/2;
      }
      else
      {
      	b[i]='1';
         n=n/2;
      }
      i++;
   }
   b[i]='\0';
  	printf("\n\nThe Equivalent Binary no. is: ");
  	for(j=strlen(b)-1;j>=0;j--)
   	printf("%c",b[j]);
   	getch();
return 0;
}
