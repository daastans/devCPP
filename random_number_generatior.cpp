/*
deterministically generated numbers which appear to be random are called psuedorandom number.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int a=189277,m=pow(2,16), x[100];    //see Note at end
  x[0]=3;
  cout<<"Index\tNumber\\n";
  cout<<"0\t"<<x[0]<<endl;
  for(int i=1;i<100;i++)
  {
    x[i]=(x[i-1]*a)%m;
    float p=x[i]/pow(2,16);
    cout<<i<<"\t"<<p<<"\n";
  }
return 0;
}
/*
since a modulus is used in generation of random number after some interval number are going to repeat
and maximum interval is m but it can be much lower if value of a and x[0] are not choosen properly
according to research optimal values area
m=2^r
a=k*8+3;
here i have divided number with 2^16 to make it more presentable
You can better use m=15 and a=7 as a begineer
*/
