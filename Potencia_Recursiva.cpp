#include <iostream>

using namespace std;

int potencia(int b, int n)
{
    if(n==0)
    {
        return 1;
    }
    
    else
    {
        int aux= potencia(b, n/2);
    
        if(n%2==0)
        {
            return aux*aux;
        }
        else
        {
            return b * aux * aux;
        }
    }
}
int main()
{
    int a, b;
    cin>>a;
    cin>>b;
    cout<<"el resultado de: "<<potencia(a,b)<<endl;
    return 0;
}
