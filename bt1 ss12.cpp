#include <stdio.h>
int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("nhap so thu nhat: ");
    scanf("%d", &x);
    
    printf("nhap so thu hai: ");
    scanf("%d", &y);
    int tong = tinhTong(x, y);
    printf("tong cua hai so la %d\n", tong);

    return 0;
}


