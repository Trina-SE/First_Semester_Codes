#include<stdio.h>
int main()
{
    double num1,num2;
    printf("Enter two numbers\n");
    scanf("%lf%lf",&num1,&num2);
    printf("%lf+%lf=%lf\n",num1,num2,num1+num2);
    printf("%lf-%lf=%lf\n",num1,num2,num1-num2);
    printf("%lf*%lf=%lf\n",num1,num2,num1*num2);
    return 0;


}
