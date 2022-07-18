// Implementation in
// C Programming Langauge
#include <stdio.h>
int main()
{
    int a=5, b=4, c=3;
    a = b + c;
    c = a - b;
    b = a + c;
    printf("%d", a+b+c);
    return 0;
}
