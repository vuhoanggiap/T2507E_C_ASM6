#include <stdio.h>

int main (){
	int n;
	printf("nhap so phan tu n: ");
	scanf("%d",&n);
	if(n <= 0){
		printf("so ban nhap khong hop le!");
	}
	int taphop[n];
	int i = 0;
	for(;i < n;i++){
		printf("nhap so nguyen %d: ",i + 1);
		scanf("%d",&taphop[i]);
	}
	
	
	int dem = 0;
	int sdnn = 0;
	for(i = 0;i < n;i++){
		if(taphop[i] > 0){
			if(dem == 0 || taphop[i] < sdnn){
				dem++;
				sdnn = taphop[i];
			}
		}
	}
	if(dem >= 1){
		printf("so nguyen duong nho nhat la :%d !",sdnn);
	}else{
		printf("khong co so duong!");
	}
	return 0;
	
}
