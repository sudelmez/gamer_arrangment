#include <stdio.h>
#include "degisken.c"

#include "axx.c"

void main(){
	
	printf("yarismaci sayisini giriniz:");
	scanf("%d",&n);
	printf("oyun sayisini giriniz:");
	scanf("%d",&m);
	sutun=m;
	satir=n;
	int yaris[n][m];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d. yarismacinin %d. oyun skoru:",i+1,j+1);
			scanf("%d",&yaris[i][j]);
		}
	}
	
	printf("***********************************\n");

	for(i=0;i<n;i++){
		printf("%d.\t\t",i+1);
		for(j=0;j<m;j++){
			printf("%d\t",yaris[i][j]);
		}
		printf("\n");
	}
	printf("***********************************\n");
	printf("TOPLAM OYUN SKORLARINI SIRALAMA\n");
	topla(yaris);
	
	return 1;
}
