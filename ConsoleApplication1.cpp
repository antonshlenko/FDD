#include <cstdlib>
#include <iostream>
#include<cmath>

using namespace std;

#define ARGUMENT_STEP 0.1
#define PARAM_STEP 1



float y(float x, float A)
{
    return 2.2 * x - powf(A, x);
}


int main(int argc, char* argv[])
{

    // переменные для храненния максимального и минимального значения
    float max_arg, min_arg;
    float max_param, min_param;
    float max_func, min_func;

    float y_res = 0;

    // инициализация переменных

    max_func = 0;
    min_func = 1000000;


    // вывод аргумента, параметра и значение функции 
    // и поиск максимальных/минимальных значений

    for (float i = 0.5; i <= 2; i += ARGUMENT_STEP)
        for (float j = 1; j <= 3; j += PARAM_STEP)
        {
            y_res = y(i, j);
            cout << "ARG:" << i << " PARAM:" << j << " FUNC:" << y_res << endl;

            if (y_res > max_func)
            {
                max_arg = i;
                max_param = j;
                max_func = y_res;
            }

            if (y_res < min_func)
            {
                min_arg = i;
                min_param = j;
                min_func = y_res;
            }
        }

    // вывод результатов нахождения максимума и минимума

    cout << "Maximum:" << max_func << " ARG:" << max_arg << " PARAM:" << max_param << endl;
    cout << "Minimum" << min_func << " ARG:" << min_arg << " PARAM:" << min_param << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}


#include <iostream>
#include <ctime>
int* f(int* arr, int n) {
    int temp = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
    }
    return arr;
}

int main()
{
    using namespace std;
    srand(time(0));
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++)
        arr[i] = rand() % 20;

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    cout << endl;

    f(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    return 0;
}






#include <iostream>
using namespace std;

const int SIZE = 20;

void Set(int array[SIZE])
{
    for (int i = 0; i < SIZE; i++)
        array[i] = rand() % 101 - 100;
}

void PRINT(int array[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << '\t';
    }
    cout << endl;
}

int prostie_chisla(int array[SIZE])
{
    int counter = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 2; j <= SIZE / 2; j++)
        {
            if (array[i] % j == 0 && array[i] != j)
            {
                array[i] = 0;
                counter++;
                break;
            }
        }
        if (array[i] != 0)
        {
            return array[i];
        }
    }
}

int main()
{
    int a[SIZE];
    Set(a);
    PRINT(a);
    cout << " Rezultat : " << prostie_chisla(a) << endl;
}






