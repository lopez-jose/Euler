#include <stdio.h>

int main(void)
{

  

    int sum = 0; 
    int count;
    for(count = 1; count <1000; count++)
    {
        if(count % 3 == 0 && count % 5 == 0)
        {
            sum +=count;
        }else if(count % 3 == 0)
        {
            sum +=count;
        }else if(count % 5 == 0)
        {
            sum+=count;
       }
 
    }
    printf("%d\n",sum);

    return 0;
}
