#include <stdio.h>

int main() {
    // Khai báo
    int arr[100];
    int n = 0, i, position, value, choice;

    // Menu
    do {
        printf("\nMENU\n");
        printf("1. Nhap phan tu \n");
        printf("2. Hien thi mang da nhap\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban la: ");
        scanf("%d", &choice); 

        switch (choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n); 
                if (n > 100 || n < 0) {
                    printf("Khong hop le \n");
                    n = 0; 
                    break;
                }
                for (i = 0; i < n; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Mang da nhap la: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Nhap phan tu muon them: ");
                scanf("%d", &value);
                printf("Nhap chi so phan tu muon them (0 den %d): ", n);
                scanf("%d", &position);

                // Kiem tra chi so
                if (position >= 0 && position <= n) {
                    // Chen phan tu
                    for (i = n; i > position; i--) {
                        arr[i] = arr[i - 1]; // Dich cho trong
                    }
                    arr[position] = value; // Them moi
                    n++;
                    printf("Mang sau khi them phan tu: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Khong hop le \n");
                }
                break;

            case 4:
                printf("Nhap chi so muon sua (0 den %d): ", n - 1);
                scanf("%d", &position);

                // Kiem tra vi tri 
                if (position >= 0 && position < n) {
                    printf("Nhap gia tri muon thay doi: ");
                    scanf("%d", &value);
                    arr[position] = value;
                    printf("Mang moi la : ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Khong hop le \n");
                }
                break;

            case 5:
                printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
                scanf("%d", &position);
                // Kiem tra
                if (position >= 0 && position < n) {
                    // Dich cho trong
                    for (i = position; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--; // Giam phan tu
                    printf("Mang moi la: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Khong hop le \n");
                }
                break;

            case 6:
                printf("good bye \n");
                break;

            default:
                printf("Khong hop le \n");
        }
    } while (choice != 6);

    return 0;
}
