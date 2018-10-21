/* This program is simulation of chemical reactor problem in simulation and modelling
Time unit is imaginary YOu can modify it to suit your moood */

#include<bits/stdc++.h>
using namespace std;

int main()
{
float a[50],b[50],c[50],ka=0.008,kb=0.002,delta=0.1;
int n=50,i=0;
a[0]=100;
b[0]=50;
c[0]=0.0;

while(i<n)
{
  i++;
a[i]=a[i-1]+(kb*c[i-1]-ka*a[i-1]*b[i-1])*delta;
b[i]=b[i-1]+(kb*c[i-1]-ka*a[i-1]*b[i-1])*delta;
c[i]=c[i-1]+2*(ka*a[i-1]*b[i-1]-kb*c[i-1])*delta;
cout<<a[i]<<" "<<b[i]<<"  "<<c[i]<<"  after "<<i<<"ns"<<endl;
}

}
