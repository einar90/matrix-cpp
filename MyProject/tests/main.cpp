#include <unittest++/UnitTest++.h>
#include <myclass.h>
#include <mymatrix.h>

TEST(MyMath) {
    MyClass my;
    CHECK(my.addition(3,4) == 7);
    CHECK(my.multiplication(3,4) == 12);
}

TEST(MyMatrix) {
    MyMatrix matrix(5);
    CHECK(matrix.length() == 5);
}

int main()
{
    return UnitTest::RunAllTests();
}
