
int sirala(int dizi[], int boyut){
	int i,j;
	int temp;
	for(i=0;i<boyut;i++){
		for(j=i+1;j<boyut;j++){
			if(dizi[i]<dizi[j]){
				temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
			}
		}
	}

	for(i=0;i<boyut;i++){
		printf("%d\n",dizi[i]);
	}
	return 0;
}

int topla (int dizi[satir][sutun]){
	int i,j;
	int temp;
	int toplam;
	int total[satir];
	for(i=0;i<satir;i++){
		toplam=0;
		for(j=0;j<m;j++){
			toplam+=dizi[i][j];
		}
		total[i]=toplam;
	}
	
	sirala(total,satir);
	return 1;
}
