#ifndef __capacity__
#define __capacity__

#include "vector.h"
template <class T>
class vector;
/********************Capacity*********************/
template <class T>
bool vector<T>::empty() const
{
    if(arr_len == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
size_t vector<T>:: capacity()
{
    return arr_cap;
}

template <class T>
size_t vector<T>:: size()
{
    return arr_len;
}

template <class T>
void vector<T>:: reserve(size_t n)
{
    if(n > arr_cap)
    {
        T* newArr = new T[n];
        for(unsigned int i=0; i<arr_len; i++)
        {
            newArr[i] = array[i];
        }
        array = newArr;
        arr_cap  = n;
        delete[] newArr;
    }

}

template <class T>
void vector<T>:: resize(size_t n,const T& val)
{
    if(n <= arr_cap)
    {
        //T* temp = new T[n];
        if(n<arr_len)
        {
            for(int i=n; i<arr_len; i++)
            {
                array[i] = val;
            }
        }
        if(n>arr_len)
        {
            for(unsigned int i=arr_len; i<n; i++)
            {
                array[i] = val;
            }
        }
    }
    else
    {
        reserve(n);
        for(unsigned int i=arr_len; i<n; i++)
        {
                array[i] = val;
        }
    }
    arr_len = n;
}
#endif
