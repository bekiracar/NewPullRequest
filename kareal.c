#include <stdio.h>
// fonksiyon oluşturuldu
int kareAl(int a){ 
    return a*a;
}
int main()
{
    int sayi;
    printf("Kare alma programı\n");
    printf("Karesi alınacak sayıyı giriniz : ");
    scanf("%d",&sayi);
    int sonuc = kareAl(sayi);
    printf("\nSonuç : %d",sonuc);
    return 0;
}

