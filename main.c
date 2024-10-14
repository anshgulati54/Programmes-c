//
//  main.c
//  sum using functions
//
//  Created by Ansh Gulati on 14/10/24.
//

#include <stdio.h>
int sum(int , int);
int main()
{
    int a,b;
    
    printf("1st no:");
    scanf("%d",&a);
    printf("\n2nd no:");
    scanf("%d",&b);
    sum(a,b);
    return 0;
}
int sum(int a,int b)
{
    int c;
    c =a+b;
printf("result=%d", c);
    return (c);
}
