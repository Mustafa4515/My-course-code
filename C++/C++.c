// #include<stdio.h>
// int main()
// {
//     printf("Sulman\n");
//     printf("Numan\n");
//     printf("Mustafa\n");
//     return 0;
// }
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int a,b;
//     a=10;
//     b=5;
//     printf("a+b=%d\n",a+b);
//     printf("a-b=%d\n",a-b);
//     printf("a*b=%d\n",a*b);
//     printf("a/b=%d\n",a/b);
// }
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     char ch1,ch2,sum;
//     ch1='2';
//     ch2='6';
//     sum=ch1+ch2;
//     printf("Sum=%d",sum);
// }
// #include <math.h>
// #include <stdio.h>
// void main()
// {
//     int A, B, C ,sum;
//     printf("Enter A Value: ");
//     scanf("%d", &A);
//     printf("Enter B Value: ");
//     scanf("%d", &B);
//     printf("Enter C Value: ");
//     scanf("%d", &C);
//     sum = A + B + C;
//     double avg= (double )sum/3;
//     printf("Sum of All Value = %d\nAverage of All Value = %4.4f\n",sum,avg);
//     printf("Suqare of A Value = %d\nSuqare of B Value = %d\nSuqare of C Value = %d\n", A * A, B * B,C * C);
//     printf("Thanks");
// }
#include <stdio.h>
#include <math.h>

int main()
{
    double num, result;
    printf("Enter a number: ");
    scanf("%lf", &num);
    result = sqrt(num);
    printf("The square root of %lf is %lf", num, result);
    return 0;
}
