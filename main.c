#include <stdio.h>

//tinh tong tu 1 den n
int tinhTong(int n){
    int tong = 0;
    for(int i = 1; i<=n;i++){
        tong = tong + i;
    }
    return tong;
}
//1: Tính S(n) = 1 + 2 + 3 + … + n //tongBai1
//2: Tính S(n) = 1^2 + 2^2 + … + n^2 //tongBai2
//3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
//4: Tính S(n) = ½ + ¼ + … + 1/2n
//5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
int main() {
    int n;
    printf("Nhap so n=");
    scanf("%d",&n);
    printf("Tong tu 1 den %d la: %d",n, tinhTong(n));
    return 0;
}

