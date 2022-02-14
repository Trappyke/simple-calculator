/*
    Simple Calculator
    By weston aka Trappy
    14th feb 2022
    MIT license
    C99 Compiler
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100];
    int n1,n2,sum,diff,product;
    float quot;
    printf("Simple Calculator\n");
    printf("Enter Your Name: ");
    gets(name);
    printf("Enter Two Integers: ");
    scanf("%d%d",&n1,&n2);

    sum = n1 + n2;
    diff = n1 - n2;
    product = n1 * n2;
    quot = (float)n1/n2;

    printf("Hey %s here is your results: \n",name);
    printf("%d + %d = %d\n",n1,n2,sum);
    printf("%d - %d = %d\n",n1,n2,diff);
    printf("%d * %d = %d\n",n1,n2,product);
    printf("%d / %d = %d\n",n1,n2,quot);
    return 0;
}
