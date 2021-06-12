#include <iostream>
#include <string>
using namespace std;

void a1()
{
    string s(10, '*');
    int a; int b = 0, g = 9; int b1 = 8, g1 = 1; int b2 = 0, g2 = 9; int b3 = 1, g3 = 8;
    int b4 = 0, g4 = 8,h4 = 0;
    int b5 = 3, g5 = 2, h5 = 3;
    int b6 = 8, g6 = 0,s6 = 0, b7 = 4, g7 = 4;
    int b8 = 8, g8 = 0, s8 = 0, b9 = 4, g9 = 4;
    cout << "Введите номер фигуры 1-10:  ";
    cin >> a;
    switch (a)
    {
    case 1:
        for (int i = 0; i < 9; i++)
        {
            string f(b++, ' ');
            string z(g--, '*');
            cout <<'*'<<f<<z<<endl;
        }

        cout << s << endl;
        break;



    case 2:
        cout << s << endl;
        for (int i = 0; i < 9; i++)
        {
            string f2(b1--, ' ');
            string z2(g1++, '*');
            cout << z2 << f2 << '*' << endl;
        }
        break;

    case 9:

        for (int i = 0; i < 9; i++)
        {
            string f3(b2++, ' ');
            string z3(g2--, '*');
            cout << z3 << f3 << '*' << endl;
        }
        cout << s << endl;
        break;

    case 10:
        
        cout << s << endl;
        for (int i = 0; i < 9; i++)
        {
            string f(g3--, ' ');
            string z(b3++, '*');
            cout << '*' << f << z << endl;
        }
        break;
    case 3:

        for (int i = 0; i < 4; i++)
        {
            
            string z1(h4++, ' ');
            string f(g4, '*');
            string z(b4++, ' ');
            cout << '*' <<z1<< f << z <<'*'<< endl;
            g4 = g4 - 2;
        }
        for (int i = 0; i < 4; i++)
        {
            string f12(8, ' ');
            cout << '*' << f12 <<'*' << endl;
        }
        cout << s << endl;
        break;
    
    case 4:
        cout << s << endl;
        for (int i = 0; i < 4; i++)
        {
            string f12(8, ' ');
            cout << '*' << f12 << '*' << endl;
        }
        
        for (int i = 0; i < 4; i++)
        {

            string z1(h5--, ' ');
            string f(g5, '*');
            string z(b5--, ' ');
            cout << '*' << z1 << f << z << '*' << endl;
            g5 = g5 + 2;
        }
        break;
    case 5:
        for (int i = 0; i < 4; i++)
        {

            string z1(h4++, ' ');
            string f(g4, '*');
            string z(b4++, ' ');
            cout << '*' << z1 << f << z << '*' << endl;
            g4 = g4 - 2;
        }

        for (int b = 0; b < 4; b++)
        {

            string z1(h5--, ' ');
            string f(g5, '*');
            string z(b5--, ' ');
            cout << '*' << z1 << f << z << '*' << endl;
            g5 = g5 + 2;
            
        }
        break;
    case 6:
        cout<<s<<endl;
       
        for (int i = 0; i < 4; i++)
        {
            string f(g6++, '*');
            string z(b6--, ' ');
            cout << '*' << f << z << '*' << endl;
        }
        for (int i = 0; i < 5; i++)
        {
            string f(g7--, '*');
            string z(b7++, ' ');
            cout << '*' << f << z << '*' << endl;
        }
        cout << s << endl;
        break;
    case 7:
        
        cout << "**********" << endl;
        cout << "*        *" << endl;
        cout << "*       **" << endl;
        cout << "*      ***" << endl;
        cout << "*     ****" << endl;
        cout << "*    *****" << endl;
        cout << "*     ****" << endl;
        cout << "*      ***" << endl;    
        cout << "*       **" << endl;
        cout << "*        *" << endl;
        cout << "**********" << endl;
        break;
    case 8:

        cout << "**********" << endl;
        cout << "*        *" << endl;
        cout << "**      **" << endl;
        cout << "***    ***" << endl;
        cout << "****  ****" << endl;
        cout << "**********" << endl;
        cout << "****  ****" << endl;
        cout << "***    ***" << endl;
        cout << "**      **" << endl;
        cout << "*        *" << endl;
        cout << "**********" << endl;
    }   
  
}
    

void a2()
{
    int number, cp, n = 0, s = 0, c = 0;

    cout << "Введите число: "; cin >> number;
    cp = number;

    while (number)
    {
        if (number % 10 == 0)
            c++;
        number /= 10;
    }
    cout << "Кол-во нулей: " << c;

    for (n = 0; cp > 0; n++)
    {
        s += cp % 10;
        cp /= 10;
    }
    cout << "\nКол-во цифр = " << n << " \nСумма = " << s << "\nAverage = " << (double)s / n << "\n";

    
}

void a3()
{

    
        setlocale(LC_CTYPE, ".1251");
        int h, a, w;
        cout << "Введите высоту шахматной доски: ";cin >> h;
        cout << "Введите ширину шахматной доски:  ";cin >> w;
        cout << "Введите величину ячейки шахматной доски: ";cin >> a;
        for (int i = 0; i < h; i++)
        {
            for (int jj = 0; jj < a; jj++)
            {
                for (int j = 0; j < w; j++)
                {
                    for (int ii = 0; ii < a; ii++)
                    {
                        ((i + j) % 2) ? (cout << '-') : (cout << '*');
                    }
                }
                cout << '\n';
            }
        }
        cout << "\n\n\n";
    
}


void main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int f;
    do {
        cout << "1 - 3   >>> "; cin >> f;
        switch (f)
        {
        case 1:
            a1();
            break;
        case 2:
            a2();
            break;
        case 3:
            a3();
            break;
        
        }
    } while (f != 0);
}
