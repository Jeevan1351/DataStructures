#include<stdio.h>

void insert(int n, int arr[n], int f, int *r)
{
	if((f==(*r)+1&&(*r)!=-1)||(f==0&&(*r)==n-1))
	{
		printf("Queue overflow!");
		return;
	}
	int num;
	printf("\nEnter the number to be inserted:	");
	scanf("%d", &num);
	if((*r)<n-1)
		arr[++(*r)]= num;
	else
	{
		arr[0] = num;
		*r = 0;
	}
	printf("\nThe element %d was inserted", num);
}

void deleter(int n, int arr[n], int *f, int r)
{
	if(*f==-1)
	{
		printf("The queue is empty!");
		return;
	}
	int d;
	if(r>*f)
	{
		d = arr[*f];
		(*f)++;
	}
	else if(r<*f)
	{
		if(*f!=n-1)
		{
			d = arr[*f];
			(*f)++;
		}
		else
		{
			d = arr[n-1];
			*f = 0;
		}
	}
	else if(*f == r)
	{
		d = arr[*f];
		*f=-1;
	}
	printf("The deleted element is %d", d);
}

void display(int n, int arr[n], int f, int r)
{
	if(f==-1)
	{
		printf("The queue is empty!");
		return;
	}
	printf("The elements of the queue are:	");
	if(f<=r)
	{
		for(int i=f; i<=r; i++)
		{
			printf("%d ", arr[i]);
		}
	}
	else
	{
		for(int i = f; i<n; i++)
			printf("%d ", arr[i]);
		for(int i =0; i<=r;i++)
			printf("%d ", arr[i]);
	}
}

int main()
{
	int n;
	printf("Enter the size of the Queue:	");
	scanf("%d", &n);
	int arr[n];
	int f=0, r=-1;
	int ch =10;
	while (ch!=4)
	{
		printf("\n\n1] Insert\n2]Delete\n3]Display\n4]Exit\nEnter your choice:	");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: insert(n, arr, f, &r);
				break;
			case 2: deleter(n, arr, &f, r);
				break;
			case 3: display(n, arr, f, r);
				break;
		}
	}
}
