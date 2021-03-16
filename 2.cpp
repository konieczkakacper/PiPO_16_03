#include <string>

class BaseOfBAse
{
public:
    int pole;
};

class Base1: public virtual BaseOfBAse
{};

class Base2: public virtual BaseOfBAse
{};

class Derived: public Base1, public Base2
{};

int main()
{
    Derived *d = new Derived;
    d -> Base1::pole = 1;
}
