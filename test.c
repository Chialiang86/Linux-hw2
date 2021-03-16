#include <stdio.h>
#include <string.h>

int cp(void *a, void *b)
{
    __extension__({
        return (*a) > (*b) ? 1 : ((*a) < (*b) ? -1 : 0);
    })
}
int main() {
    char c1 = '1', c2 = '2';
    int i1 = 1, i2 = 2;
    float f1 = 1f, f2 = 2f;
    double d1 = 1.0, d2 = 2.0;
    char *s1 = "1", *s2 = "2";
    printf("char : %d\n", cp(&c1, &c2));
    printf("char : %d\n", cp(&i1, &i2));
    printf("char : %d\n", cp(&f1, &f2));
    printf("char : %d\n", cp(&d1, &d2));
    printf("char : %d\n", cp(&s1, &s2));
    return 0;
}
