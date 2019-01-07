/*
vector.h
auuthor: Huijie Pan
*/
#ifndef __vector__
#define __vector__

#include<cstdlib>
template <class T>
class vector
{
	T* array = nullptr;
    size_t arr_len = 0;
    size_t capacity = 128;
public://resize, size, at, front back, data begin, end
	void push_back(const T& val);
	T& operator[] (size_t n);
    size_t size();
    void resize(size_t n, T val);
    T& at(size_t n);
    T* begin();
    T* end();
    T& front();
    T& back();
    T* data();
};

/************************Element Access******************/
template <class T>
T& vector<T>:: operator[](size_t n)
{
	return array[n];
}

template <class T>
T& vector<T>:: at(size_t n)
{
    return array[n];
}

template <class T>
T& vector<T>:: front()
{
    return array[0];
}

template <class T>
T& vector<T>:: back()
{
    return array[arr_len-1];
}

template <class T>
T* vector<T>:: data()
{
    return &array[0];
}


template <class T>
T* vector<T>::begin()
{
    return &array[0];
}

template <class T>
T* vector<T>::end()
{
    return &array[arr_len];
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

template <class T>
size_t vector<T>:: size()
{
    return arr_len;
}

template <class T>
void vector<T>:: resize(size_t n, T val)
{
    T ini_val;
    T* temp = new T[n];
    if(n<arr_len)
    {
        for(int i=0; i<n; i++)
        {
            temp[i] = array[i];
        }
    }
    if(n>arr_len)
    {
        if(n<=capacity)
        {
            for(int i=0;i<arr_len;i++)
            {
                temp[i] = array[i];
            }
            for(int i=arr_len; i<n; i++)
            {
                if(val != NULL) temp[i] = val;
                else temp[i] = ini_val;
            }
        }
        else
        {
            //an automatic reallocation of the allocated storage space takes place    
        }
    }
    array = temp;
    arr_len = n;

}

#endif
