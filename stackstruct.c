/*NAME: BHAVESH KUMAR VASNANI
REG. No: 15BCE0617
SLOT: G2*/

#include <stdio.h>
struct stack//For decclaring variables that are used for building a stack
{
	int top;
	int s[10];
};
void main()
{
	int i;
	struct stack a;//For creating an stack named a
	a.top = -1;//Initialising top
void push(int x)//To enter values in stack on top
{
	if (a.top<9)
	{
		a.top++;//Incrementing top
	a.s[a.top]=x;//Assigning value x to the stack a at index top
	}
	else
	{
		printf("Overflow\n");//When the stack is completely full
	}
}
void pop()//To remove element from the top of the stack
{
	if (a.top>=0)
	{
		a.top--;//Decrementing top
	}
	else
	{
		printf("Underflow\n");//When the stack is completely empty
	}
}
void peek()//To print the topmost element of the stack
{
	if(a.top!=-1)//As if top=-1, then the stack is empty and there would be no element to print
	printf("%d\n",a.s[a.top]);
}
push(1);
pop();
pop();
for (i=a.top;i>=0;i--)//For printing stack from top to bottom
	{
		printf("%d\n",a.s[i]);
	}
}
