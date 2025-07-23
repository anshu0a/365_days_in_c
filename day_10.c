// Input: Lower = 100, Upper = 999
// Output: All 3-digit Armstrong numbers
// An Armstrong number is a number equal to the sum of the cubes of its digits
// Example: 153 = 1^3 + 5^3 + 3^3

#include <stdio.h>

int chk(int m) {
    int f = m;
    int sum = 0;
    if (m <= 0) return 0;

    while (f > 0) {
        int digit = f % 10;
        sum += digit * digit * digit;
        f /= 10;
    }

    return sum == m;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (chk(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
