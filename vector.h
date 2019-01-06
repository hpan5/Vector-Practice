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

public:
	explicit vector(); //constructor
    //~vector();
     //vector& operator= (const vector& x);
    void push_back(const T& val);
    T& operator[] (size_t n);
};

#endif
