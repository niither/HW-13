#include <iostream>
using namespace std;

void swapNum(int* a, int* b);

int main()
{
    int a = 0;
    int b = 1;

    cout << a << " " << b << "\n";

    swapNum(&a, &b);

    cout << a << " " << b << "\n";
}

void swapNum(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}