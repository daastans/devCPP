#include <iostream>
#include<limits>
using namespace std;

int main() {
  int a, b;
  cout << "enter a: ";
  while(!(cin >> a))
  {
    cout<<"Invalid input\n";
    cin.clear();
    cin.ignore(numeric_limits<int> ::max(),'\n');
  }
  cout << "enter b: ";
  cin >> b;
  cout << "a * b = " << a * b << endl;
}
