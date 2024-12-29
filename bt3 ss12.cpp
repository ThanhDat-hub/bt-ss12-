#include <stdio.h>
int giaithua(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n * giaithua(n - 1); 
    }
}

int main() {
    int num;
    printf("nhap mot so nguyen ");
    scanf("%d", &num);
    if (num < 0) {
        printf("nhap lai\n");
    } else {
        printf("giai thua cua %d là: %d\n", num, giaithua(num));
    }

    return 0;
}

