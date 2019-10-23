#include <iostream>

using namespace std;

void Insert(int H[],int n)
{
  int i = n;
  int temp;
  temp = H[n];


  while(i>1 && temp>H[i/2])
  {
    H[i] = H[i/2];
    i = i/2;
  }
  H[i] = temp;
}

int Delete(int A[],int n)
{
  int i,j,x,temp,val;
  val = A[1];
  x = A[n];
  A[1] = A[n];
  A[n] = val;
  i=1;
  j=i*2;
  while(j<n-1)
  {
    if(A[j+1] > A[j])
      j++;
    if(A[i] < A[j])
    {
      temp = A[i];
      A[i] = A[j];
      A[j] = temp;
      i =j;
      j = j*2;
    }
    else break;
  }
return val;
}

int main()
{
 //int H[] = {0,2,5,8,9,4,10,7};
 int H[] = {0,10,20,30,25,5,40,35};
// out : 40 25 35 10 5 20 30
 int i ;
 for(i =2;i<=7;i++)
    Insert(H,i);


cout<<"After Insertion\n";
 for(i = 1 ;i<=7;i++)
    cout<<H[i]<<" ";


    for(i =7;i>1;i--)
       Delete(H,i);

cout<<"\nAfter Deletion\n";
  for(i = 1 ;i<=7;i++)
     cout<<H[i]<<" ";

cout<<endl;

  return 0;
}
