#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "enter a: ";
  while(!(cin >> a))
  {
    cout<<"Invalid input\n";
    cin.clear();
  }
  cout << "enter b: ";
  cin >> b;
  cout << "a * b = " << a * b << endl;
}
