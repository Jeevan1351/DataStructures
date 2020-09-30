#include<stdio.h>
#include<string.h>


int F(char s)
{
	switch(s)
	{
		case '+':
		case '-': return 2;
		case '*':
		case '/':return 4;
		case '^':
		case '$':return 5;
		case '(':return 0;
		case '#':return -1;
		default: return 8;
	}
}

int G(char s)
{
	switch(s)
	{
		case '+':
		case '-':return 1;
		case '*':
		case '/':return 3;
		case '^':
		case '$':return 6;
		case '(':return 9;
		case ')':return 0;
		default: return 7;
	}
}

void infix_postfix(char infix[50], char postfix[50])
{
	int i=0,j=0;
	char s[50], symbol;
	int top =-1;
	s[++top] = '#';
	for(;i<strlen(infix);i++)
	{
		symbol = infix[i];
		while(F(s[top])>G(symbol))
		{
			postfix[j] = s[top--];
			j++;
		}
		if(F(s[top])!=G(symbol))
		{
			s[++top] = symbol;
		}
		else
			top--;
	}
	while(s[top]!='#')
	{
		postfix[j] = s[top--];
		j++;
	}
	postfix[j] = '\0';
}

void main()
{
	char infix[50];
	char postfix[50];
	printf("Enter the infix eqution:	");
	scanf("%s", infix);
	infix_postfix(infix, postfix);
	printf("\n\nThe equation is postfix is:	%s\n", postfix);
}

