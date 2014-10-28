#include <iostream>
#include <myclass.h>

using namespace std;

int main()
{
    cout << "Math class:" << endl;
    MyClass mymath;
    cout << "10+20 = " << mymath.addition(10, 20) << endl;
    cout << "10*20 = " << mymath.multiplication(10,20) << endl;
    return 0;
}
