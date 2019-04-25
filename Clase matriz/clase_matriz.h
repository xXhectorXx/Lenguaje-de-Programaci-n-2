#ifndef MATRIZ_H
#define MATRIZ_H
using namespace std;
#include <iostream>


template <class T>

class Matrix 
{
  private:
    T **a;//tipo de dato
    size_t rows, cols;
      
  public:
      
    Matrix(size_t p_m, size_t p_n);  //Debo siempre poner <T> si utilizo templates? en los constructores y funciones u operadores?
    Matrix(const Matrix<T>& m);
    ~Matrix();  // Destructor 
    
    void initMatrix(T **t);
    void inverMat(T **a);
      
    T deterMat();

    friend std::ostream& operator << (std::ostream &os, Matrix<T> &t); //sobrecarga del operador <<
    friend std::istream& operator >> (std::istream &os, Matrix<T> &t); //sobrecarga del operador >>

    friend Matrix<T> operator + (Matrix<T> x, Matrix<T> y); //sumar matrices
    friend Matrix<T> operator - (Matrix<T> x, Matrix<T> y); //restar matrices
    friend Matrix<T> operator * (Matrix<T> x, Matrix<T> y); //* para multiplicar matrices
    friend Matrix<T> operator * (T x, Matrix<T> y); //* para multiplicar escalar*Matrix

};

#endif
#include "matriz.inl"
