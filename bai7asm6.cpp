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
	int a = taphop[0],tong = taphop[0];
	for(int i = 0;i < n - 1;i++){
		if(taphop[i + 1] == taphop[i] + 1){
			tong += taphop[i + 1];
		}else{
			tong = taphop[i + 1];
		}
		if(tong > a){
			a = tong;
		}
		
		
	}
	printf("day so lien tiep co tong lon nhat la la %d",a);
	
	
	return 0;
	
}
