#include<deque>
#include<iostream>
using namespace std;

int main()
{
	deque<float> d;
	
	for(int i=0;i<=10;i++)
		d.push_front(i*(1.7));
		
 	for(int i=0;i<d.size();i++)
		cout<<" "<<d[i]<<"\n";
}
