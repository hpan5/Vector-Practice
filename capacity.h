#ifndef __capacity__
#define __capacity__

#include<cstdlib>
#include<stdexcept>

/********************Capacity*********************/
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


#endif
