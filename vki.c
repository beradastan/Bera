#include <stdio.h>
int yas , kilo  ;
float boy , vki ;
int main (){
    printf("adayin yasini giriniz \n ");
    scanf("%d" , &yas);
    printf("adayin metre cinsinden boyunu giriniz \n ");
    scanf("%f" , &boy );
    printf("adayin kilogram cinsinden kilosunu giriniz \n ");
    scanf("%d" , &kilo);
    
    vki=kilo/(boy*boy);
    if (13<=yas && yas<=17  ) {
        if (18.50<=vki && vki<=24.99) {
            printf("aday kabul edilmistir");
        }
        else {
            printf("aday vki yetersizliginden kabul edilmemistir");
        }
    }
    else {
        printf("aday yas yetersizliginden kabul edilmemistir");
    
    }

    return 0;
}