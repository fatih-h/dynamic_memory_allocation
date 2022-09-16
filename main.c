#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int **ikiBoyutluDizi;
    int satirSayisi,sutunSayisi;
    int i,j;
    srand(time(NULL));
    printf("Satir sayisini giriniz:");
    scanf("%d",&satirSayisi);
    printf("Sutun sayisini giriniz:");
    scanf("%d",&sutunSayisi);

    //Dinamik sekilde dizi olusturma
    ikiBoyutluDizi = (int **)malloc(sizeof(int *) * satirSayisi);
    for(i=0;i<satirSayisi;i++){
        ikiBoyutluDizi[i] = (int *)malloc(sizeof(int) * sutunSayisi);
    }

    //Deger atama
    for(i=0; i<satirSayisi; i++){
        for(j=0; j<sutunSayisi; j++){
            ikiBoyutluDizi[i][j] = rand()%100;
        }
    }

    //Yazdirma kismi
    for(i=0; i<satirSayisi; i++){
        for(j=0; j<sutunSayisi; j++){
            printf("%d ",ikiBoyutluDizi[i][j]);
        }
        printf("\n");
    }
    free(ikiBoyutluDizi);



	return 0;
}