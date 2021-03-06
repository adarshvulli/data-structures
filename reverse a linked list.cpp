#include<iostream>
#include<cstddef>
using namespace std;
class node
{
public:
	int data;
	node *next;
    node*start=NULL;   //declaring the start pointer as NULL as it not pointing anywhere currently

  void create(int k)   //function begins for creation of linked list
  {
	node *ptr,*ptr1;
	
  for(int i=0;i<k;i++)
  {
	  ptr=new node;
	  cin>>ptr->data;
	  ptr->next=NULL;
	  if(start==NULL)
	   {start=ptr;}
	   else
	   {ptr1=start;
	   while (ptr1->next!=NULL)
	    {
		   ptr1=ptr1->next;
	   }
	   ptr1->next=ptr;
	   		   
	   } 
  }
}
 void display()            //function begins for display of linked list
 {
	 node *temp=start;
	 while(temp!=NULL)
	 {
		 cout<<temp->data<<" ";
		 temp=temp->next;
	 }
 }
  void reverse()        //for reversing a given linked list
  {
	  node *temp,*current,*prev=NULL;
      current=start;
	  while(current!=NULL)
	  {
		  temp=current->next;
		  current->next=prev;    //for the 1st time prev=NULL so current->next will hold NULL.
		  prev=current;
		  current=temp;
		   
		   } 
		   start=prev;    //start pointer will point towards the beginning of reversed list

  }
   };
int main()
{
	node N;
	int n;
	
	
	cout<<"enter the number of elements in the list";   // for creating the list
	cin>>n;
	N.create(n);    
	N.display();
    N.reverse();
	cout<<endl;
    N.display();
    
}
	