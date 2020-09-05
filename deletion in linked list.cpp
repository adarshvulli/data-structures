
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

 void del_beginning()
 {
     node *p;
     int i;
	 if(start==NULL)
	 {
		 cout<<"empty list\n";
	 }
    else
   {
      p=start;
      start=start->next;
   }
            
       }


	void del_end()   
	{
		node *ptr,*ptr1;
		if(start==NULL)
		{cout<<"list is empty";}   // if list is empty

       else if (start->next==NULL)
	   {
		   delete start;      //delete the only element present in the list
		   start=NULL;
	   }
	   else
	   {
		   ptr = start;   
            while(ptr->next != NULL)  
                {  
                    ptr1 = ptr;  
                    ptr = ptr ->next;  
                }  
                ptr1->next = NULL;  
                delete ptr;      
                 
        }
	}	
	   
  
	  void Delete_With_Value(int desired) {
    if(start==NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node *temp = start, *prev = NULL;
    if(start -> data == desired) {
        start = start -> next;
        temp -> next = NULL;
        delete temp;
        return;
    }

    while(temp != NULL && temp -> data != desired) {
        prev = temp;
        temp = temp -> next;
    }
    if(temp == NULL) {
        cout << "Element " << desired << " not in list" << endl;
    } else {
        prev -> next = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
}
	  
};




int main()
{
	node N;
	int n;
	int position;
	
	cout<<"enter the number of elements";   // for creating the list
	cin>>n;
	N.create(n);    
	N.display();
   
    N.del_beginning();    //for deleting the first element i.e. deletion at beginning
    N.display();

    cout<<endl;
	N.del_end();         //for deleting the last element i.e deletion at the end.
	N.display();

	cout<<"enter the position from where element has to be deleted";  //for deleting the element at a particular position
    cin>>position;
	N.Delete_With_Value(position);
    N.display();

}
