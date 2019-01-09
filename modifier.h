#ifndef __modifier__
#define __modifier__

/*******************Modifiers*****************/
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
    }
    
}

template <class T>
void vector<T>:: push_back(const T& val)
{ //capacity
    if(arr_len == arr_cap)
    {
        if(arr_cap == 0)
        {
            
            array = new T[1];
            arr_cap = 1;
        }
        else
        {
            T* temp = new T[2*arr_cap];
            for(unsigned int i=0; i<arr_len; i++)
            {
                temp[i] = array[i];
            }
            array = temp;
            arr_cap = 2*arr_cap;
            delete[] temp; 
        }
    }
    array[arr_len] = val;
    arr_len++;
}

template <class T>
void vector<T>:: resize(size_t n, T val)
{   
    if(n <= arr_cap)
    {
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
            for(unsigned int i=0;i<arr_len;i++)
            {   
                temp[i] = array[i];
            }
            for(unsigned int i=arr_len; i<n; i++)
            {   
                temp[i] = val;
            }
        }
        array = temp;
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
