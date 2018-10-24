/*This is simple implementation of Graph using AdjacentList */
#include<bits/stdc++.h>
using namespace std;

struct AdjListNode            //Declaring Adjacent List Node Structure
{
  int value;
  AdjListNode* next;
};
struct AdjList                //Declaring AdjList Structure
{
  AdjListNode* head;
};
class Graph
{
  public:
  int numVertices;
  AdjList *AdjListArray;      //Pointer to AdjList Structure Helpful in dynamic declarations

    Graph(int);               //Constructor to initialise AdjListArray
    AdjListNode* createAdjListNode(int);
    void addEdge(int,int);
    void printAdjList();
    void BreadthFirstSearch();
};
void Graph:: printAdjList()
{

  for(int i=0;i<numVertices;i++)
  {
    AdjListNode* tempAdjListNode=(AdjListArray[i].head);
    cout<<"Vertex "<<i<<" |";
    while(tempAdjListNode)
    {
      cout<<" ---> "<<tempAdjListNode->value;
      tempAdjListNode=tempAdjListNode->next;
    }
    cout<<"\n";

  }

}

void Graph::addEdge(int src,int dest)
{
  AdjListNode* newAdjListNode=createAdjListNode(src);
  newAdjListNode->next=AdjListArray[dest].head;
  AdjListArray[dest].head=newAdjListNode;

  AdjListNode* newAdjListNode1=createAdjListNode(dest);
  newAdjListNode1->next=AdjListArray[src].head;
  AdjListArray[src].head=newAdjListNode1;

  //cout<<"Added head between "<<src<<" and "<<dest<<endl;

}
AdjListNode* Graph::createAdjListNode(int dest)
{
  AdjListNode* temp=new AdjListNode;
  temp->value=dest;

  temp->next=NULL;
  return temp;
}
Graph::Graph(int v)
{
  numVertices=v;
  AdjListArray=new AdjList[v];

  for(int i=0;i<numVertices;i++)
  {
    AdjListArray[i].head=NULL;
  }

}
void Graph:: BreadthFirstSearch()
{
  //cout<<"CAlled for debug";
  int* visited=new int[numVertices];        //For Keeping track of unvisited nodes

  for(int i=0;i<numVertices;i++)
    visited[i]=0;                           //initialising all visited ot zero

  queue <AdjListNode*>q;
  q.push(AdjListArray[0].head);
  cout<<"0 visited \n";
  visited[0]=1;
  while(!q.empty())
  {
    AdjListNode* crawler=q.front();         //getting our first node
    q.pop();
    while(crawler)                          //crawler will move form one node to another in graph
    {
      if(visited[crawler->value]!=1)        //if we ever encounter a unvisited node
      {
        visited[crawler->value]=1;
        cout<<crawler->value<<" visited \n";
        q.push(AdjListArray[crawler->value].head);
      }
        crawler=crawler->next;
    }
}
}
int main()
{
  Graph g(5);

  g.addEdge(0, 1);
  g.addEdge(0, 4);
  g.addEdge(1, 2);
  g.addEdge(1, 3);
  g.addEdge(1, 4);
  g.addEdge(2, 3);
  g.addEdge(3, 4);
  //g.printAdjList();
  g.BreadthFirstSearch();
  return 0;
}
/* output
Vertex 0 | ---> 4 ---> 1
Vertex 1 | ---> 4 ---> 3 ---> 2 ---> 0
Vertex 2 | ---> 3 ---> 1
Vertex 3 | ---> 4 ---> 2 ---> 1
Vertex 4 | ---> 3 ---> 1 ---> 0 */
