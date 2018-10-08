#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

class Tree
{   private:
	Node* root;
	public:
		Tree():root(NULL) {	  }
		void add(int);
		void addL(int);
		void addR(int);
		void print();
};
void Tree::addL(int datum)
{
	Node* left=new Node;
	left->data=datum;
	root->left=left;
}
void Tree::addR(int datum)
{
	Node* right=new Node;
	right->data=datum;
	root->right=right;
}
void Tree::print()
{
	cout<<root->data<<"\n";
}
void Tree:: add(int datum)
{
	Node* temp=new Node;
	temp->data=datum;
	temp->left=NULL;
	temp->right=NULL;
	root=temp;
}
int main()
{
	Tree t;
	t.add(5);t.addL(7);
	t.print();
	
	

}
