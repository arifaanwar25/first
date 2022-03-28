// C program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "evaluate.h"
#include "remove_white_spaces.h"


// Driver program to test above functions
int main()
{
	char c[10]="124",r;
	int value=0,v;
	for(int i=0;i<strlen(c);i++)
	{	
		r=c[i];
		v=r-'0';
		value=value*10+v;
		//p++;

	}
	printf("\n %d \n",value);
	printf("\n %d \n",value);
	char exp[] = "4+     1";
    printf ("remove spaces: %s \n", remove_white_spaces(exp));
    //exp2=remove_white_spaces(exp));
	printf ("postfix evaluation: %d \n", evaluate(remove_white_spaces(exp)));
	return 0;
}
