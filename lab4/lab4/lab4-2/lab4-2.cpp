#include <iostream>

typedef unsigned char fileForm[30];
typedef unsigned short fileSize;
typedef unsigned char bookName[30];
typedef unsigned char author[30];
typedef bool forKids;
typedef unsigned short pagesNumber;

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct downloadDate
{
    day dd;
    month mm;
    year yyyy;
};

struct DigitalLibrary
{
    fileForm fileForm;
    fileSize fileSize;
    bookName bookName;
    author author;
    forKids forKids;
    pagesNumber pagesNumber;
    downloadDate date;


    // Перегрузка оператора <
    bool operator<(const DigitalLibrary& other) const {
        if (fileSize < other.fileSize)
            return true;
        else
            return false;
    }

    // Перегрузка оператора >
    bool operator>(const DigitalLibrary& other) const {
        if (fileSize > other.fileSize)
            return true;
        else
            return false;
    }

    // Перегрузка оператора ==
    bool operator==(const DigitalLibrary& other) const {
        return (date.dd == other.date.dd) && (date.mm == other.date.mm) && (date.yyyy == other.date.yyyy) && (pagesNumber == other.pagesNumber) &&
            (forKids == other.forKids) && (fileSize == other.fileSize);
    }
};

int main()
{
    setlocale(LC_ALL, "RUS");

    //fileForm fileForm;
    //fileSize fileSize;
    //bookName bookName;
    //author author;
    //forKids forKids;
    //pagesNumber pagesNumber;
    //downloadDate date;

    DigitalLibrary date1 = { "txt", 250, "money", "Borisov", false, 43, {20, 02, 2005} };
    DigitalLibrary date2 = { "txt", 2501, "War and piece", "Tolstoi", false, 14, {21, 02, 2006} };
    DigitalLibrary date3 = { "txt", 250, "money", "Borisov", false, 43, {20, 02, 2005} };


    if (date1 < date2)
        std::cout << "date1 is меньше than date2\n";

    if (date2 > date1)
        std::cout << "date2 is больше than date1\n";

    if (date1 == date3)
        std::cout << "date1 is равны с date3\n";

    return 0;
}
