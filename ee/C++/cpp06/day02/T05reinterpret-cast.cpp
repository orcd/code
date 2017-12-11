
class Point
{};

class Size
{};

int main()
{
    Size s;
// C++也支持C形式的转换
//    Point* p = (Point*)&s;
    Point* p = reinterpret_cast<Point*>(&s);
}
