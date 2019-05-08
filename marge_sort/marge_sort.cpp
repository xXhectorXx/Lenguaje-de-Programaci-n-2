#include <iostream>
#include <cstring>
using namespace std;


int a[7];
void merge(int *A,int i,int m,int j)
{
int b=i;
int d=m+1;
int c=0;
while (b<=m && d<=j)
{
	if(A[b] >= A[d])
	{
		a[c] = A[d];
		d++;c++;
	}
	else
	{
		a[c]=A[b];
		b++;c++;
	}
}
while (b<=m) 
{
	a[c++]=A[b++];
}
while (d<=j)
{
	a[c++]=A[d++];
}
for (int in=0;in<j-i+1;in++)
{
	A[in+i]=a[in];
}
//memcpy(A+i,a,(j-i+1)*sizeof(int));
}

void merge_sort(int *A,int i, int j)
{
	if (i==j) return;
	int m=(i+j)/2;
	merge_sort(A,i,m);
	merge_sort(A,m+1,j);
	merge (A,i,m,j);
}



int main() 
{
int n=7;
int array[]={4,2,0,7,9,5,10};
  int *A = array;
  merge_sort(array,0, 6);

for(int i=0;i<n;i++)
{
    cout<<array[i]<<" ";
}
return 0;
}
