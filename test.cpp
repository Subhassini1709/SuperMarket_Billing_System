#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    fstream fp1, fp2;
    fp1.open("database.txt", ios::app | ios::out);
    for (int i = 0; i < 20; i++)
    {

        fp1 << "xx"
            << "|";
        fp1 << "xx"
            << "|";
        fp1 << "xx"
            << "|";
        fp1 << "xx"
            << "|";
        for (int j = 0; j < 34; j++)
            fp1 << "*";
        fp1 << endl;
    }
}