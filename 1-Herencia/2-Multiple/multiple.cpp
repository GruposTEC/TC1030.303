#include <iostream>

using namespace std;

class A
{
    public:
    void display()
    {
        cout << "Display de clase A" << endl;
    }
};
class B
{
    public:
    void display()
    {
        cout << "Display de clase B" << endl;
    }
};
class C : public A , public B
{
    
};

int main()
{
    C obj;

    obj.display();

    return 0;
}