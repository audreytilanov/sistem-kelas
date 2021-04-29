#include <stdio.h>

int main(){
	int arr[100];
	int i;
	
	for(i=1;i<=100;i++){
		printf("masukkan nilai array ke-%d =",i);
		scanf("%d", &arr);
	}
}
//testing
int status;
	int jabatan;
	int upah;
	int statusMhs;
	int statusPnt;
	
	printf("Masukkan status\n1.Mahasiswa\n2.Non Mahasiswa\n");
	scanf("%d",&status);
	
	printf("Pilih Salah Satu Komen Diatas");
	switch(status){
		case 1 :{
			statusMhs = 1;
			break;
		}
		case 2:{
			statusMhs = 2;
			break;
		}
		default:{
			printf("Inputan Status Salah\n");
			break;
		}
	}
	
	printf("Masukkan Jabatan\n1.Panitia\n2.Non Panitia\n");
	scanf("%d",&jabatan);
	
	printf("Pilih Salah Satu Komen Diatas");
	switch(jabatan){
		case 1 :{
			statusPnt = 1;
			break;
		}
		case 2:{
			statusPnt = 2;
			break;
		}
		default:{
			printf("Inputan Jabatan Salah\n");
			break;
		}
	}
	if(statusMhs == 1 && statusPnt == 1){
		upah = 100000;
	}else if(statusMhs == 1 && statusPnt == 2){
		upah = 20000;
	}else if(statusMhs == 2 && statusPnt == 1){
		upah = 70000;
    }else if(statusMhs == 2 && statusPnt == 2){
    	upah = 5000;
    }
    printf("%d", upah);
	return 0;
