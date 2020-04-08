#include <stdio.h>
#include <stdlib.h>

int main()
{
int binary;
int decimal=0;

int counter=0;
int value;

int i;

printf("Enter the binary : ");
scanf("%d", &binary);


while(binary>=1)
{ int power=1;

value=binary%10;

for(i=1;i<=counter;i++)
power*=2;
decimal+=value*power;
binary/=10;
counter++;
}

printf("Decimal : %d\n", decimal);

system("pause");
return 0;
}




