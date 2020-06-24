#include<iostream>

using namespace std;

int main()
{
    int a = 0,b = 0, c = 0;
    scanf("%d %d", &a, &b, &c);
    printf("%d ",a > b && a > c ? 1 : 0);
    printf("%d",a == b && b == c && c == a ? 1 : 0);

    return 0;
}
