#include <stdio.h>
//这是一个简单的加法程序
int main() {
    double num1, num2, sum;
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    
    sum = num1 + num2;
    
    printf("The sum is: %.2lf\n", sum);
    
    return 0;
}