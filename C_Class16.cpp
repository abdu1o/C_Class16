#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
#include "Manual.h"

int main()
{
    try
    {
        Manual manual("manual.txt");

        manual.Add("Phoebe", "Buffe", "+382131234", "qqwe", "zxczxc");

        manual.SearchByName("Phoebe");
        system("pause");
        system("cls");

        manual.SearchByOwner("Buffe");
        system("pause");
        system("cls");

        manual.PrintAll();

        manual.Save("manual.txt");
    }
    catch (exception& ex)
    {
        cerr << ex.what();
    }
}
