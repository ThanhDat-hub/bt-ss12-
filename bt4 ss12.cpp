#include <stdio.h>
int findMax(int arr[], int size) {
    int max = arr[0];  
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    
    return max;
}

int main() {
    int n;
    printf("nhap so luong cua mang: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("kich thuoc cua mang lon hon 0).\n");
        return 0;
    }

    int arr[n]; 
    printf("nhap cac phan tu trong mang\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("so lon nhat trong mang: %d\n", findMax(arr, n));

    return 0;
}

