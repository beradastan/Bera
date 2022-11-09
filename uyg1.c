#include <stdio.h>
int main () {
int k , n ;
float sonuc ;
printf ("sayi giriniz \n");
scanf ("%d" , &n);
for (k=1 , sonuc=0 ; k<=n ; k++);
    sonuc += (k*k+1.23)/(k-0.25);
printf ("%f" , sonuc);
return 0 ;    
}