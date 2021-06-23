#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "Select your symbol and press Enter ";
    char sy;
    int x = 0;
    int y = 0;
    char b = ' ';

    cin >> b;
    cout << "Use 'W' 'A' 'S' 'D' for moving symbol and press 'Q' for Exit " << endl;

    while (1) 
    {
        sy = _getch();
        if (sy == 'D' || sy == 'd')
        { 
            system("cls");
            x++;
            cout << string(y, '\n') << string(x, ' ') << b << '\b';
            
        }
        else if(sy == 'A' || sy == 'a')
        {
            system("cls");
            if (x != 0) {
                x--;
            }
            cout << string(y, '\n') << string(x, ' ') << b << '\b';
        }
        else if (sy == 'S' || sy == 's')
        {
            system("cls");
            y++;
            cout << string(y, '\n') << string(x, ' ') << b << '\b';
        }
        else if (sy == 'W' || sy == 'w')
        {
            system("cls");
            if (y != 0) {
                y--;
            }
            cout << string(y, '\n') << string(x, ' ') << b << '\b';
        }
        else if (sy == 'Q' || sy == 'q')
        {
            break;
        }
    }
    return 0;
}
