#include <stdio.h>

int main (){
	int n,x = 0;
	printf("nhap so phan tu n: ");
	scanf("%d",&n);
	int taphop[n];
	
	for(int i = 0;i < n;i++){
		printf("nhap so nguyen %d: ",i + 1);
		scanf("%d",&taphop[i]);

	};
	printf("hay nhap so x: ");
	scanf("%d",&x);
	int tim = 0;
	for(int i = 0;i < n;i++){
		if(taphop[i] == x){
			tim += 1;
			break;
		}
	}
		
	if(tim >= 1){
		printf("so do co trong tap hop");
	}else{
		printf("so do khong co trong tap hop");
	};
	
}
