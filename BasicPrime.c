//素数是只有1和本身是因子的数
//2018/11/14 更新
#include <stdio.h>
int main(){
    int a=0;  
    int num=0; 
    int i = 0; 
    printf("����һ��������");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if((num%i)==0) break;
    }
    if(i<num){
        printf("%d����������\n", num);
    }else{
    	printf("%d��������\n", num);
	}
    return 0;
}
