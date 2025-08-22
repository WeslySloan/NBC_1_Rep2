#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname)
{
    job_name = "도적";
    cout << "* 도적으로 전직하였습니다." << endl;
    speed = 15;
}

void Thief::attack()
{
    cout << "단검을 휘두른다" << endl;
}