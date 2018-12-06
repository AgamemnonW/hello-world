//ç´ æ•°æ˜¯åªæœ‰1å’Œæœ¬èº«æ˜¯å› å­çš„æ•°
//2018/11/14 æ›´æ–°
#include <stdio.h>
int main(){
    int a=0;  
    int num=0; 
    int i = 0; 
    printf("ÊäÈëÒ»¸öÕûÊı£º");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if((num%i)==0) break;
    }
    if(i<num){
        printf("%d²»ÊÇËØÊı¡£\n", num);
    }else{
    	printf("%dÊÇËØÊı¡£\n", num);
	}
    return 0;
}
