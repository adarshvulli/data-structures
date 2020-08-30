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

 void insert_beginning(int x)
 {
   node *begin =new node;
   begin->data=x;
   begin->next=start;
   start=begin;
 }

void insert_end(int a)
{
	node *end=new node;
	end->data=a;
	end->next=NULL;

	node *tail=start;
	while(tail->next!=NULL)
	{
		tail=tail->next;
	}
	 tail->next=end;
}	 
 
 void insert_after_value(int desired, int b)
 {
	 node *current=start;
	 while (current !=NULL&& current->data !=desired)
	 {
		 current=current->next;
	 }
	 if (current==NULL)
	 {
		cout<<"element"<<desired<<"is not in the list"<<endl;
	 }
	 else
	 {
		 node *between= new node;
		 between->data=b;
		 between->next=current->next;
		 current->next=between;
	 }
	 
	 
	 

 }



 };
int main()
{
	node N;
	int n,k,m;
	int element;
	int desired_ele;
	cout<<"enter the number of elements";   // for creating the list
	cin>>n;
	N.create(n);    
	N.display();

	cout<<"enter the element which has to be added in the beginning";   //for inserting the element at the beginning
	cin>>m;
    N.insert_beginning(m);
	N.display();

	cout<<"enter the element which has to be added in the end ";   //for inserting the element at the end 
	cin>>k;
    N.insert_end(k);
	N.display();
	
	cout<<"enter the desired element after which you want to add";   // for inserting th element between 2 or after a desired element
	cin>>desired_ele;
	cout<<"enter the element which has to be added after the desired element";
	cin>>element;
	N.insert_after_value(desired_ele,element);
	N.display();
}
