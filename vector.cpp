#include<iostream>
using namespace std;

template < class T >
class vector
{
public:
	explicit operator=vector(); //constructor
	~vector();
    vector& operator= (const vector& x);
	void push_back(const T& val);
	T& operator[] (size_t n);
	
	
//Iterators:
private:
	T* array = nullptr;
	size_t arr_len = 0;
};

explicit vector::vector ()
{
	cout << "counstructed" << endl;
}

T& vector:: operator[](size_t n)
{
	return array[n];
}

void vector:: push_back(const T& val)
{
	arr_len++;
	T* temp = array;
	array = new T[arr_len];
	for(int i=0; i<arr_len-1; i++)
	{
		array[i] = temp[i];
	}
	array[arr_len-1] = val;

	delete[] temp;
}



vector& vector:: operator=(const vector& x)
{
	operator=
}

