#include <iostream>

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct Date
{
    day dd;
    month mm;
    year yyyy;

    // Перегрузка оператора <
    bool operator<(const Date& other) const {
        if (yyyy < other.yyyy || mm < other.mm || dd < other.dd)
            return true;
        else 
            return false;
    }

    // Перегрузка оператора >
    bool operator>(const Date& other) const {
        if (yyyy > other.yyyy || mm > other.mm || dd > other.dd)
            return true;
        else
            return false;
    }

    // Перегрузка оператора ==
    bool operator==(const Date& other) const {
        return (dd == other.dd) && (mm == other.mm) && (yyyy == other.yyyy);
    }
};

int main()
{
    setlocale(LC_ALL, "RUS");

    Date date1 = { 7, 1, 1981 };
    Date date2 = { 6, 1, 1981 };
    Date date3 = { 7, 1, 1980 };

    if (date1 < date2)
        std::cout << "date1 is меньше than date2\n";

    if (date2 > date1)
        std::cout << "date2 is больше than date1\n";

    if (date1 == date3)
        std::cout << "date1 is равно to date3\n";

    return 0;
}
