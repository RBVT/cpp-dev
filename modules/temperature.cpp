#include <iostream>
// #include <stdlib.h>
// #include <time.h>

using namespace std;

int main()

{


delay:

int delay;

{

cout << "\033[0d\033[2J" << endl;
int now=time(NULL);
int later=now+delay;

while
(now<=later)now=time(NULL);

}






int nCelsius;

cout << "Введите температуру по Цельсию:" << endl;
cin >> nCelsius;

int nFactor = 212 - 32;
int nFahrenheit = nFactor * nCelsius / 100 + 32;

cout << "Температура по Фаренгейту: \n" << nFahrenheit << endl;

goto delay;


}

