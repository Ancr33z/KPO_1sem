#include "stdafx.h"

void input(int& iDay, int& iMonth, int& iYear, int &birthday, int &birthmonth)
{
    int date;
    do
    {
        cout << "Введите дату в формате ДДММГГГГ\n";
        cin >> date;

        iDay = date / 1000000;
        iMonth = (date / 10000) % 100;
        iYear = date % 10000;

        if (!check(iDay, iMonth, iYear))
            cout << "Дата введена некорректно повторите ввод" << endl;
    } while (!check(iDay, iMonth, iYear));

    do
    {
        cout << "Введите вашу дату рождения в формате ДД ММ\n";
        cin >> birthday;
        cin >> birthmonth;

        if (birthmonth > 12 || birthmonth < 1 || birthday > 31 || birthday < 1)
            cout << "Дата введена некорректно повторите ввод" << endl;
    } while (birthmonth > 12 || birthmonth < 1 || birthday > 31 || birthday < 1);
}