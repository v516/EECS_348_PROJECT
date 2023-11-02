#include <stdio.h>

int main(){
    double num1;
    double num2;
    double ans;
    char opera;

    printf("Enter an opertaor you desire(+, -, *, /):");
    scanf("%c", &opera);

    printf("Enter two values you want to calculate: ");
    scanf("%lf %lf", &num1, &num2);

    switch(opera){
        case '+':
            ans = num1 + num2;
            printf("Sum of %.2lf and %.2lf is %.2lf", num1, num2, ans);
            break;

        case '-':
            ans = num1 - num2;
            printf("Subtraction of%.2lf and %.2lf is %.2lf", num1, num2, ans);
            break;

        case '*':
            ans = num1*num2;
            printf("Multiplication of %.2lf and %.2lf is %.2lf", num1, num2, ans);
            break;

        case '/':
          if (num2 == 0){
            printf("Cannot divide by 0");
          }
          else{
            ans = num1/num2;
            printf("Division of %.2lf and %.2lf is %.2lf", num1, num2, ans);
            break;
          }
        default:
            printf("Error!!, Incorrect operation selected or invalid number placement.");
            break;
    }
    return (0);
}
