
class A
{
    public:
        explicit A(int arg=10)
        {
        
        }

        A& operator+(const A& other)
        {
            return *this;
        }

      //  A& operator+(int)
      //  {}
};

int main()
{
    A a;
    a + 5;
}
