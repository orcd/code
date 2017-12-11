

template<class T, class Compare_Type = greater<T> >
class mySet
{
private:
    T* datas; // 数组
    int size;
    int capacity;
    Compare_Type compare_func;

public:
    mySet(Compare_Type func = Compare_Type())
    {
        this->compare_func = func;
    }
    bool insert(T value)
    {
        for(int i=0; i<size; ++i)
        {
            T v = datas[i];
            if(compare_func(v, value))
            {
                for(int j=size; j > i; j--)
                {
                    datas[j] = datas[j-1];
                }
                datas[i] = value;
                break;
            }
        }
    }
};
