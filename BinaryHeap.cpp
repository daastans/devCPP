#include <iostream>
using namespace std;

class Heap
{
  public:
  int size;
  int *heapNode;

  Heap(int size);
  void heapify(int*,int,int);
  void buildHeap(int*,int n);
};
Heap:: Heap(int size)
{
  heapNode=new int[size];
}
void Heap::heapify(int *arr,int i,int N)
{
  int l=2*i;	//left child
  int r=2*i+1;	//right child
  int largest;

  if(l<=N && arr[l]>arr[i])
  {
    largest=l;
  }
  else
  {
    largest=i;
  }
  if (arr[r]>arr[largest])
  {
      largest=r;
  }

  if (largest!=i)
  {
      swap(arr[largest],arr[i]);
  }
  heapify(arr,largest,N);
}
void Heap::buildHeap(int *arr,int n)
{
	for(int i=n/2+1;i>0;i--)
		heapify(arr,i,n);
}

int main() {
	//int *arr=new int[8];
	Heap h(8);
	for(int i=0;i<=8;i++)
		h.heapNode[i]=i;

	h.buildHeap(h.heapNode,8);
	for(int i=0;i<=8;i++)
		cout<<h.heapNode[i]<<" ";

	return 0;
}
