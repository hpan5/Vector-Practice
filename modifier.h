#ifndef __modifier__
#define __modifier__

/*******************Modifiers*****************/
/*template <class T>
void vector<T>:: reserve()*/

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
            for(int i=0; i<arr_len; i++)
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
        if(n<=arr_cap)
        {   
            for(int i=0;i<arr_len;i++)
            {   
                temp[i] = array[i];
            }
            for(int i=arr_len; i<n; i++)
            {   
                temp[i] = val;
                //if(val != NULL) temp[i] = val;
                //else temp[i] = ini_val;
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
