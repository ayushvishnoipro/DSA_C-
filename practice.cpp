#include <iostream>
using namespace std;

int main()
{
    int i = 4, *j, *k;
    j = &i;
    printf("%u\n", j);
    j = j + 1;
    printf("%u\n", j);
    j = j + 9;
    printf("%u\n", j);
    k = j + 3;
    printf("%u\n", k);
    return 0;
}