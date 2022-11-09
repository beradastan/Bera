#include <stdio.h>
int ales , yd , agno , puan ;
int main ()
{
    printf("Ales puanini giriniz \n ");
    scanf("%d" , &ales );  
    printf("Yabanci dil puanini giriniz \n ");
    scanf("%d" , &yd );    
    printf("Mezuniyet ortalamasini giriniz \n ");
    scanf("%d" , &agno );

    puan= ales*0.5 + yd*0.25 + agno*0.25 ;
    
    if(puan >= 60 ) {
        printf("siralamaya girebilir");
    }
    else {
        printf("siralamaya giremez");
    }

    return 0;
}   

