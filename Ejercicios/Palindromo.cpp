#include<iostream>
using namespace std;


int palindromo(string palabra)
{
    int i=0;
    int j = palabra.length()-1;
    int mitad=j/2;
    while(palabra[i]==palabra[j])
    {
        if(mitad==i)
        {
            cout<<"es palindromo"<<endl;
            break;
        }

    j--;
    i++;    
    }
    if(mitad!=i)
    {
        cout<<"no es palindromo"<<endl;
        return 0;
    }
    

}

int main()
{
    string palabra;
    cout<<"escriba la palabra: "<<endl;
    cin>>palabra;
	palindromo(palabra);

    
}
