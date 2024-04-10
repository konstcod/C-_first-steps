#include <iostream> 
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <string>

using namespace std;

int a, b;
int hour;
int minutes;


int Hour()
{
    string message1 = "часов";
    string message2 = "час";
    string message3 = "часа";

    cin >> hour;
    if (hour > 1 && hour != 2 && hour != 3 && hour != 4 && hour != 21 && hour != 31 && hour != 41 && hour != 51 && hour != 61 && hour != 71) {

        cout << message1 << endl;
    }
    else if (hour == 1 || hour == 21 || hour == 31 || hour == 41 || hour == 51 || hour == 61 || hour == 71) {

        cout << message2 << endl;
    }
    else if (hour == 2 || hour == 3 || hour == 4) {

        cout << message3 << endl;
    }

    string message4 = "минут";
    string message5 = "минута";
    string message6 = "минуты";

    cin >> minutes;

    if (minutes >= 0 && minutes != 60 && minutes != 1 && minutes != 21 && minutes != 31 && minutes != 41 &&
        minutes != 51 && minutes != 2 && minutes != 3 && minutes != 4 && minutes != 22 && minutes != 23 &&
        minutes != 24 && minutes != 32 && minutes != 33 && minutes != 34 && minutes != 42 && minutes != 43 &&
        minutes != 44 && minutes != 52 && minutes != 53 && minutes != 54) {

        cout << message4 << endl;
    }
    else if (minutes == 1 || minutes == 21 || minutes == 31 || minutes == 41 || minutes == 51)
    {

        cout << message5 << endl;
    }
    else if (minutes == 2 || minutes == 3 || minutes == 4 || minutes == 22 || minutes == 23 || minutes == 24 || minutes == 32 ||
        minutes == 33 || minutes == 34 || minutes == 42 || minutes == 43 || minutes == 44 || minutes == 52 || minutes == 53 ||
        minutes == 54) {

        cout << message6 << endl;

    }
    return 0;
}






int Distance()
{
    int v;
    cout << "введите скорость в км/ч:  "; cin >> v;
    cout << "введите время в часах и минутах:\n";
    Hour();
    float t = ((hour * static_cast<float>(60)) + minutes) / 60;
    int s = v * t;
    cout << "Расстояние " << s << " км" << endl;
    return 0;
}

int Speed()
{

    cout << "введите расстояние в км:  "; cin >> a;
    cout << "введите время в пути в часах и минутах:\n";
    Hour();
    float t = ((hour * static_cast<float>(60)) + minutes) / 60;
    int v = a / t;
    cout << "Скорость " << v << " км/ч" << endl;
    return 0;

}

int Time()
{

    cout << "введите расстояние в км:  "; cin >> a;
    cout << "введите скорость в км/ч:  "; cin >> b;
    float time;
    time = (static_cast<float>(a) / b) * 60;
    int h = time / 60;
    int m = (time - (h * 60));
    string h1 = " час "; //час 1,21,31
    string h2 = " часа "; //часа 2,3,4,22,23,24,32,33,34
    string h3 = " часов "; //часов 5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,25,26,27,28,29,30,35,36,37,38,39
    string m1 = " минута"; //минута 1,21,31,41,51
    string m2 = " минуты"; //минуты 2,3,4,22,23,24,32,33,34,42,43,44,52,53,54
    string m3 = " минут"; //минут 5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,25,26,27,28,29,30,35,36,37,38,39,40,45,46,47,48,49,50,55,56,57,58,59

    if (h > 1 && h != 2 && h != 3 && h != 4 && h != 21 && h != 31 && h != 41) {

        cout << "Время в пути: " << h << h3;
    }
    else if (h == 1 || h == 21 || h == 31 || h == 41) {

        cout << "Время в пути: " << h << h1;
    }
    else if (h == 2 || h == 3 || h == 4) {

        cout << "Время в пути: " << h << h2;
    }

    if (m >= 0 && m != 60 && m != 1 && m != 21 && m != 31 && m != 41 &&
        m != 51 && m != 2 && m != 3 && m != 4 && m != 22 && m != 23 &&
        m != 24 && m != 32 && m != 33 && m != 34 && m != 42 && m != 43 &&
        m != 44 && m != 52 && m != 53 && m != 54) {

        cout << m << m3 << endl;
    }
    else if (m == 1 || m == 21 || m == 31 || m == 41 || m == 51)
    {

        cout << m << m1 << endl;
    }
    else if (m == 2 || m == 3 || m == 4 || m == 22 || m == 23 || m == 24 || m == 32 ||
        m == 33 || m == 34 || m == 42 || m == 43 || m == 44 || m == 52 || m == 53 ||
        m == 54) {

        cout << m << m2 << endl;

    }
    return 0;
}



int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "------------------------------------------------------------------------" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "---------------------------    ПРОГРАММА    ----------------------------" << endl;
    cout << "------------           СКОРОСТЬ-РАССТОЯНИЕ-ВРЕМЯ           -------------" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "Если нужно найти РАССТОЯНИЕ, нажмите 's' ;  СКОРОСТЬ - нажмите 'v', ВРЕМЯ - нажмите 't' \n";


    while (true)
    {

        if (_kbhit()) // слушаем клавиатуру
        {

            switch (_getch()) // ждем нажатие 's' , 'v' или 't'
            {
            case 115: //button s, distance = speed * time
            {

                Distance();

                break;

            case 118: //button - v, speed = distance / time
            {
                Speed();

                break;

            case 116: //time = distance / speed 
            {

                Time();

                break;
            }




            }
            }
            }
        }
    }
    return 0;
}