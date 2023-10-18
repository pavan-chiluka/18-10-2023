#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void display_singletraverse(struct node *head)
{
	if(head==NULL)
	{
		return;
	}
	else
	{
		display_singletraverse(head->next);
		printf("%d",head->data);
	}
}
void display(struct node *head)
{
	struct node *temp1=head;
	while(temp1!=NULL) 
	{
		printf("%d",temp1->data);
		temp1=temp1->next;
	}
}
void add_at_1st(struct node **head)
{
	struct node *newnode1;
	newnode1=((struct node*)malloc(sizeof(struct node)));
	scanf("%d",&(newnode1->data));
	newnode1->next=head;
	head=newnode1;

}
void creation(struct node **head)
{
	struct node *temp=NULL;
	struct node *newnode;
        newnode=((struct node*)malloc(sizeof(struct node)));
        temp=((struct node*)malloc(sizeof(struct node)));
        int n,i;
        printf("enter a n value");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
		int data;
                printf("enter a value");
                scanf("%d",&data);
		newnode->data=data;
                newnode->next=NULL;
                if((*head)==NULL)
                {
                	(*head)=newnode;
                }
                else
                {
			temp = (*head);
			while(temp!=NULL)
				temp = temp->next;
                	//temp->data=newnode->data;
			//temp->next=temp->next;
			temp = newnode;
                }

        }
}
int main()
{

	struct node *head=NULL;
	int choice;
	while(1)
	{
	printf("1:creation,2:display,3:display_singletraverse,4:addat1st");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:creation(&head);
		       break;
		  
		case 2:display(head);
		       break;

		case 3: display_singletraverse(head);
			break;

	        case 4:add_at_1st(&head);
		       break;;
                case 5:exit(0);
        }
	}
}




