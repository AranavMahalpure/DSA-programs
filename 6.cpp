#include<iostream>
#define MAX 20
using namespace std;

class ABC
{
	char exp[MAX];
	char stack[MAX];
	int top;

	public:
	ABC()
	{
		top = -1;
	}
	
	//stack operations
	bool isEmpty();
	bool isFull();
	void clearStack();
	char peek();
	void push(char);
	void pop();

	void accept();
	void show();
	void check();
};


int main()
{
	ABC a;
	int ch;
	do
	{
		cout<<"-------Expression validator-------";
		a.accept();
		a.show();
		a.check();
		cout<<"\nDo you want to check one more expression(1/0) :";
		cin>>ch;
	}
	while(ch==1);
	cout<<"Exiting....";

	return 0;
}

void ABC::check()
{
	char tmp;
	cout<<"\nValidating Expression";
	for(int i = 0; exp[i]!='\0'; i++)
	{	
		tmp = exp[i];
		if(tmp=='{' || tmp=='[' || tmp=='(')
			push(tmp);
		else if(tmp=='}' && peek()=='{')
			pop();
		else if(tmp==']' && peek()=='[')
			pop();
		else if(tmp==')' && peek()=='(')
			pop();
		else
		{
			cout<<"\nGiven Expression is not valid1";
			return;
		}
	}
	if(isEmpty())
		cout<<"\nGiven Expression is valid";
	else
		cout<<"\nGiven Expression is not valid";
}

void ABC::accept()
{
	cout<<"\nEnter an Expression: ";
	cin>>exp;
}

void ABC::show()
{
	cout<<"\nEntered Expression is: "<<exp;
}

bool ABC::isEmpty()
{
	if(top==-1)
		return 1;
	return 0;
}

bool ABC::isFull()
{
	if(top==MAX-1)
		return 1;
	return 0;
}

void ABC::clearStack()
{
	top = -1;
}

char ABC::peek()
{
	if(top!=-1)
		return stack[top];
	return '\0';
}

void ABC::push(char a)
{
	if(!isFull())
	{
		top++;
		stack[top] = a;
	}
}

void ABC::pop()
{
	if(!isEmpty())
	{
		top--;
	}
}