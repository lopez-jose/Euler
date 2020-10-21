# include <stdio.h>
# include <math.h>
#include <stdbool.h>

int main(void)
{
    /*Every number has a unique of prime factors that multiply to equal that number
    8 = 2*2*2
    25= 5*5
    24 = 3*2*2*2
     
     */
    int number = 13195;
    int sqrt_Num = sqrt(number); //gives the square root of the inputted number
    bool isPrime = false;
    
    // All numbers have a prime factorization
    /*If you have a certain sequence of 2*2*2*2
    You know that that sequence will have to be multiplied by in order to equal the total
    number.

    For example,
        Say you have the number 24,
        When divided by 2
    */
    
   /* This will be worked out from a top down approach
    First the square root of the number inputted is calculated.
    
    From there:
        sqrt(num)
    is inputted into the following section of code
    
    From that number, other numbers are checked to see if they are factors
    */
    for(int number = sqrt_Num; number > 2; number=number-1)
    {
        int temp = number; //stores the value of the temporary number
        int limit = sqrt(temp);
        int start = 2;
        bool numLim = false;
        
        while(isPrime && numLim == false)
        {
            if(limit%start==0)
            {
                isPrime = false;
            }
            start++;
            if(start>(limit/2))
            {
                numLim = true;
            }
        }
        numLim = false;
        if(isPrime)
        {
            printf("Hello%d",number);
            isPrime = false;
        }
        
    }
    

    return 0;
}



