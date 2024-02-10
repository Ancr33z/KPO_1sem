#include "stdafx.h"

void input(int& iDay, int& iMonth, int& iYear, int &birthday, int &birthmonth)
{
    int date;
    do
    {
        cout << "������� ���� � ������� ��������\n";
        cin >> date;

        iDay = date / 1000000;
        iMonth = (date / 10000) % 100;
        iYear = date % 10000;

        if (!check(iDay, iMonth, iYear))
            cout << "���� ������� ����������� ��������� ����" << endl;
    } while (!check(iDay, iMonth, iYear));

    do
    {
        cout << "������� ���� ���� �������� � ������� �� ��\n";
        cin >> birthday;
        cin >> birthmonth;

        if (birthmonth > 12 || birthmonth < 1 || birthday > 31 || birthday < 1)
            cout << "���� ������� ����������� ��������� ����" << endl;
    } while (birthmonth > 12 || birthmonth < 1 || birthday > 31 || birthday < 1);
}