#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long n, m ; 
	while (cin>>n>>m)
	{
		long cdn, cdm; 
		vector <int> cdsn; 
		vector <int> cdsm;
		
		if(n==0 && m==0) {
			return 0;
		}
		for(int i = 0; i<n; i++)
		{	
			cin>>cdn; 
			cdsn.push_back(cdn);
		}
		for(int i = 0; i<m; i++)
		{	
			cin>>cdm; 
			cdsm.push_back(cdm);
			
		}
			
		int x= 0; 
		for(int i = 0; i<cdsn.size(); i++)
		{
			for ( int j= 0; j<cdsm.size(); j++)
			{
				if( cdsn[i] ==cdsm[j])
				{
					x++;
				}
					
			}
		}
		cout<<x<<endl;
		
	}
		return 0;
}
