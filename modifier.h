#ifndef __modifier__
#define __modifier__

/*******************Modifiers*****************/
template <class T>
void vector<T>:: clear()
{
    resize(0);
}

template <class T>
void vector<T>::swap(vector& that)
{
    std::swap(this->array, that.array);
    
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

#endif
