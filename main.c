#include <stdio.h>

//tinh tong tu 1 den n
int tinhTong(int n){
    int tong = 0;
    for(int i = 1; i<=n;i++){
        tong = tong + i;
    }
    return tong;
}

int main() {
    int n;
    printf("Nhap so n=");
    scanf("%d",&n);
    printf("Tong tu 1 den %d la: %d",n, tinhTong(n));
    return 0;
}

