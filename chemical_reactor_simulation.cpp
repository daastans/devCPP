/* This program is simulation of chemical reactor problem in simulation and modelling
Time unit is imaginary YOu can modify it to suit your moood
delta is time interval of our study
ka and kb are rate constants
It is assumed that concentration changes instantaneously at end of delta*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
float a[50],b[50],c[50],ka=0.008,kb=0.002,delta=0.1;
int n=50,i=0;
a[0]=100;       //initial concentration of reactant a
b[0]=50;       //initial concentration of reactant b
c[0]=0.0;       //initial concentration of product c

while(i<n)
{
  i++;
a[i]=a[i-1]+(kb*c[i-1]-ka*a[i-1]*b[i-1])*delta;         //concentration of a after i seconds
b[i]=b[i-1]+(kb*c[i-1]-ka*a[i-1]*b[i-1])*delta;         //concentration of b after i seconds
c[i]=c[i-1]+2*(ka*a[i-1]*b[i-1]-kb*c[i-1])*delta;       //concentration of c after i seconds
cout<<a[i]<<" "<<b[i]<<"  "<<c[i]<<"  after "<<i<<"ns"<<endl;
}

}
