//DOublylinglist
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
	struct node*prev;
};
struct node*head=NULL,*ptr;

void insert_front(/*struct node**head,*/int data){
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=head;
	temp->prev=NULL;
	head=temp;

		
}
void insert_end(int value)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	if (head== NULL)
	{
		temp->prev=NULL;
        head=temp;
		//head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->prev=ptr;
	}
}
void insert_aftele(int ele,int data){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	if (head==NULL)
	{
		head=temp;
	}
	else
	{ 
		ptr=head;
		while(ptr->data!=ele)
		{	
			ptr=ptr->next;
			printf("haa pohuche\n");
		}
		printf("%d\n",ptr->data);
		temp->next=ptr->next;
		//ptr->next->prev=temp;
		ptr->next=temp;
		temp->prev=ptr->prev;
}
}
/*void display()
{
	if (head==NULL)
	{
		printf("List is Empty");
	}
	else
	{
		ptr=head;
		while( ptr != NULL)
		{
			printf("-> %d", ptr->data);
			ptr=ptr->next;
		}
		printf("\n");
	}
}*/
void display() {
  struct Node* last;
	ptr=head;
  while (ptr!= NULL) {
    printf("%d->",ptr->data);
    //last=ptr;
    ptr = ptr->next;
  }

}

int main()
{	struct node*one=(struct node*)malloc(sizeof(struct node));
	one->data=45;
	one->next=NULL;
	one->prev=NULL;
	int value,ele,ch;
	printf("1. Insert_begin \n");
	printf("2. Insert_end \n");
	printf("3. Insert_After_specified_element \n");
	/*printf("4. delete_begin \n");
	printf("5. delete_end \n");
	printf("6. delete_middle \n");
	printf("7. insert at Given position\n");*/
	printf("4. Display\n");
	printf("5. exit \n");
	//printf("10.Count of elements\n");

	while(1)
	{
		printf("\nEnter the Choice \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					printf("Enter the value");
					scanf("%d",&value);
					insert_front(value);
					display();
					break;
				}
				case 2:
				{
					printf("Enter the value");
					scanf("%d",&value);
					insert_end(value);
					display();
					break;
				}	
				case 3:
					{
					printf("Enter the value");
					scanf("%d",&value);
					printf("After which element u want to insert");
					scanf("%d",&ele);
					insert_aftele(value,ele);
					display();
					break;
				}
				/*case 4:
					{
					delete_begin();
					display();
					break;*/
			/*	}
				case 5:
				{
					del_end();
					display();
					break;
				}
				case 6:
				{
					printf("Enter the element you want to delete");
					scanf("%d",&ele);
					delete_middle(ele);
					display();
					break;
				}	
				case 7:
					{
					int data,pos;
					printf("Enter the data\n");
					scanf("%d",&data);
					printf("Enter the position\n");
					scanf("%d",&pos);
					insertatpos(pos,data,head);}
					display();
					break;*/
				case 4:
					display();
					//exit(0);
					break;
				case 5:
					exit(0);
					break;
					
								
				}
		}
	}
