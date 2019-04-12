#include <iostream>
#include<limits>
//#include<templates>
using namespace std;
template <typename T>

T ReadType(const string& prompt)
{
  T n;
  while((cout<<prompt)&&!(cin>>n))
  {
    cout<<"Invalid Input\n";
    cin.clear();
    cin.ignore(numeric_limits<int> ::max(),'\n');
  }

  cin.ignore(numeric_limits<int> ::max(),'\n');
  return n;
}
int main() {
  int a, b;
  a=ReadType<int>("Enter a : ");
  b=ReadType<int>("Enter b : ");
  cout << "a * b = " << a * b << endl;
  return 0;
}
