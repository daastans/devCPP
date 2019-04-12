#include <iostream>
#include<limits>
using namespace std;

int ReadInt(const string& prompt)
{
  int n;
  while((cout<<prompt)&&!(cin>>n))
  {
    cout<<"Invalid Input\n";
    cin.clear();
    cin.ignore(numeric_limits<int> ::max(),'\n');
  }
  return n;
}
int main() {
  int a, b;
  a=ReadInt("Enter a : ");
  b=ReadInt("Enter b : ");
  cout << "a * b = " << a * b << endl;
  return 0;
}
