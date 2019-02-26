#include <stdio.h>
#include <cs50.h>

int main (void)
{

  long long credit= get_long_long("enter your credit card: ");
    printf("the credit number is: %lld", credit);

    int count=0;

    //calculating the number of the credit card the user has entered
    while(credit>0)
    {
      credit = credit/10;
      count++;
    }
      printf(" la nombre des chiffres c'est : %i",count);

      if((count==16) || (count==13))
      {
        printf(" this is a Mastercard card");

      }



}