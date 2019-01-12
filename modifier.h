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
    std::swap(this->arr_len, that.arr_len);
    std::swap(this->arr_cap, that.arr_cap);
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
            //array[0] = val;
        }
        else
        {
            T* temp = new T[2*arr_cap];
            for(unsigned int i=0; i<arr_len; i++)
            {
                temp[i] = array[i];
            }
            delete[] array;
            array = temp;
            arr_cap = 2*arr_cap;
        }
    }
    array[arr_len] = val;
    arr_len++;
}

#endif
