#include<iostream>
#include<math.h>
#define max 1000000
using namespace std;

char prime[max];

long Goldbach()
{
	long i,j;
	for(i=0;i<=max;i++)
	{
		prime[i]=1;
	}

	for(i=2;i<sqrt(max);)
	{
	    for(j=i*2;j<=max;j+=i)
		{
			prime[j]=0;	
	    }    
		i++;
		for(;!prime[i];i++) ;    
	}
}

int main()
{
    long int n,i,j,p,a,b;	//n es el valor que da el usuario, a y b es la suma de numeros primos que se descompone del numero dado.	
    Goldbach();
    while(scanf("%ld",&n)==1)	//pide el valor de n al usario.
    {
    	if(n==0 || n==1)	//
	    {				  //En caso sea 0 o 1 el programa terminara.
		    break;		//
		    p=0;
	    }
		else
		{
		    for(i=2;i<max;i++)
			{
				if(prime[i]==1 && prime[n-i]==1)
				{
					p++;
					a=i;
					b=n-i;
					break;
				}
			}
		   if(p==0)
		   {
		   		cout<<"Es incorrecto"<<endl;
		   }
		   else
		   {
		   		cout<<n<<" = "<<a<<" + "<<b<<endl;
		   }
		}
    }
}
