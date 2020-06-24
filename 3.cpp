#include<iostream>

using namespace std;

 // 3 = 11(2)
 // 5 = 101(2)
 //11 xor 101
 // = 110(2) = 6

int main()
{
    int num1 = 0;
    int num2 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("%d\n", num1 ^ num2);

    return 0;
}
