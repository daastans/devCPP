#include<bits/stdc++.h>
using namespace std;

class length
{
	int len;
	public:
		
		length(int len)
		{
			cout<<this->len<<" "<<len<<endl;
			this->len=len;
			
		}
		void display(){cout<<len<<endl;		}
		length operator+(length l)
		{
			l.len=len+l.len;
			return l;
		
		}
		
};
int main()
{
	length l1(20),l2(10);
	//l1.display();
	length l3=l1+l2;
	
	//l2.display();
	l3.display();
	return 0;
}
