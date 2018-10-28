#include<bits/stdc++.h>
using namespace std;

int main()
{
  int edge[5][5];
  int visited[5];
  int u,v;
  int total,min=999;

  cout<<"Enter weight of edges btween following nodes:\n";

  for(int i=0;i<5;i++)
  {
    visited[i]=0;

    for(int j=0;j<5;j++)
    {
      edge[i][j]=i+j+1;
      //cout<<i<<" and "<<j<<"\n";
      //cin>>edge[i][j];
      //if(edge[i][j]==0)
      if(i==j)
        edge[i][j]=999;
    }
  }

visited[0]==1;
  for(int counter=0;counter<5;counter++)
  {
    min=999;
    for(int i=0;i<5;i++)
    {

      cout<<i<<endl;
      if(visited[i]==1)
      for(int j=0;i<5;j++)
      {
        cout<<" "<<j<<endl;
        if(visited[j==0])
        if(min>edge[i][j])
          min=edge[i][j];
        u=i;
        v=j;
      }

    }

    total+=edge[u][v];
    visited[v]=1;
    edge[u][v]=999;
    edge[v][u]=999;
    cout<<u<<" and "<<v<<" visited\n";

  }
    //
      //cout<<edge[i][j]<<" ";

}
