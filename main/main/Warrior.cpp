#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname): Player(nickname) 
{
    job_name = "����";
    cout << "* ����� �����Ͽ����ϴ�." << endl;
    HP = 120;
}

void Warrior::attack() 
{
    cout << "���� �ֵθ���" << endl;
}