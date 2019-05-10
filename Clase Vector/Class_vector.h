#ifndef My_VECTOR_H
#define My_VECTOR_H

template <class T>

class my_vector
{
private:
	T *p_data;
	int m_size;
	int max_cap;
	static const int delta_cap=10;

public:
	my_vector(int p_size=0); 
	my_vector(const my_vector & v); 
	virtual ~my_vector(); 
	void push_back(const T & e); 
	void reserve(int p_cap); 
	void resize(int p_size); 
	T & operator[](int i);
};

#endif //MY_VECTOR.H
