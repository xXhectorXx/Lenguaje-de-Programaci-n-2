#include <stdio.h>
#include <math.h>
using namespace std;

double EPS=0.00001;
int p,q,r,s,t,u;

double ecuacion(double x)
{
  return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

double bisection()
{
  	double left = 0;
	double right = 1;
	
	  	while (left + EPS < right)
	  	{
	    	double med = (left+right)/2;
		    	if (ecuacion(left) * ecuacion(med) <= 0)
				{
		      		right = med;
		    	}
				else 
				{
		      		left = med;
		    	}
	  	}
	 	 return (left+right)/2;
}

int main()
{
 	while (scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)!=EOF)
 	{
	    if (ecuacion(0) * ecuacion(1) > 0)
		{
	  		printf("no tiene solucion%s\n");
		}
			else
		{
	  		printf("%.4f\n", bisection());
		}
  	}
}

