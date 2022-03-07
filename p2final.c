#include<stdio.h>
typedef struct _fraction
{
   int num,den;
}Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("Enter the Numerator: ");
  scanf("%d",&f.num);
  printf("Enter the Denominator: ");
  scanf("%d",&f.den);
  return f;
}
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  int common_denominator=f1.den*f2.den*f3.den;
  int num1=f1.num*common_denominator/f1.den;
  int num2=f2.num*common_denominator/f2.den;
  int num3=f3.num*common_denominator/f3.den;
  if(num1<num2 && num1<num3)
  {
    return f1;
  }
  else if (num2<num3)
  {
    return f2;
  }
  else
  {
    return f3;
  }
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction largest)
{
  printf("Largest of %d/%d , %d/%d and %d/%d is %d/%d ",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
}
int main()
{
  Fraction f1,f2,f3,largest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  largest=Largest_fraction(f1,f2,f3);
  output(f1,f2,f3,largest);
  return 0;
}
