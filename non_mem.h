#ifndef __non_mem__
#define __non_mem__

/***************Non-member functions*************/
template <class T>
bool operator==(const vector<T>& lhs,
                const vector<T>& rhs)
{
    if(lhs.size() != rhs.size() || lhs.capacity() != rhs.capacity())
        return false;
    for(int i = 0; i<lhs.size(); i++)
    {
        if(lhs[i]!=rhs[i])
            return false;
    }
    return true;
    
}

#endif
