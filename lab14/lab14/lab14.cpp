#include "stdafx.h"
#include <iostream>
#include <cwchar>
#include <time.h>

#include "Error.h"		//обработка ошибок
#include "Parm.h"		//обработка параметров
#include "Log.h"		//работа с протоколом
#include "In.h"			//ввод исходного файла


using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	setlocale(LC_ALL, "russian");

    try {

    }
    catch (Error::ERROR e)
    {

    }
    return 0;
}
