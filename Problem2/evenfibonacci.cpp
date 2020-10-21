//
//  main.c
//  Euler 2 Even Fibonacci Numbers
//
//  Created by Jose  L on 10/10/17.
//  Copyright © 2017 Jose  L. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int i = 1;
    int j = 2;
    int temp = 0;
    int sum = 0;
    //kjlkj;
    while(i<4000000 && j <4000000)
    {
        
        temp = i+j;     //3 //8
        if(i%2 == 0)
        {
            sum+=i;
            printf("%d",i);
        }
        if(j% 2 == 0)
        {
            sum+=j;
            printf("%d",j);
        }
        printf("%d\n", sum);
            
        i = temp;       //3 //8
        j = j+i;        //5 //13
        
        
    }
    printf("The sum of even fibonacci number = %d",sum);
    return 0;
}
