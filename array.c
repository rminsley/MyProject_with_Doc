/*! \file
  \brief The main documentation

  \mainpage 

  \details
  This is a c-code that solves an important problem!
  
  \author R. Minsley

  \date March 20 2020

*/


#include <stdio.h>
/*!
  \brief 
  Adds the first two elements of an array

  \details
  Given the array of doubles a[] in the arguments, it first 
  changes the 0-th element to 2.0 and then adds the first two elements

  If returns the sum of the first two elements:
  \f[
  sum=a_0+a_1
  \f]
  
  \author R. Minsley

  \version 1.0

  \date March 20 2020

  \todo have to check if the array has at least two elements 

  @param a[] an array of doubles that will be changed

  \return sum a double with sum of the first two array elements

*/
double addE1(double a[])
{
    double sum;

    a[0]=2.0;
    sum=a[0]+a[1];

    return sum;
}

/*!
  \brief 
  Main function 

  \details
  This is just the main function 

  v2.0 This was corrected 

  v1.0 This was the first attempt
  
  \author R. Minsley

  \version 2.0

  \date March 20 2020

*/
int main(void)
{
    double a[2]={1.0,1.0};

    double sum=addE1(a);

    printf("%f\n",sum);

    return 0;
}
