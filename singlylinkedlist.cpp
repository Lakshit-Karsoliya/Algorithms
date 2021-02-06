//SinglyLinkedList
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int data;
	struct node* next;
};
struct node* head;
//----------------------Functions--------------------
int length(){
	int len=1;
	struct node* temp;
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
		len++;
		}
	return len;
	}
void insert_at_begining(){
	clrscr();
	int value;
	struct node* root;
	root=(struct node*)malloc(sizeof(struct node*));
		printf("enter value to be inserted\n");
		scanf("%d",&value);
		root->data=value;
		root->next=head;
		head=root;
		printf("node inserted\n");
	}
void insert_at_last(){
	clrscr();
	int value;
	struct node* root,*temp;
	root=(struct node*)malloc(sizeof(struct node*));
	temp=head;
	if(head==NULL)
	{
		printf("enter value to be inserted\n");
		scanf("%d",&value);
		root->data=value;
		head=root;
		printf("node inserted\n");
		}
	else
	{
		printf("enter value to be inserted\n");
		scanf("%d",&value);
		while(temp->next!=NULL)
		{
			temp=temp->next;
			}
		root->data=value;
		temp->next=root;
		root->next=NULL;
		printf("node inserted\n");
		}
	}
void insert_at_position(){
	clrscr();
	int value,pos,count=1;
	struct node *root,*temp,*pretemp;
	root=(struct node*)malloc(sizeof(struct node*));
	if(head==NULL){insert_at_begining();}
	else
	{
		printf("enter position\n");
		scanf("%d",&pos);
		if(pos==length()){insert_at_last();}
		else if(pos<length()){
			printf("enter value to be inserted\n");
			scanf("%d",&value);
			temp=head;
			while(pos<length()){
				if(count==pos){break;}
				pretemp=temp;
				temp=temp->next;
				count++;
				}
			pretemp->next=root;
			root->data=value;
			root->next=temp;
			printf("node inserted sucessfully\n");
			}
		}
	}
void delete_from_begining(){
	clrscr();
	struct node *root,*temp;
	root=head;
	if(root==NULL)
	{
		printf("no nodes to perform deletion\n");
		}
	else
	{
		temp=head;
		head=root->next;
		free(temp);
		printf("first node deleted sucessfully\n");
		}
	}
void delete_from_last(){
	clrscr();
	struct node *root,*temp;
	root=head;
	if(head==NULL)
	{
		printf("no nodes to perform deletion\n");
		}
	else if(head->next==NULL)
	{
		free(head);
		printf("last node deleted\n");
		}
	else
	{
		while(root->next!=NULL)
		{
			temp=root;
			root=root->next;
			}
		free(root);
		temp->next=NULL;
		printf("last node deleted\n");
		}
	}		
void delete_position(){
	clrscr();
	int pos;
	struct node *temp,*pretemp;
	printf("enter position where you want to delete node\n");
	scanf("%d",&pos);
	temp=head;
	if(head==NULL)
	{
		printf("\x1b[41mERROR\x1b[0munable to delete\n");
		}
	else{for(int i=0;i<pos;i++)
	{
		pretemp=temp;
		temp=temp->next;
		if(temp==NULL)
		{
			printf("\x1b[41mERROR\x1b[0munable to delete\n");
			return;
			}
		}
	pretemp->next=temp->next;
	free(temp);
	printf("NODE deleted sucessfully\n");
	}
	}
void search(){
	clrscr();
	int count=1,value;
	struct node* temp;
	temp=head;
	
	if(head==NULL){printf("Empty list\n");}
	else
	{
	printf("enter value to be search\n");
	scanf("%d",&value);
		while(temp->next!=NULL)
		{
			if(temp->data==value){break;}
			else{count++;}
			temp=temp->next;
			}
		if(temp->data==value){
		printf("value %d found at %d position\n",value,count);}
		else{
			printf("cannot find value\n");
			}
		}
	}
void display(){
	clrscr();
	struct node* root;
	root=(struct node*)malloc(sizeof(struct node*));
	root=head;
	if(root==NULL)
	{
		printf("\x1b[41mnothing to print\x1b[0m\n");
		}
	else
	{
		while(root!=NULL)
		{
			printf("\x1b[42m%d->\x1b[0m",root->data);
			root=root->next;
			}
			printf("\x1b[41mNULL\n\x1b[0m");
		}
	}

//-------xx------Functions--------xx--------
//----------------------Main----------------------
int main(){
	int choice=0;
	while(choice!=9)
	{
		printf("\x1b[33;1m------Menu-----\x1b[0m\n");
		printf("\x1b[35m------choose_option------\x1b[0m\n");
		printf(
			"1:insert at begining\n2:insert at last\n3:insert at given position\n4:delete from begining\n5:delete from last\n6:delete from position\n7:search an element\n8:display list\n9:exit\n"
		       ); 
		printf("enter choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			insert_at_begining();
			break;
			case 2:
			insert_at_last();
			break;
			case 3:
			insert_at_position();
			break;
			case 4:
			delete_from_begining();
			break;
			case 5:
			delete_from_last();
			break;
			case 6:
			delete_position();
			break;
			case 7:
			search();
			break;
			case 8:
			display();
			break;
			case 9:
			exit(0);
			break;
			default:
			printf("please enter valid choice");
			}
		}
}