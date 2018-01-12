#include <stdio.h>
int is_prime(int n) 
{
  int k, limit;
  if (n == 2) 
    return 1;
  if ((n/2 * 2)== 0) 
    return 0; 
  limit = n / 2;
 
  for ( k = 3; k <= limit; k = k + 2)
    if ((n - (n/k * k)) == 0)
      return 0;
  return 1;
}

int main()
{
  int i, num1, num2;
  
  //write("enter a range, for example, 5<ENTER> 23<ENTER>:");
  //num1 = read();
  //num2 = read();
 num1=0,num2=100;
  for (i =num1; i < num2; i = i + 1)
    {
      if (is_prime(i)) {
	printf ("%d\n",i);
      }
    } 
  return 0; 
}


