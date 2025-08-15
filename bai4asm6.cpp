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
	
	int tim = 0;
	for(i = n; i > 0;i--){
		if(taphop[i-1] % 2 != 0){
			tim++;
			printf("so le gan nhat la: %d",taphop[i-1]);
			break;
		}
	};
	if(tim == 0){
		printf("khong co so le nao trong mang ca!");
	};
	return 0;
	
}
