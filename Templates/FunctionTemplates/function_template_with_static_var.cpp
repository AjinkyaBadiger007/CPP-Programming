#include<iostream>

using namespace std;

template <typename T>
void fun(const T& x)
{
    static int i = 10;
    cout<< ++i<<endl;
    return;
}

int main()
{
    fun<int>(1); // prints 11
    fun<int>(2); // prints 12
    fun<double>(1.1); // prints 11
    getchar();
    return 0;
}
