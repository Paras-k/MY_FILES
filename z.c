#include<stdio.h>
#include<stdlib.h>

struct bhai{
     int data;
   struct bhai *next;
    
};
typedef struct bhai node;
node *head1=NULL,*head2=NULL;
void insert( int num)
{
   node *n1, *temp,*newnode;
   n1=(int*)malloc(sizeof(node));
    n1->data=num;
    n1->next=NULL;
} 
void display()
{
    while(node!=NULL)
    {
      printf("%d",node->data);
      node =node->next;
    
    }printf("\n");

}/*
void sublist(*head1,*head2)
{
	node*temp1=head1,temp2=head2,*ptr1=head1,*ptr2=head2;
	while(temp1!=NULL&&temp2!=NULL)
	{
		if(temp1->data==temp2->data)
		{
			temp1=temp1->next;
			temp2=temp2->next;
		}
		else
		{
			temp1=ptr1;
			ptr2=temp2;
		}
	}
}*/


int main(){


}
