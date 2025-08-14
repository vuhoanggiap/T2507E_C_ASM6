#include <stdio.h>

int main (){
	int n;
	printf("nhap so phan tu n:");
	scanf("%d",&n);
	int taphop[n];
	int dem = 0,tong = 0;
	for(int i = 0;i < n;i++){
		printf("nhap so nguyen %d: ",i + 1);
		scanf("%d",&taphop[i]);
		if(taphop[i] % 2 != 0){
			tong += taphop[i];
			dem++;
		};
		
	};
	
	int tbc = tong / dem;
	printf("trung binh cong cac so le duoi n la: %d",tbc);
}
