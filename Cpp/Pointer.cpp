#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a, int *b)
{
    int sum, diff;

    sum = *a + *b;
    cout << sum << endl;

    diff = *a - *b;
    diff = abs(diff);
    cout << diff << endl;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    //printf("%d\n%d", a, b);

    return 0;
}