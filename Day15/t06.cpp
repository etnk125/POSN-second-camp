#include <iostream>
#include <stdio.h>
using namespace std;
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("\n1 %c %c", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n%d %c %c", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n ;
    cin >> n;
    towerOfHanoi(n, '1', '2', '3');
    return 0;
}
