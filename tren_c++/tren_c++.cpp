﻿// tren_c++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string> // подключаем строки
#include <fstream> // подключаем файлы
#include <clocale>
#include <windows.h>

#include "stdio.h"
using namespace std;
int main()
{

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "rus");

    int n = 0;

    while (n != 101)
    {
        int ccount = 0;
        cout << "Введи номер предмета, по которому хочешь тренироваться\n 1.История\n 2.Философия\n 3.Английский \n для закрытия программы введи 101\n Для перевыбора предмета введи 100\n";
        string* opr = new string[50];

        string* pon = new string[50];
        string* dop = new string[50];
        string path = "D:\\моя папка\\институт\\впи\\dict\\tren_c++\\Debug\\";
        cin >> n;
        switch (n)
        {
        case 1:
            path += "hist.txt";
            break;
        case 2:

            path += "fil.txt";
            break;
        case 3:
            path += "eng.txt";
            break;
        case 101:
            continue;
            break;
        case 100:
            cout << "Вы еще не выбрали";
            continue;
        default:
            cout << "Произошла ошибка. Выберите снова";
            continue;
        }
        ifstream file(path); // файл из которого читаем (для линукс путь будет выглядеть по другому)
        int i = 0;
        while (getline(file, dop[i])) { // пока не достигнут конец файла класть очередную строку в переменную (s)
                cout << dop[i] << endl;
                i++;// выводим на экран
       // обязательно закрываем файл что бы не повредить его
          /*  try
            {
                using (StreamReader sr = new StreamReader(path))
                {
                    for (int i = 0; i < 50; i++)
                    {
                        string s = sr.ReadLine();
                        pon.Add(s.Split(";")[0]);
                        opr.Add(s.Split(";")[1].ToLower());

                    }

                }
            }

            while (n != 100)
            {
                Random rand = new Random();
                int r = rand.Next(0, 49);
                Console.WriteLine(opr[r]);
                string ans = Console.ReadLine().ToLower();
                if (ans == pon[r])
                {
                    ccount += 1;
                }
                else if (ans == "100")
                {
                    n = 100;
                    Console.WriteLine("Ваш счет: " + Convert.ToString(ccount));
                    Console.Clear();
                    continue;
                }
                else if (ans == "101") {
                    n = 101;
                    Console.WriteLine("Ваш счет: " + Convert.ToString(ccount));
                    break;
                }
                sum += ccount;

                Console.WriteLine("Ваш общий счет: " + Convert.ToString(ccount));
                Console.Clear();
            }

        }

        Console.WriteLine("Ваш общий счет: " + Convert.ToString(sum));
    }
    */


                file.close();
        }
        delete[] opr;

        delete[] pon;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
