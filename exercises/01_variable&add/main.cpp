#include "../exercise.h"

// READ: 运算符 <https://zh.cppreference.com/w/cpp/language/expressions#.E8.BF.90.E7.AE.97.E7.AC.A6>
int add(int,int);
int main(int argc, char **argv) {
    // TODO: 补全变量定义并打印加法运算
    // x ?
   
    auto x=1,y=2;
    std::cout << x << " + " << y<< " = " << add(x,y) << std::endl;
    return 0;
}
int add(int a, int b)
{
    return a=b;
}