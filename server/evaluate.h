// C++ program to evaluate a given expression
#include <stdbool.h>
// using namespace std;
// A utility function to check if a given character is operand
bool isOperand(char c) { return (c >= '0' && c <= '9'); }

// utility function to find value of and operand
int value(char c) 
{ 
	//char c[10]="124",r;
	char r;
	int value=0,v;
	for(int i=0;i<strlen(c);i++)
	{	
		if c[i]!='+'
		{
			r=c[i];
			v=r-'0';
			value=value*10+v;

		}
		
		//p++;

	}
	return (c - '0'); 
}

int evaluate(char *exp)
{
        
	// Base Case: Given expression is empty
	//if (*exp == '\0') return -1;

	// The first character must be an operand, find its value
	int res = value(exp);

	// Traverse the remaining characters in pairs
	for (int i = 1; exp[i]; i += 2)
	{
	
		// The next character must be an operator, and
		// next to next an operand
		
		char opr = exp[i],opd = exp[i+1];
			
		
			
		

		
		
		 

		// If next to next character is not an operand
		//if (!isOperand(opd)) return -1;

		// Update result according to the operator
		if (opr == '+')	 res += value(opd);
		else if (opr == '-') res -= value(opd);
		else if (opr == '*') res *= value(opd);
		else if (opr == '/') res /= value(opd);

		// If not a valid operator
		//else				 return -1;
	} 
	
	return res;
}
