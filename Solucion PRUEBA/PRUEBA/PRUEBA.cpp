#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t timer;
    struct tm* tiempolocal;

    time(&timer);
    tiempolocal = localtime(&timer);
    cout <<"Current local time and date: %s"<< asctime(tiempolocal) <<endl;

    return 0;
}
