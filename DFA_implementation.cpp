#include<bits/stdc++.h>
using namespace std;
int main(void)
{
  srand(time(0));       //generating random number
  int max= 1 + rand()%15;          //genereating random word length max<=15
  std::cout << "No of characters "<<max<< '\n';
  int i=0;

  while(i<max)
  {
    char c= 'a'+rand()%2;      //generating random character a or b
    i++;                       //chracter counter
    cout<<i<<" character is read "<<c<<"\n";


    if(c=='a')              //checking if characters starts with a
    {
      if (i==max)         //if only one character is present state
        cout<<"\n String accepted \nonlY  A present in string\n";
      while(i<max)        //loop reading for more than one characters
      {
        c='a'+rand()%2;
        i++;
        cout<<i<<" character is read "<<c<<"\n";

        if(i==max&&c=='a')      //checking if last character is a
          cout<<"\nString Accepted\nFirst and Last character is A\n";
        else if(i==max)         //checking if last character is not a
          cout<<"\nString Rejected \nFirst character is A but last is B\n";
      }
    }
    else      //if start character is not a
    {
      while(i<max)      //just waiting for rest of chracters to be read
      {
         c='a'+rand()%2;
         i++;
         cout<<c<<" ";
      }
      cout<<"\nString REjected \n Does NOt start with A"<<endl;
    }
  }
  return 0;
}
