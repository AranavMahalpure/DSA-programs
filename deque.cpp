#include <iostream>

using namespace std;

class deque
{
	struct node
	{
		int data;
		node * next;
	}*f,*r;
	
	bool isEmpty()
	{
		if(f==NULL)
			return 1;
		return 0;
	}

	bool isSinglar()
	{
		if(f==r)
			return 1;
		return 0;
	}
	
	public:
	deque()
	{

		f = NULL;
		r = NULL;

	}
	
	
	void insert_front();
	void insert_rear();
	void delete_front();
	void delete_rear();
	void display();




};

void deque::delete_front()
{
	if(isEmpty())
	{
		cout<<"Dequeue is empty, Cannot delete.";
	}
	else
	{
		cout<<"Deleted "<<f->data<<endl;
		if(isSinglar())
		{
			delete f;
			f = NULL;
			r = NULL;
		}
		else
		{
			node * t;
			t = f;
			f = f->next;
			delete t;
		}
	}
	
}

void deque::delete_rear()
{
	if(isEmpty())
	{
		cout<<"Dequeue is empty, Cannot delete.";
	}
	else
	{
		cout<<"Deleted "<<r->data<<endl;
		if(isSinglar())
		{
			delete r;
			f = NULL;
			r = NULL;
		}
		else
		{
			node * t;
			t = f;
			while(t->next!=r)
			{
				t = t->next;
			}
			t->next=NULL;
			delete r;
			r = t;
		}
	}
	
}

void deque::insert_rear()
{
	node * tmp;
	tmp = new node;
	tmp->next=NULL;
	cout<<"Enter data: ";
	cin>>tmp->data;
	cout<<"Insertion complete.\n";
	if(isEmpty())
	{
		f=tmp;
		r=tmp;
	}
	else
	{
		r->next=tmp;
		r=tmp;
	}

}

//erorre
void deque::insert_front()
{
	node * tmp;
	tmp = new node;
	cout<<"Enter data: ";
	cin>>tmp->data;
	cout<<"Insertion complete.\n";
	if(isEmpty())
	{
		tmp->next=NULL;
		f=tmp;
		r=tmp;
	}
	else
	{
		tmp->next=f;
		f=tmp;
	}

}

void deque::display()
{
	if(!isEmpty())
	{
		node * t;
		t = f;
		while(t!=NULL)
		{
			cout<<t->data<<" -> ";
			t=t->next;
		}
		cout<<"NULL"<<endl;
		
	}
	else
	{
		cout<<"deque is empty.";
	}
}


int main()
{
	deque obj;
	int ch;
	cout<<"\n\tImplementation of dequeue using linked list\n";
	do
	{
		
		
		cout<<"\n\t1. Insert at front\n";
		cout<<"\t2. Insert at rear\n";
		cout<<"\t3. Delete at front\n";
		cout<<"\t4. Delete at rear\n";
		cout<<"\t5. Display\n";
		cout<<"\t0. Exit\n";
		cout<<"Enter Your choice: ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				cout<<"\nInserting at front\n";
				obj.insert_front();
				break;
			case 2:
				cout<<"\nInserting at rear\n";
				obj.insert_rear();
				break;
			case 3:
				cout<<"\nDeleting at front\n";
				obj.delete_front();
				break;
			case 4:
				cout<<"\nDeleting at rear\n";
				obj.delete_rear();
				break;
			case 5:
				cout<<"\nDisplay\n";
				obj.display();
				break;
		}
	}
	while(ch!=0);
	cout<<"Exiting";
	cout<<"test";
	return 0;
}