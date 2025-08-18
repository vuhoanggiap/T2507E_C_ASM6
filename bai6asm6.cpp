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
	int dem = 1,a = 1;
	for(int i = 0;i < n - 1;i++){
		if(taphop[i + 1] == taphop[i] + 1){
			dem++;
			if(dem > a){
				a = dem;	
			}
			
		}else{
			dem = 1;
		};
	}
	printf("day so co nhieu so lien tiep nhat co %d so",a);
	
	
	return 0;
	
}
