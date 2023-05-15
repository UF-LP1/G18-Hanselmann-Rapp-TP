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

    cout << "Current local time and date: %s" << asctime(tiempolocal) << endl;

        if (tiempolocal->tm_wday == 1 || tiempolocal->tm_wday == 2 || tiempolocal->tm_wday == 3 || tiempolocal->tm_wday == 4 || tiempolocal->tm_wday == 5)
        {
            if (tiempolocal->tm_hour >= 7 && tiempolocal->tm_hour <= 13)
            {
                return 1;
            }
            if (tiempolocal->tm_hour >= 17 && tiempolocal->tm_hour <= 20)
            {
                return 2;
            }
        }
        else if (tiempolocal->tm_wday == 6)
        {
            if (tiempolocal->tm_hour >= 8 && tiempolocal->tm_hour <= 13)
            {
                return 5;
            }
        }
        else
            return 01234567;
}
