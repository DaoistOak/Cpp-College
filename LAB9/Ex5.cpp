#include<iostream>
using namespace std;

class MyException{
public:
    MyException(const char* message) : m_message(message) {}
    const char* what() const throw() { return m_message; }
private:
    const char* m_message;
};

int main()
{
    try
    {
        throw MyException("This is a custom exception");
    }
    catch(const MyException& e)
    {
        cout << "Caught MyException: " << e.what() << endl;
    }
    return 0;
}


