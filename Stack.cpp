#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int top,arr[90000000],i,size;
int main() 
{
	int ch;
	top=-1;
	printf("Enter the size of Array=");
	scanf("%d",&size);
	while(1) 
	{
		printf("PUSH-->1\nPOP-->2\nDISPLAY-->3\nEXIT-->0");
		printf("\nEnter your choice==>");
		scanf("%d",&ch);
		switch(ch) 
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 0:
				return 0;
			default:
				printf("INVALIED INPUT.....\nTRY AGAIN...\n");
		}
	}
}
void push() 
{
	if(top==size-1)
		printf("STACK IS FULL");
	else if(top==-1)
	{
		top=0;
		printf("Enter the no=");
		scanf("%d",&arr[top]);
		printf("No is added successfully");
	} 
	else 
	{
		top=top+1;
		printf("Enter the no=");
		scanf("%d",&arr[top]);
		printf("No is added successfully");
	}
}
void pop() 
{
	if(top==-1)
		printf("STACK IS EMPTY");
	else if (top==0) 
	{
		printf("%d is deleted Succesfully..",arr[top]);
		top=-1;
	} 
	else 
	{
		printf("%d is deleted Succesfully..",arr[top]);
		top=top-1;
	}
}
void display() 
{
	for(i=0; i<=top; i++)
		printf("%d\n",arr[i]);
}
