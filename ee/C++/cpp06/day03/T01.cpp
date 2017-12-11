
// 直观
// 代码多
// 没有拓展性
int add()
{
    int i=0;
    i+=1;
    i+=2;
    i+=3;
    i+=4;
    i+=5;
    return i;
}

// 代码变少
int add(int arg)
{
    int i=0;
    for(j = 1; j<=arg; j++)
    {
        i+= j;
    }
    return i;
}

// 使用数学公式
int add(int arg)
{
    return arg*(arg+1)/2;
}

// 过度简化
int add()
{
    return 55;
}


