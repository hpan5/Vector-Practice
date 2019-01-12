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
//private:
    T* array = nullptr;		//dynamic array
    size_t arr_len = 0;	//number of elements
    size_t arr_cap = 0; //amount of available space

public://resize, size, at, front back, data begin, end
    //constructor
    explicit vector();
    explicit vector(size_t count, const T& val = T());
    //Copy Constructor
    vector(const vector&other);
    //Move constructor
    vector(vector&& other);
    //Destructor
    ~vector();
    //Non-member Function Overloads
    //void swap(vector<T> &x, vector<T> &y);
    //Modifier
    void swap(vector &that);
    void push_back(const T& val);
    void clear(); 
    //Capacity
    bool empty() const;
    size_t size();
    size_t capacity();
    void resize(size_t n, T val = T());
    void reserve(size_t n);
    //Iterators
    T* begin();
    T* end();
    //Element Access
    T& front();
    T& back();
    T* data();
    T& operator[] (size_t n);
    T& at(size_t n);
};

/**************Constructor&Destructor**********************/
template <class T>
vector<T>:: vector()
{
    
    
}

template <class T>
vector<T>:: vector(const vector& other)
{
    //array = new T;
    array = other.array;
    arr_len = other.arr_len;
    arr_cap = other.arr_cap; 
}

template <class T>
vector<T>:: vector(vector&& other)
{
    array = other.array;
    arr_len = other.arr_len;
    arr_cap = other.arr_cap;
    other.array = nullptr;
    other.arr_len = 0;
    other.arr_cap = 0;
}

template <class T>
vector<T>:: vector(size_t count, const T& val)
{
    array = new T[count];
    for(int i=0; i<count; i++)
    {
        array [i] = val;
    }
    arr_len = count;
    arr_cap = count;
}

template <class T>
vector<T>:: ~vector()
{
    delete array;
}

/**************Non-member Function Overloads*************/ 
namespace std
{
template <class T>
void swap(vector<T> &x, vector<T> &y)
{
    //std::swap(x.array, y.array);
    //std::swap(x.arr_len, y.arr_len);
    //std::swap(x.arr_cap, y.arr_cap);
    x.swap(y);
}
}
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
