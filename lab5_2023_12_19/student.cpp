#include <iostream>
#include "student.h"            //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()      //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int n,const char naame[20],char s) {
    num = n;
    strcpy_s(name, naame);
    sex = s;
}