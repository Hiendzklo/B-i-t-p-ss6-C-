#include <stdio.h>

int main(){
	int number;
	int eventCount =0;
	int oddCount=0;
	printf("nhap 5 so nguyen:\n");
	
	for(int i=1;i<=5;i++){
		printf("nhap so nguyen thu %d:",i);
		scanf("%d",&number);
		
		if(number%2==0){
			eventCount ++;
		}
		else{
			oddCount ++;
		}
	}
	printf("so luong so chan la:%d\n",eventCount);
	printf("so luong so le la:%d\n",oddCount);
	
	return 0;	
}
