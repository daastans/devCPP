#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

class List
{
		private:
		Node *Head;

		public:
		List()  {Head=NULL;}
		void insert(int);
		void insert(int,int);
		void deletee();
		void deletee(int);
		void print();
		int length(Node*);          	//Recursive
		void search(int);
		int length();
		Node* getHead();
		void getNode(int);
		void getNodeLast(int);
		void getNodeLast(Node*,int);	//Recursive
		void middleNode();
		void count(int);
		void count(Node*,int);           //Recursive
		void loop();
		void sort();
		void swap(int , int);
		void swapPairwise();
		void lastToFirst();              //Interchanges last and first element
		void reverse(Node*);
		void reverse();
		void seprateEvenOdd();
		
};
void List::seprateEvenOdd()
{
	Node* last=Head;
	while(last->next)
		last=last->next;

	Node* new_last=last;
	Node* tmp=Head;
	Node* prev=Head;;
	Node* Next;
	Node head;
	while(tmp!=last)
	{
		if(tmp%2==0)
		{
			
}
		}
		if(tmp%2!==0)
		{
			Next=tmp->next;
			new_last->next=tmp;
			prev-next=Next;
			tmp=Next;
			new_last->next->next=NULL;
			
			
		}
	}
	Node* head=
	cout<<"Even Odd separated "; print();
}
void List::reverse()
{
	Node* curr=Head;
	Node* prev=NULL;
	Node* next=NULL;
	while(curr!=NULL)
	{
		
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	Head=prev;
	cout<<" reverse ";print();
}
void List::lastToFirst()
{
	Node* temp=Head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	Node* last=temp->next;
	temp->next=NULL;
	last->next=Head;
	Head=last;
	cout<<Head->data<<" Moved to position of "<<Head->next->data<<" \n";
}
void List::swapPairwise()
{
	Node* tmp=Head;

	while(tmp->next && tmp->next->next)
	{
		int temp=0;
		temp=tmp->data;
		tmp->data=tmp->next->data;
		tmp->next->data=temp;
		
		tmp=tmp->next->next;
	}
	cout<<"Pairwise swapped "<<"\n";
}
void List::swap(int pos1,int pos2)
{
	
	Node* node1,*node2;
	int pos=1;
	Node* tmp=Head;
	while(tmp!=NULL)
	{
		if(pos==pos1)
		node1=tmp;
		
		else if(pos==pos2)
		node2=tmp;

		tmp=tmp->next;
		pos++;
		
	}
	int tmpData=node1->data;
	node1->data=node2->data;
	node2->data=tmpData;
	
	cout<<" NODE "<<pos1<<" and "<<pos2<<" exchanged \n";
}
void List::sort()
{
	Node* fast=Head;
	Node* slow=Head;
	while(slow!=NULL)
	{
		fast=slow;
		while(fast->next!=NULL)
		{
			int temp=0;
			if(fast->data > (fast->next)->data)
			{
				temp=fast->data;
				fast->data=fast->next->data;
				fast->next->data=temp;
				cout<<"Data Exchanged "<<temp<<"  "<<fast->data<<"\n\n";
    		}
			fast=fast->next;
			print();
		}
		
		slow=slow->next;

	}
}
void List::loop()
{
	Node* fast=Head,*slow=Head;
	while(fast->next!=NULL && fast->next->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(slow==fast)
		{
			cout<<"Loop"<<"\n";
			return;
		}
	}
	
	
}
void List::count(Node* Head,int num)
{
	static int c=0;
	if(Head==NULL)
	{
		
		cout<<"NO of time "<<num<<" occurs is "<<c<<"	Recursion function used"<<"\n";
		return;
	}
	
	if(num==Head->data)
	c++;
	count(Head->next,num);
}
void List::count(int num)
{
	int count=0;
	Node* start=Head;
	while(start!=NULL)
	{
		if(num==start->data)
		{
			count++;
		}
		start=start->next;
		
	}
	cout<<"NO of time "<<num<<" occurs is "<<count<<"\n";
}
void List::middleNode()
{
	struct Node *slow_ptr = Head;
    struct Node *fast_ptr = Head;

    if (Head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        printf("The middle element is [%d]\n\n", slow_ptr->data);
    }

}
void List::getNodeLast(Node* tmp,int pos)
{
	static int i=0;
	if(tmp==NULL)   return;
	getNodeLast(tmp->next,pos);
	if(++i=pos)
	{
		cout<<pos<<" Node is : "<<tmp->data<<"\n";

		}
}
void List::getNodeLast(int pos)
{
	Node* temp=Head;
	int len=length();
	for(int i=1;i<=len-pos;i++)
	{
		temp=temp->next;
	}
	cout<<pos<<" Node from last is "<<temp->data<<"\n";
}
void List::getNode(int pos)
{
	Node* temp=Head;
	for(int i=1;i<pos;i++)
	{
		temp=temp->next;
	}
	
	cout<<pos<<" NOde is "<<temp->data<<"\n";
}
void List:: search(int datum)
{
	Node* tmp=Head;
	int count=1;
	while(tmp!=NULL && tmp->data!=datum)
	{
		tmp=tmp->next;count++;
	}
	if(tmp!=NULL)
		cout<<" "<<tmp->data<<" first found on INdex : "<<count<<"\n";
	else
		cout<<" "<<datum<<" Not in List\n";
}
int List::length()
{   int count=0;
	Node* temp=Head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
Node* List::getHead()
{
	return Head;
}
int List:: length(Node* Head)
{
	Node* temp=Head;
	if(temp==NULL)   {return 0;}
	return 1 + length(temp->next);
	
	
}
void List:: insert(int datum)
		{
			Node *add=new Node();
			add->data=datum;
			if(Head==NULL)
			{
				add->next=NULL;
			}
			else
			{
	   			add->next=Head;
			}
			Head=add;
			

		}
void List::insert(int datum,int pos)
{
	Node *add=new Node(); add->data=datum; add->next=NULL;
	Node* tmp=Head;
	if(pos==1)
	{   add->next=Head;
		Head=add;
		return;
	}
	Node* tmp1=Head;
	for(int i=1;i<pos-1;i++)
	{
		tmp1=tmp1->next;
	}
	add->next=tmp1->next;
	tmp1->next=add;
}

void List::print()
		{
			Node *tmp=Head;
			cout<<" List is: ";
			while(tmp!=NULL)
			{
				cout<<tmp->data<<" ";
				tmp=tmp->next;
			}
			cout<<"\n";
	
		}
		
void List::deletee()
{
	Node* tmp=Head;
	Node* curr;
	if(Head==NULL)  return;
	while(tmp!=NULL)
	{   curr=tmp;tmp=tmp->next;
		free(curr);
	}
	Head=NULL;
}
void List::deletee(int pos)
{
	Node* temp=Head;
	if(pos==1)
	{
		Head=temp->next;
		free (temp);
		return;
	}
	for(int i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
	Node* del=temp->next;
	if(del->next==NULL)
	{
		temp->next=NULL;
		free (del);
		return;
	}
	temp->next=(temp->next)->next;
	del=NULL;
	free(del);
}
int main()
{   List a;
	a.insert(11,1);a.insert(22,1);a.insert(33,1);a.insert(99,3);
	a.print();
	a.insert(33);a.insert(44);a.insert(22,1);a.insert(22,1);a.insert(33,1);a.insert(33,1);a.insert(77,1);a.print();
	cout<<" LENGTH IS : "<<a.length()<<"\n";
	a.search(11);a.search(0);
	a.getNode(5);a.getNode(7);
	a.getNodeLast(1);	a.getNodeLast(6);	//a.getNodeLast(a.getHead(),6);
	a.middleNode();
	a.count(11);a.count(a.getHead(),2);
	a.loop();
	//a.sort();
	a.swap(1,10); a.print();
	a.swapPairwise();a.print();
	a.lastToFirst();a.print();
	a.reverse();
	a.seprateEvenOdd();
	








	return 0;
}
