#ifndef __non_mem__
#define __non_mem__

#include "vector.h"
template <class T>
class vector;
/***************Non-member functions*************/
template <class T>
bool operator==(const vector<T>& lhs,
                const vector<T>& rhs)
{
    if(lhs.arr_len != rhs.arr_len || lhs.arr_cap != rhs.arr_cap)
        return false;
    for(int i = 0; i<lhs.arr_len; i++)
    {
        if(lhs[i]!=rhs[i])
            return false;
    }
    return true;
    
}

#endif
