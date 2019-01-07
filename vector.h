/*
author: Huijie Pan
*/
#ifndef __vector__
#define __vector__

#include<cstdlib>
#include<stdexcept>
template <class T>
class vector
{
private:
    T* array = nullptr;		//dynamic array
    size_t arr_len = 0;	//number of elements
    size_t arr_cap = 0; //amount of available space

public://resize, size, at, front back, data begin, end
    void push_back(const T& val);
    T& operator[] (size_t n);
    size_t size();
    size_t capacity();
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
    if( (n<0) || (n>=arr_len))
    {
        throw std::out_of_range("value out of range");   
    }
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

/***************************Iterators*************************/
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


#endif