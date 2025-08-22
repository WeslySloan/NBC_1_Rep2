#include "Player.h"
#include <iostream>

// ������
Player::Player(string nickname) 
{
    this->nickname = nickname;
    this->level = 1;
    this->HP = 100;
    this->MP = 50;
    this->power = 10;
    this->defence = 5;
    this->accuracy = 80;
    this->speed = 10;
    this->job_name = ""; 
}

void Player::printPlayerStatus() 
{
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "����: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}
