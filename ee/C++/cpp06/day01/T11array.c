
struct Array
{
    void** datas; // 每个元素都是void*，所以数组类型是void**
    int capacity; // 容量
    int size; //已经使用的数量
    int step;
};

Array* createArray(int capacity, int step)
{
    Array* arr = malloc(sizeof(Array));
    arr->capacity = capacity;
    arr->datas = malloc(capacity * sizeof(void*));
    arr->size = 0;
    arr->step = step;
    return arr;
}

void addValue(Array* arr, void* data)
{
    if(arr->size >= arr->capacity)
    {
        arr->capacity += arr->step;
        arr->datas = realloc(arr->datas, arr->capacity * sizeof(void*));
    }

    arr->datas[arr->size++] = data;
}

int main()
{

}
