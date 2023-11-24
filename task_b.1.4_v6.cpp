/*
Поле шахматной доски определяется парой натуральных чисел, каждое из которых не превосходит 8: первое – номер вертикали, второе – номер горизонтали.
Заданы натуральные числа k, l, m, n.

Определить, угрожает ли одна фигура другой. В отсутствии угрозы выяснить
существует ли ход какой-либо из фигур после которого угроза появляется.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double xl, yl, xf, yf;
    cout << "k l  m n" << endl;
    cin >> xl >> yl >> xf >> yf;
    if (xl == xf || yl == yf)
        cout << "lad'ya ugrozhaet ferzyu\n";
    else
    {
        cout << "lad'ya ne ugrozhaet ferzyu\n";
        cout << "hod lad'i: " << xl << ' ' << yl << " -> " << xf << ' ' << yl << endl;
    }
    if (abs(xl - xf) == abs(yl - yf) || xl == xf || yl == yf)
        cout << "ferz' ugrozhaet lad'e\n";
    else
    {
        cout << "ferz' ne ugrozhaet lad'e\n";
        cout << "hod ferzhya: " << xf << ' ' << yf << " -> " << xf << ' ' << yl << endl;
    }
    return 0;
}