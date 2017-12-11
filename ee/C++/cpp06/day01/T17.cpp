
int foo(int)
{

}

class MyClass
{
    mutable int a;

    int foo(/*const MyClass* this*/) const
    {
        // const MyClass* this;
        this->a = 15; // error
    }
};


