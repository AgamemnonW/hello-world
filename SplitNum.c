//输入整数，将每位数字打印出来（从左向右打印，空格区分）
//2018/11/14 更新
#include <stdio.h> 
int main() {
	int i,j;
	int a[10];
	scanf("%d",&i);
	for(j = 0;j>=0;j++){
		a[j] = i % 10;
		i = i / 10;
		if (i == 0) break;
	}
for (i = j;i >= 0;i--){
		printf("%d\t",a[i]);
	}
    //to do sth
    return 0;
}
