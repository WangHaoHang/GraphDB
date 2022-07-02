#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int a = 2;
    int b = 3;
    int c = 0;
    c = add(a, b);
    cout << a << " " << b << " " << c << endl;
    cout << "hello world" << endl;
    return 0;
}