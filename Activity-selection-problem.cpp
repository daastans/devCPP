#include<bits/stdc++.h>
using namespace std;
int main()
{
  int numberOfActivities,*start_time,*finish_time,activitiesPerfomed=1;
  cout<<"Enter number Of Activities\n";
  cin>>numberOfActivities;

  start_time=new int[numberOfActivities];
  finish_time=new int[numberOfActivities];

  for(int i=0;i<numberOfActivities;i++)
  {
    // It is assumed that Activities will be entered in
    // ascending order of finish tme
    cout<<"Enter starting time of Activity number "<<i+1<<" \n";
    cin>>start_time[i];
    cout<<"Enter Finish time of Activity number "<<i+1<<" \n";
    cin>>finish_time[i];
  }

int ii=1;
while (ii<=numberOfActivities) {
  if(start_time[ii]>=finish_time[ii-1])
  {
    cout<<"Activity "<<ii<<" Selected \n";
    activitiesPerfomed++;
    ii++;
  }
}
  cout<<"Total number of Activities Performed "<<activitiesPerfomed<<" \n";
}
