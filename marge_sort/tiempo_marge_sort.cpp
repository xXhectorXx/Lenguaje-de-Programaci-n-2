#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include<stdlib.h>
#include <math.h>

using namespace std;

int *TA;
int *TB;

typedef long long myint;
typedef void ((*fun_sort)(int *, int));

bool test_sort ( fun_sort sort,const int *A,int n)
{
	memcpy(TA,A,sizeof(int)*n);
	memcpy(TB,A,sizeof(int)*n);
	
	clock_t t=clock();
	sort(TA,n); // el sort
	float time=float (clock() - t) / CLOCKS_PER_SEC;
	std::sort(TB,TB+n); // std 
	for (int i=0;i<n;i++)
	{
		if (TA[i]!=TB[i])
		{
			return false;
		}
		cout<<time<<" ";
	}
	return true;
}

int a[];

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
while (b<=m) a[c++]=A[b++];
while (d<=j) a[c++]=A[d++];
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
    srand(time(NULL));
	int N = pow(10,5);
	int*A=new int [N];
	TA=new int [N];
	TB=new int [N];

    fun_sort sort[1] = {merge_sort};
	
	for (int n=100;n<=N;n*=10)
	{
		for (int i=0;i<n;i++)
		{
			A[i]=rand()%n;
		}
		cout<<n<<" ";
		
		for (int s=0;s<3;s++)
		{
			if (!test_sort(sort[s],A,n))
			{
				cout<<"FAIL\n";
		        return 0;
			}
			
		}
		cout <<endl;

}