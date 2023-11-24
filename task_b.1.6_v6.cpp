/*
6. Задано число n в формате signed short int. Вывести на экран значения 0-го,
2-го и 15-го битов представления в ЭВМ этого числа. Объяснить результат. Инвертировать биты 1, 15. 
Вывести и объяснить результат.
*/
// 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
// 1 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1
// 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 1

#include <iostream>
using namespace std;

int main()
{
    signed short int n;
    cin >> n;

    cout << (n & 1) << endl;
    cout << (n >> 2 & 1) << endl;
    cout << (n >> 15 & 1) << endl; 
    cout << (n ^ 2) << endl;
    cout << signed short int(n ^ (1 << 15)) << endl;
    return 0;
}



