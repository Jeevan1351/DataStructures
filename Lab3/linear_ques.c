#include<stdio.h>

void insert(int n, int arr[n], int *f, int *b)
{
	if(*b==n-1)
	{
		printf("Queue overflow!\n");
		return;
	}
	printf("Enter the element to be inserted:	");
	scanf("%d", &arr[++(*b)]);
printf("\n");
}
void del(int n, int arr[n], int* f, int* b)
{
	if(*f>*b)
	{
		printf("Empty queue!");
		return;
	}
	printf("The element deleted is :	%d\n", arr[(*f)++]);
}

void display(int n, int arr[n], int f, int b)
{
	if(f>b)
		printf("The queue is empty!");
	printf("\nElements of the queue are:	");
	for(int i=f; i<=b;i++)
		printf("%d ", arr[i]);
	printf("\n");
}



void main()
{
	int ch=10, n;
	printf("Enter the size of the queue:	");
	scanf("%d", &n);
	int arr[n];
	int j=-1,i=0;
	while(ch!=4)
	{
		printf("\t\tLinear Queues\n\t1]Insert Rear\n\t2]Delete Front\n\t3]Display contents of queue\n\t4]Exit\nEnter your choice:	");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	insert(n, arr, &i, &j);
				break;
			case 2: del(n, arr, &i, &j);
				break;
			case 3: display(n, arr, i, j);
				break;
			case 4:printf("Have a nice day! : )");
		}
	}
}

