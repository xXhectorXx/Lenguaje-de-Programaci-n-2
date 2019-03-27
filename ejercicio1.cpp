#include <iostream>
using namespace std;

int cambio(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y;

    cout<<"valor de x= "<<x<<endl;
    cout<<"valor de y= "<<y<<endl;
}

int main()
{
    int x, y;

    cout<<"ingrese valor de x"<<endl;
    cin>>x;
    cout<<"ingrese valor de y"<<endl;
    cin>>y;

    cout<<
    cambio(x,y);

}