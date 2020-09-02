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

 void search(int x)           //to find the location of element to be searched 
 {
	 int i=0;
     node *current=new node;
	 current=start;
	  if(current==NULL)         //if the list never existed
	 {
	    cout<<"list doesn't exist";		
	 }
      else
	  {  while (current!=NULL)
	    {
		 if(current->data==x)
		  { cout<<"Item found at "<<i+1<<"location";   //i+1 is used bcoz we have started i from zero but in human language we start our counting from 1
		     return;                 //used so that the loop ends when we find the desired location
		      }
		   i++;
	      current=current->next;     
	  }
	  cout<<"element not found";
		
	  }
	  
     
 }

 

 };
int main()
{
	node N;
	int n;
	int element;
	
	cout<<"enter the number of elements";   // for creating the list
	cin>>n;
	N.create(n);    
	N.display();

    cout<<"enter the element which has to be searched";
    cin>>element;
    N.search(element);
}
	
