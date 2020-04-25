#include<stdio.h>
#include<string.h>

int main (){
	long int num[10];
	int p[10];
	int j;
	int i;
	
	FILE *file1;
	FILE *file2;
	
	file1 = fopen("ogrenci.txt", "w+");
	file2 = fopen("yıgılma.txt", "w");
	
	if(file1 == NULL || file2 == NULL){
		printf("Dosya acilamadi!!");
		return 1;
	}

	printf("sirasiyla ogr no ve  giriniz:\n");

		for(i = 0 ; i < 10 ; i++){
			scanf("%d %d", &num[i] , &p[i]);
			fprintf(file1, "%d %d \n", num[i], p[i]);
   			}

   			int tekrarlayan;
   			int sayac; 
    		int tekrarAdet = 1;

   			for(i=0; i<10; i++){ 
        		sayac = 0;
        		for( j=i; j<=10; j++){
           		 	if(p[i] == p[j])
              			sayac++;
               }
		        if(sayac > tekrarAdet)
		            tekrarAdet = sayac;
    		}

    	tekrarlayan=p[sayac];
		fprintf(file2 , "Bu sınıfta, yığılmanın olduğu not %d dür. (%d tane)\n" , tekrarlayan , tekrarAdet);

		for(i=0;i<10;i++){

			if(p[i]==tekrarlayan)
				fprintf(file2, "%d %d \n", num[i] , p[i]);

		}
		
   	fclose (file1);
  	fclose (file2);

   	return 0;
}
