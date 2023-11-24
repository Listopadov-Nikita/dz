/*
Выполнить задание без хранения последовательности значений.

Вводится последовательность целых чисел. Определить количество элементов внаиболее 
длинной подпоследовательности подряд идущих чисел, представляющих собой степени двойки
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, x1, num = 1, num_max = 0;
    cin >> x;
    if (x)
    {
        while (cin >> x1)
        {
            if (2 * x == x1)
                num++;
            else
                num = 1;
            if (num > num_max)
                num_max = num;
            x = x1;
        }
    }
    cout << num_max;
    return 0;
}
