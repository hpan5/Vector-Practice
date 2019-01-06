#include "vector.h"
//using namespace std;
//resize. size
template <class T>
vector<T>::vector()
{
	//cout << "counstructed" << endl;
}

template <class T>
T& vector<T>:: operator[](size_t n)
{
	return array[n];
}

template <class T>
void vector<T>:: push_back(const T& val)
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

/*vector& vector:: operator=(const vector& x)
{
	//operator=
}*/

