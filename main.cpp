 #include <iostream>

class Base
{
    Base() {}
    virtual ~Base() {}
};

class Derived : public Base
{
    Derived(int size)
    {
        m_Size = size;
        m_Data = new int[size]; 
    }

    ~Derived()
    {
        delete m_Data;
    }

    bool Equals(Derived other)
    {
        if (m_Size = other.m_Size)
        {
            return true;
        }
        return false;
    }

    int m_Size;
    int * m_Data;
};

int main()
{
    Derived * d = new Derived(5);
    Base * b = new Derived(*d);

    if (d->Equals(6))
    {
        std::cout << "Equal!" << std::endl;
    }

    delete d;
    delete b;
}