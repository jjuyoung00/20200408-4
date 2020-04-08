#include <stdio.h>

#define ceasarkey 126  
void main()
{
 int i,j;
 char str[3][58];
 FILE *fp=fopen("plaintext.txt","r");

 printf("Plain Text\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<58;j++)
  {
   fscanf(fp,"%c",&str[i][j]);
   printf("%c",str[i][j]);
  }
 }
 printf("\n\nCryptography\n");

 for(i=0;i<3;i++)
 {
  for(j=0;j<58;j++)
  {
   str[i][j] -= ceasarkey;  
   if(str[i][j]<0) str[i][j] += 128;  
   printf("%c",str[i][j]);   
  }
 }
 printf("\n");
 fclose(fp);
}

