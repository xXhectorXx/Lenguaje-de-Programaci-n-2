#include <iostream>
using namespace std;

void bubble_sort(int *A, int n)
{
	int aux;
	
	for (int i = 0; i<n ; i++)
	{
		for(int j=0;j<n-1;j++)
		{
			
			if(*(A+j) > *(A+j+1))
			{
				aux = *(A+j);
				*(A+j) = *(A+j+1);
				*(A+j+1) = aux;
			}
		}
	} 
	
}

int main ()
{
	int n; 
	int *A;
	cout<<"Ingrese el numero de elementos: ";
	cin>>n;
	
	A = new int[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese un numero ["<<i<<"]: ";
		cin>>*(A+i);
	}
				
	bubble_sort(A,n);
							
	for(int i=0;i<n;i++)
	{
		cout<<*(A+i)<<" ";
	}			
	delete[] A;
	return 0;

}
