#include <stdio.h>
#include <stdlib.h>
//front bas rear son
//queue node
struct node{
	int data;
	struct node *next;
};
//front & rear
struct node *front=NULL;
struct node *rear=NULL;
//enqueue
int enqueue(int data)
{
	if(front==NULL)
	{
		struct node *new=(struct node*)malloc(sizeof(struct node));
		new->data=data;
		new->next=NULL;
		front=rear=new;
	}
	else
	{
		struct node *new=(struct node*)malloc(sizeof(struct node));
		new->data=data;
		new->next=NULL;
		rear->next=new;
		rear=new;
	}
}
//display queue
int display()
{
	struct node*index=front;
	//queue is empty.
	if(front==NULL)
	{
		printf("Queue is empty.");
		return 1;
	}
	else
	{
		while(index!=NULL)
		{
			printf("%d-",index->data);
			index=index->next;
		}
	}
	printf("\n");
	return 1;
}
//dequeue
int dequeue()
{
	if(front==NULL)
	{
	printf("Error!The queue is empty.");
	return 1;
	}
	else
	{
		struct node*temp=front->next;
		front=front->next;
		temp->next=NULL;
		free(temp);
	}
}
int main()
{
	enqueue(5);
	enqueue(6);
	enqueue(8);
	enqueue(10);
	display();
	return 1;
}
