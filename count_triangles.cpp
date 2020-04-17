#include <iostream>
using namespace std;
#include <math.h>

int rows, columns;
int calculate(int rows1, int columns1);
int result;

int main(int argc, char** argv)
{
    rows = columns = result = 0;
    do {
    cout << "Введіть кількість трикутників у верхньому ярусі: ";
    cin >> columns; }
    while (columns <= 0);
    do {
    cout << "Введіть кількість ярусів трикутника: ";
    cin >> rows; }
    while(rows <= 0);
    
    result = calculate(rows, columns);
    cout << "Результат: всього "<< result << " трикутників!\n";
    
    return 0;
}

int calculate(int rows1, int columns1)
{
    int sum0 = 0;
    for(int i = 1; i <= columns1; ++i) sum0 += i;
    return rows1*sum0;
}
