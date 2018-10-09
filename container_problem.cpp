#include<bits/stdc++.h>
using namespace std;

int main()
{
  int cont_wt[10],capacity=0,numberOfContainers=0;
  cout<<"Enter capacity"<<"\n";
  cin>>capacity;
  cout<<"capacity left is "<<capacity<<"\n";
  cout<<"Enter container sizes"<<"\n";
  for(int i=0;i<10;i++)
    cin>>cont_wt[i];

  sort(cont_wt,cont_wt+10);

  while(capacity>=0 && numberOfContainers<10) {

    capacity-=cont_wt[numberOfContainers];
    cout<<cont_wt[numberOfContainers]<<" is added\n";
    numberOfContainers++;
    cout<<"capacity left is "<<capacity<<"\n";
  }

  std::cout << "Maximum numberOfContainers that can be loaded is" <<numberOfContainers-1<< '\n';
}
