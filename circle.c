#include <stdio.h>

double area(int r) {
    return 3.14 * r * r;
}


double perimeter(int r) {
    return 2 * 3.14 * r;
}

int main() {
    int r;
    printf("Enter the radius: ");
    scanf("%d", &r);

    printf("The perimeter = %.2lf and area = %.2lf\n", perimeter(r), area(r));

    return 0;
}
