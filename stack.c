#include <stdio.h>
#include <stdlib.h>
//stack
struct node{
	int data;
	struct node *next; 
};

// top
struct node *top=NULL;

//push
int push(int data)
{
	//stack is empty
	if(top==NULL)
	{
		struct node *new=(struct node*)malloc(sizeof(struct node));
		new->data=data;
		new->next=NULL;
		top=new;
	}
	//Stack is not empty
	else{
		struct node *new=(struct node*)malloc(sizeof(struct node));
		new->data=data;
		new->next=top;
		top=new;
	}
	return 1;
}
//display
int display()
{
	//stack is empty
	if(top==NULL)
	{
		printf("stack is empty.\n");
		return 1;
	}
	struct node *index=top;
	while(index!=NULL)
	{
		printf("%d-",index->data);
		index=index->next;
	}
	printf("\n");
	return 1;
}
//pop
int pop()
{
	//stack is empty
	if(top==NULL)
	{
		printf("Stack is empty.\n");
		return 1;
	}
	struct node *temp=top;
	top=top->next;
	free(temp);
	temp->next=NULL;
	return 1;
	
}
//main
int main()
{
	push(1);
	push(2);
	push(4);
	display();
	pop();


	return 1;
}
