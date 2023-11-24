/*
Выполнить задание без хранения последовательности значений 
Задано натуральное число k. Определить k-ю цифру последовательности:

10111213...9899, в которой выписаны подряд все двузначные числа;
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, k, num = 0;
    cin >> k;
    for(int i = 10; i < 100; i++)
    {
        if (k == 1)
        {
            num = i / 10;
            break;
        } 
        else if (k == 2)
        {
            num = i % 10;
            break;
        }
        else
            k -= 2;
    }
    cout << num;
    return 0;
}
