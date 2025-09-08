#include <iostream>
#include <cmath>
using namespace std;

int findMax(int num1, int num2, int num3)
{
    int max = 0;
    if ((num1 > num2) && (num1 > num3))
        max = num1;
    if ((num2 > num1) && (num2 > num3))
        max = num2;
    if ((num3 > num1) && (num3 > num2))
        max = num3;
    return max;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << findMax(x, y, z) << endl;
    return 0;
}
