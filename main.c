#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    //klavyeden girilen ödev,quiz,vize ve final notlarına göre son notun belirleyen program.
    //Ödevin yüzdesi:20, quiz:%10, vize:%30,finall:%40
    float odev,quiz,vize,finall,son_not;
    printf("Lütfen gerekli değerleri doğru olarak giriniz!\n");
    printf("Ödev notunuzu giriniz!\n");
    scanf("%f",&odev);
    printf("Quiz notunuzu giriniz!\n");
    scanf("%f",&quiz);
    printf("Vize notunuzu giriniz!\n");
    scanf("%f",&vize);
    printf("Final notunuzu giriniz!\n");
    scanf("%f",&finall);
    son_not=(odev*0.2)+(quiz*0.1)+(vize*0.3)+(finall*0.4);
    printf("%.2f",son_not);
    return 0;
}
