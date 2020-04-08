#include <stdio.h>
 
int Factorial(int n);
int Combination(int n, int r);
void Pascal(int n);
 
int main(void)
{
        int size;
 
        printf("삼각형 크기 입력: ");
        scanf("%d", &size);
 
        Pascal(size);
        return 0;
}
 
int Factorial(int n)
{
        if (n > 1)
               return n*Factorial(n - 1);
        else
               return 1;
}
 
int Combination(int n, int r)
{
        return Factorial(n) / (Factorial(n - r)*Factorial(r));
}
 
void Pascal(int n)
{
        for (int i = 0; i <= n; i++)
        {
               for (int j = 1; j <= (n - i); j++) 
                       printf("  "); 
               for (int j = 0; j <= i; j++) 
                       printf("%4d", Combination(i, j));
               printf("\n");
        }
        
}
