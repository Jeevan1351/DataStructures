#include<stdio.h>
#define size 5

void display(int t, char s[size]);

void push(int* t, char s[size])
{
	if(*t == size)
	{
		printf("\nStack overflow!");
		return;
	}
	printf("\nEnter the character to be pushed:	");
	char c;
	scanf("%c", &c);
	scanf("%c", &c);
	s[(*t)+1] = c;
	(*t)++;
}

void pop(int* t, char s[size])
{
	if(*t < 0)
	{
		printf("\nStack underflow!");
		return;
	}

	printf("\n%c is the popped element!", s[*t]);
	(*t)--;
}

void compare(int t1, char s1[size], int t2, char s2[size])
{
	if(t1 != t2)
	{
		printf("\nNot Equal!");
		return;
	}
	for(int i = 0; i<= t1; i++)
	{
		if(s1[i] == s2[i])
			continue;
		printf("\nNot Equal!");
		return;
	}
	printf("\nEqual!!");
}
int main()
{
	char s1[size];
	char s2[size];
	int t1 = -1, t2 = -1;
	int ch = 10;
	while(ch != 7)
	{
		printf("\n\n1]Push to stack 1\n2]Push to stack 2\n3]Pop from stack 1\n4]Pop from stack 2\n5]Display\n6]Compare\n7]Exit\n\nEnter your choice:	");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: push(&t1, s1); break;
			case 2: push(&t2, s2); break;
			case 3: pop(&t1, s1); break;
			case 4: pop(&t2, s2); break;
			case 5: printf("================================\n\tStack 1 : ");
				display(t1, s1);
				printf("\n\tStack 2 : ");
				display(t2, s2);
				printf("\n===============================");
				break;
			case 6: compare(t1, s1, t2, s2);
				break;
		}
	}
}

void display(int t, char s[size])
{
	for(int i= 0; i <= t; i++)
		printf("%c ", s[i]);
}
