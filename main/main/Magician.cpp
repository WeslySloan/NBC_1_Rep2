#include "Magician.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname)
{
    job_name = "������";
    cout << "* ������� �����Ͽ����ϴ�." << endl;
    MP = 70;
}

void Magician::attack()
{
    cout << "������ ����Ѵ�" << endl;
}