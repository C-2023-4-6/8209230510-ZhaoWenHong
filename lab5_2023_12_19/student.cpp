#include <iostream>
#include "student.h"            //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()      //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int n,const char naame[20],char s) {
    num = n;
    strcpy_s(name, naame);
    sex = s;
}