#include<stdio.h>
 
int main()
{
	char Operator;
	float num1, num2, result = 0;
	
	printf("\n Please Enter an Operator (+, -, *, /)  :  ");
  	scanf("%c", &Operator);
  	
	printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
  	scanf("%f%f", &num1, &num2);
  	
  	switch(Operator)
  	{
  		case '+':
  			printf("\n The result of %.2f + %.2f  = %.2f", num1, num2, num1 + num2);
  			break;
  		case '-':
  			printf("\n The result of %.2f - %.2f  = %.2f", num1, num2, num1 - num2);
  			break;  			
  		case '*':
  			printf("\n The result of %.2f * %.2f  = %.2f", num1, num2, num1 * num2);
  			break;
  		case '/':
  			printf("\n The result of %.2f / %.2f  = %.2f", num1, num2, num1 / num2);
  			break;
		default:
			printf("\n You have enetered an Invalid Operator ");				    			
	}
	
  	return 0;
}
