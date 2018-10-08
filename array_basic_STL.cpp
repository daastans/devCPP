#include<array>
#include<string>
#include<iostream>
using namespace std;

int main(void)
{
	array<string,5> name={"Munna","Asmeeta","Ankur","Isha","Akash"};
	
	/**for(int i=0;i<name.size();i++)
	{
		cout<<i<<" : "<<name[i]<<endl;
	}**/
		for(auto i:name)
	{
		cout<<" "<<i;
	}
}
