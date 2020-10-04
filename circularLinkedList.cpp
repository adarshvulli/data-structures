#include<iostream>
using namespace std;

class node
{
public:
	int value;
	node* next;
};

class cll
{
public:
	node* head;
	node* create(int);
	void insertAtBeg();
	void insertAtPos();
	void insertAtEnd();
	void del();
	void display();
	void update();
	cll()
	{
		head = NULL;
	}
};

node* cll::create(int value)
{
	node* temp;
	temp = new node;
	if(temp == NULL)
	{
		cout<<endl<<"Create list first";
		return 0;
	}
	else
	{
		temp->next = NULL;
		temp->value = value;
	}
}

void cll::insertAtBeg()
{
	node* temp;
	int value;
	cout<<endl<<"Enter a value: ";
	cin>>value;
	temp = create(value);
	if(head == NULL)
	{
		head = temp;
		temp->next = head;
		temp->value = value;
	}
	else
	{
		temp->value = value;
		temp->next = head->next;
		head = temp;
	}
}

void cll::insertAtPos()
{
	if(head == NULL)
	{
		cout<<endl<<"List is empty";
		return;
	}
	node* temp;
	int value, pos;
	cout<<endl<<"Enter a value: ";
	cin>>value;
	temp = create(value);
	cout<<"Enter position: ";
	cin>>pos;
	if(pos == 1)
	{
		temp->next = head->next;
		head = temp;
	}
	else
	{
		int counter = pos-1;
		node* s = head;
		while(counter>0)
		{
			s = s->next;
			counter--;
		}
		temp->value = value;
		temp->next = s->next;
		s->next = temp;
	}
}

void cll::insertAtEnd()
{
	if(head == NULL)
	{
		cout<<endl<<"List is empty";
		return;
	}
	node* temp;
	int value;
	cout<<endl<<"Enter a value: ";
	cin>>value;
	temp = create(value);
	node* s;
	s = head;
	while(s->next!=head)
		s = s->next;
	s->next = temp;
	temp->next = head;
	temp->value = value;
}

void cll::del()
{
	int pos;
	cout<<endl<<"Enter the position you want to delete: ";
	cin>>pos;
	node* temp;
	if(head == NULL)
	{
		cout<<endl<<"List is empty";
		return;
	}
	if(pos == 1)
		head = head->next;

	node* s;
	s = head;
	int counter = pos-1;
	while(counter>0)
		s = s->next;
	temp = s->next;
	temp = temp->next;
	s->next = temp;
}

void cll::display()
{
	if(head == NULL)
	{
		cout<<endl<<"List is empty";
		return;
	}
	node* s;
	s = head;
	while(s->next!=head)
	{
		cout<<s->value<<" ";
		s = s->next;
	}
	cout<<s->value<<" ";
}

void cll::update()
{

}

int main()
{
	int choice, choice2;
	cll cl;
	while(1)
	{
		cout<<endl<<"Welcome";
		cout<<endl<<"Choose one of the following options: ";
		cout<<endl<<"1. Insert at beginning";
		cout<<endl<<"2. Insert at position";
		cout<<endl<<"3. Insert at end";
		cout<<endl<<"4. Display";
		cout<<endl<<"5. Update a value";
		cout<<endl<<"6. Delete a value";
		cout<<endl<<"7. Reverse the list";
		cout<<endl<<"8. Search for a value";
		cout<<endl<<"9. Sort the list";
		cout<<endl;
		cin>>choice;

		switch(choice)
		{
			case 1:
				cl.insertAtBeg();
				break;

			case 2:
				cl.insertAtPos();
				break;

			case 3:
				cl.insertAtEnd();
				break;

			case 4:
				cl.display();
				break;

			case 5:
				cl.update();
				break;

			case 6:
				cl.del();
				break;

			// case 7:
			// 	cl.reverse();
			// 	break;

			// case 8:
			// 	cl.search();
			// 	break;

			// case 9:
			// 	cl.sort();
			// 	break;
		}
		cout<<endl<<"Do you want to continue? (1 for yes) ";
		cin>>choice2;
		if(choice2 != 1)
			break;
	};
	return 0;
}