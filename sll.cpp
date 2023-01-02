#include<iostream>

#include<string>

using namespace std;

class Pinnacle_Club 
{
        struct node 
        {
                int prn;
                string name;
                node * next;
        }* start;

        public:
                Pinnacle_Club() {
                        start = NULL;
                }
        void create();
        void display();
        void count();
        int retcount();
        void addpos(int n);
        void add();
        void deletem();
        void del(int n);
};

void Pinnacle_Club::del(int n)
{
	if(start = NULL)
	{
		cout<<"list is emplty, cant delete\n";
		return;
	}
	node *curr;
	if(n==0)
	{
		curr = start;
		start = start->next;
		delete(start);
	}
}

void Pinnacle_Club::deletem()
{
	int ch;
	cout<<"Delete member\n";
	cout<<"1. Delete president\n";
	cout<<"2. Delete secretery\n";
	cout<<"3. Delete member\n";
	cout<<"0. exit\n";
	cout<<"Enter your choice";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Deleting president\n";
			del(0);
			break;
		case 2:
			cout<<"Deleting secretary\n";
			del(retcount());
			break;
		case 3:
			cout<<"Deleting member\n";
			del(retcount()-1);
			break;
		case 0:
			return;
		default:
			cout<<"Wrong choice";
			break;
	}
}

void Pinnacle_Club::add()
{
	int ch;
	cout<<"Adding new member\n";
	cout<<"1. Add president\n";
	cout<<"2. Add secretery\n";
	cout<<"3. Add member\n";
	cout<<"4. Add member(Specific position)\n";
	cout<<"0. exit\n";
	cout<<"Enter your choice";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Adding president\n";
			addpos(0);
			break;
		case 2:
			cout<<"Adding secretary\n";
			addpos(retcount());
			break;
		case 3:
			cout<<"Adding member\n";
			addpos(retcount()-1);
			break;
		case 4:
			cout<<"Adding member\n";
			cout<<"Where to insert member : ";
			cin>>ch;
			if(ch==0 || ch == retcount()-1)
				cout<<"Member canot be added here.";
			else
				addpos(ch);
			break;
		case 0:
			return;
		default:
			cout<<"Wrong choice";
			break;
	}
}


void Pinnacle_Club::addpos(int n)
	{
		if(n<=retcount())
		{
			node *temp, *curr;
			temp = new node;
                	temp -> next = NULL;
                	cout << "Enter the PRN : ";
                	cin >> temp -> prn;
                	cout << "Enter the Member name : ";
                	cin.ignore(1, '\n');
                	getline(cin, temp -> name);

			curr = start;
			for(int i=0;i<n-1;i++)
			{
				curr = curr-> next;
			}
			
			if (n == 0) 
                	{
                      		temp->next = curr;
                      		start = temp;
              	  	} else 
                	{
				temp->next = curr->next;
				curr->next = temp;
			}
		}
		else
		{
			cout<<"Can't add here";
		}
	}

void Pinnacle_Club::create() 
{
	if(start!=NULL)
	{
		cout<<"List already exist";
		return;
	}
        node * curr, * temp;
        int ans = 1;
	cout<<"Creating a list\n";
        do 
        {
                temp = new node;
                temp -> next = NULL;
                cout << "Enter the PRN : ";
                cin >> temp -> prn;
                cout << "Enter the Member name : ";
                cin.ignore(1, '\n');
                getline(cin, temp -> name);
                if (start == NULL) 
                {
                        start = temp;
                        curr = temp;
                } else 
                {
                        curr -> next = temp;
                        curr = curr -> next;
                        
                }
                	cout << "\nEnter 1 to add one more member";
                        cin >> ans;
        } while (ans == 1);
}

void Pinnacle_Club::display() 
{
        node * curr;
        curr = start;
        while (curr != NULL) 
        {
                cout << curr -> prn << " " << curr -> name << " -> ";
                curr = curr -> next;
        }
        cout << "NULL\n";
}

void Pinnacle_Club::count() 
{
        node * curr;
        curr = start;
        int count = 0;
        while (curr != NULL) 
        {
                count++;
                curr = curr -> next;
        }
        cout << "The total number of members is " << count << endl;
}

int Pinnacle_Club::retcount() 
{
        node * curr;
        curr = start;
        int count = 0;
        while (curr != NULL) 
        {
                count++;
                curr = curr -> next;
        }
        return count;
}



int main() 
{
        Pinnacle_Club a;
        a.create();
/*        cout << "Creating the sll\n";
        a.create();
        cout << "\nDisplay the members\n";
        a.display();
        
        cout << "adding member\n";
        a.add();
        
        cout << "\nDisplay the members\n";
        a.display();
        
        cout << "\nCounting the members\n";
        a.count();
        */
        int ch;
        do
        {	
        	cout<<"\n\nWelcome to Pinnacle Club\n";
//	        cout<<"1. Create a list.\n";
        	cout<<"2. Count members.\n";
        	cout<<"3. Display members.\n";
        	cout<<"4. Add member.\n";
        	cout<<"5. Delete member.\n";
        	cout<<"0. Exit.\n";
      		cout<<"Enter you choise: ";
		cin>>ch;
		switch(ch)
		{
			case 0:
				cout<<"Exiting....\n";
				break;
				
//			case 1:
//				a.create();
//				break;
			case 2:
				cout << "\nCounting the members\n";
        			a.count();
				break;
			case 3:
				cout << "\nDisplay the members\n";
        			a.display();
				break;
			case 4:
				cout << "adding member\n";
        			a.add();
				break;
			default:
				cout<<"Wrong choice";
				break;
		}
	}while(ch!=0);
	
	
        return 0;
};