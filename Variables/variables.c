#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int i2;
    double d2;
    char s2[100]; // this is not scalable for input of unknown size

    // Read inputs from stdin(scanf)
    scanf("%d", &i2);
    scanf("%lf", &d2);
    scanf("%*[\n] %[^\n]", s2);

    // Print outputs to stdout(printf)
    printf("%d\n", i + i2);
    printf("%0.1lf\n", d + d2);
    printf("%s%s", s, s2);

    return 0;