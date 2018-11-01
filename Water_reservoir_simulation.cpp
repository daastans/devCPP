/*The objective of simulation is to study a reservoir with different capacities
and find their respective spillage and shortage per month for given years*/

#include<bits/stdc++.h>
using namespace std;
int calcRiverFlow()
{
  return (rand()%60);
}
int calcRain()
{
  return rand()%25;
}
int calcDemand()
{
  return rand()%85;
}
int calcseepageLoss()
{
  return rand()%10;
}
int calcEvaporationLoss()
{
  return rand()%5;
}
void printM(int a,int b, int c)
{
  cout<<"\t"<<a<<"\t "<<b<<"\t   "<<c<<"\n";
}

int main()
{
  srand(time(0));
  int n=100,Vin=0,GrossVolume=0,Tloss=0,m=1,shortage=0,demand=0;
  int vol[101],spill[101],Volnet,waterLeft,capacity=100;
  vol[1]=100;
  spill[1]=0;

cout<<"month\tvin\tGrossV\tTLoss\tDemand\tVol\tSpill\tshort\n";
  while(m<101)
  {
    cout<<m<<"\t";
    m++;
    Vin=calcRiverFlow()+calcRain(); cout<<Vin<<"\t ";
    GrossVolume=Vin+vol[m-1]; cout<<GrossVolume<<" \t";
    Tloss=calcseepageLoss()+calcEvaporationLoss();cout<<Tloss<<" \t";
    demand=calcDemand();cout<<demand<<" ";
    if(Tloss>GrossVolume)
    {
      shortage=demand;
      vol[m]=0;
      spill[m]=0;
      printM(vol[m],spill[m],shortage);
      continue;
    }
    else if (Tloss<=GrossVolume)
    {
      Volnet=GrossVolume-Tloss;
    }
    if(demand>Volnet)
    {
      shortage=demand-Volnet;
      spill[m]=0;
      vol[m]=0;
      printM(vol[m],spill[m],shortage);
      continue;
    }
    else if(demand<=Volnet)
    {
      waterLeft=Volnet-demand;
    }
    if(waterLeft>capacity)
    {
      spill[m]=waterLeft-capacity;
      vol[m]=capacity;
    }
    else if(waterLeft<=capacity)
    {
      spill[m]=0;
      vol[m]=waterLeft;
    }
    printM(vol[m],spill[m],shortage);
  }


}
