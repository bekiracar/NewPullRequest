#include <stdio.h>

int main()
{
    int sayi;
    printf("Kare alma programı\n");
    printf("Karesi alınacak sayıyı giriniz : ");
    scanf("%d",&sayi);
    sayi=sayi*sayi;
    printf("\nSonuç : %d",sayi);
    return 0;
}
