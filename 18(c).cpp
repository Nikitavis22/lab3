//18(c)
//c). последовательно слева направо вычисляются 1 +1/3 + 1/5 + ... + 1/9999 и 1/2 + 1/4 + ... + 1/10000, затем второе значение вычитается из первого;
#include <iostream>
int main()
{
  double t,r,sum,sum1;
  for (int i=1; i<=9999; i=i+2)
    {
      t=1/i;
      sum+=t;
    }
  for (int i=2; i<=10000; i=i+2)
    {
      r=1/i;
      sum1+=r; 
    }
printf("%f",sum1-sum);
}