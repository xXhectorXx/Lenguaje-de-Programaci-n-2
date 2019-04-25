#include <iostream>

template<class T>        
Matrix<T>::Matrix(size_t m , size_t n)  //Constructor
{
    rows = m;
    cols = n;
 
    a = new T*[rows]; //puntero apuntando a otro puntero
 
    for(int i = 0; i< rows; i++)    // = a[rows] [cols]
    {
        a[i] = new T[cols];
    }
  //delete []a;
}

template <class T>
Matrix<T>:: ~Matrix()  //Destructor
{
  delete[]a;
}

template <class T>
void Matrix<T>::initMatrix(T **t)        //inicializar 
{
     
    for(int i=0; i < rows; i++)
    {
        for(int j=0; j < cols; j++)
        {
            a[i][j] = t[i][j];
        }
    }
 
}

template <class T>
Matrix<T> operator +(Matrix<T> x, Matrix<T> y)  //+ para sumar matrices
{
    while(x.rows == y.rows || x.cols == y.cols)
    {
    
      Matrix<T> sum(x.rows, x.cols);
   
      int i,j;
   
      for(i=0; i < x.rows; i++)
        {
          for(j=0; j < x.cols; j++)
            {
              sum.a[i][j] = x.a[i][j] + y.a[i][j];
            }
        }
         
      return sum;
    }
}

template <class T>
Matrix<T> operator *(Matrix<T> x, Matrix<T> y)    //* para multiplicar matrices
{ 
    while(x.cols == y.rows){
    
      Matrix<T> mult(x.rows, y.cols);
    
      for(int i=0; i < x.rows; i++)
        {
          for(int j=0; j < x.cols; j++)
            {
              mult.a[i][j] = 0;
   
              for(int k=0; k < x.cols; k++)
                {
                  mult.a[i][j] += x.a[i][k] * y.a[k][j];   
                }
                 
            }
        }
         
      return mult;
    }
}
template <class T> class Matrix;
template <class T> std::ostream& operator << (std::ostream &os, Matrix<T> &t);
template <class T> std::istream& operator >> (std::istream &os, Matrix<T> &t);
 
template <class T> Matrix<T> operator + (Matrix<T> x, Matrix<T> y);
template <class T> Matrix<T> operator - (Matrix<T> x, Matrix<T> y);
template <class T> Matrix<T> operator * (Matrix<T> x, Matrix<T> y);
template <class T> Matrix<T> operator * (T x, Matrix<T> y);
