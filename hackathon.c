#include<stdio.h>

int main(){
	int arr[100];
	int choice;
	int n=0;
	
	while(1){
		printf("\nMENU\n");
		printf("1.nhap so phan tu va gia tri cua mang\n");
		printf("2.gia tri cac phan tu cua mang\n");
		printf("3.so luong cac so hoan hao\n");
		printf("4.gia tri nho thu 2 trong mang\n");
		printf("5.them phan tu vao mang\n");
		printf("6.xoa phan tu\n");
		printf("7.sap xep theo thu tu tang dan\n");
		printf("8.tim kiem phan tu\n");
		printf("9.sap xep mang va hien thi toan bo so le dung truoc va so chan dung sau\n");
		printf("10.kiem tra mang co phai tang dan hay khong\n");
		printf("11.thoat\n");
		scanf("%d",&choice);
		if(choice==1){
			printf("moi nhap so phan tu ");
			scanf("%d",&n);
			for(int i=0;i<n;i++){
				printf("moi ban nhap phan tu thu %d: ",i+1);
				scanf("%d",&arr[i]);
			}
		}else if(choice==2){
			for(int i =0;i<n;i++){
				printf("arr[%d] %d \n",i,arr[i]);
			}
		}else if(choice==3){
			int count = 0;
			int perfect_number;
            	
		}else if (choice == 4) {
            int min=32767, secondMin=32767;
            for (int i = 0; i < n; i++) {
                if (arr[i] < min) {
                    secondMin = min;
                    min = arr[i];
                } else if (arr[i] < secondMin && arr[i] != min) {
                    secondMin = arr[i];
                }
            }
            if (secondMin == 32767) {
                printf("khong co gia tri nho thu 2\n");
            } else {
                printf("gia tri nho thu 2 trong mang: %d\n", secondMin);
            }
        }else if (choice == 5) {
            int value, pos;
            printf("moi ban nhap gia tri can them: ");
            scanf("%d", &value);
            printf("moi ban nhap vi tri can them: ");
            scanf("%d", &pos);
            if (pos >= 0 && pos <= n) {
                int exit = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        exit = 1;
                        break;
                    }
                }
                if (!exit) {
                    for (int i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++;
                } else {
                    printf("phan tu da ton tai trong mang\n");
                }
            } else {
                printf("vi tri khong hop le\n");
            }
        } else if(choice==6){
			int index;
			printf("nhap vi tri can xoa ");
			scanf("%d",&index);
            for (int i = index; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
        }else if(choice==7){
        	for(int i =0;i<n-1;i++){
        		for(int j=0;j<n-i-1;j++){
					if(arr[j]>arr[j+1]){
						int temp =arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
		}else if (choice == 8) {
			int value;
            printf("Nhap gia tri can tim: ");
            scanf("%d", &value);
            int found = -1;
            for (int i = 0; i < n; i++) {
                if (arr[i] == value) {
                    found = i;
                    break;
                }
            }
            if (found != -1) {
                printf("Phan tu %d o vi tri index %d\n", value, found);
            } else {
                printf("Khong tim thay phan tu %d\n", value);
            }
        }else if(choice==9){
			int arrX[50], arrY[50];
                    int x=0, y=0;
                    for(int i=0; i<n; i++){
                        if(arr[i]%2!= 0){
                            arrX[x]=arr[i];
                            x++;
                        }else{
                            arrY[y]=arr[i];
                            y++;
                        }
                    }
                    for(int i=0; i< x; i++){
                        printf("%d  ", arrX[i]);
                    }
                    for(int i=0; i<y; i++){
                        printf("%d  ", arrY[i]);
                    }
		}else if (choice == 10) {
            int ascending = 1;
            for (int i = 0; i < n - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    ascending = 0;
                    break;
                }
            }
            if (ascending) {
                printf("mang tang dan\n");
            } else {
                printf("mang khong tang dan\n");
            }
        }else if (choice == 11) {
            printf("Chuong trinh ket thuc. Tam biet!\n");
            break;
        }else {
            printf("lua chon khong hop le\n");
        }
	}
}
