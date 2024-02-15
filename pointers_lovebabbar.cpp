#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;

    // address of operator --> &
    cout << "address of num is=" << &num << endl;

    // pointer used to store address
    // assigning a pointer using * operator
    int *ptr = &num;
    cout << "the value at num is " << *ptr << endl;

    double d = 4.2;
    double *p2 = &d;

    cout << "the address is :" << p2 << endl;
    cout << "the value is :" << *p2 << endl;

    cout << "size of the integer is :" << sizeof(num) << endl;
    cout << "size of the pointer is :" << sizeof(ptr) << endl;

    cout << "size of the double is :" << sizeof(d) << endl;
    cout << "size of the double pointer is :" << sizeof(p2) << endl;

    // copying a pointer
    int *q = ptr;
    cout << q << "--" << ptr << endl;
    cout << *q << "--" << *ptr << endl;
    return 0;
}
