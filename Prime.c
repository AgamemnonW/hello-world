/*满足下列条件的自然数称为超级素数:该数本身,所有数字之和,所有数字之积以及所有数字的平方和都是素数.例如113就是一个超级素数.求[100,9999]之内:(1)超级素数的个数.(2)所有超级素数之和.(3)最大的超级素数.*/
//2018/11/14 更新
#include <stdio.h> 
#include <stdbool.h>
int sum_bit(int num) {
  	int j;
	int a[10];
	int square_sum = 0;
	for(j = 0;j>=0;j++){
		a[j] = num % 10;
		square_sum = square_sum + a[j];
		num = num / 10;
		if (num == 0) break;
	}
  return square_sum;
}

int multi_bit(int num) {
  	int j;
	int a[10];
	int square_sum = 1;
	for(j = 0;j>=0;j++){
		a[j] = num % 10;
		square_sum = square_sum * a[j];
		num = num / 10;
		if (num == 0) break;
	}
  return square_sum;
}

int square_sum_bit(int num) {
	int j;
	int a[10];
	int square_sum = 0;
	for(j = 0;j>=0;j++){
		a[j] = num % 10;
		square_sum = square_sum + a[j] *a[j];
		num = num / 10;
		if (num == 0) break;
	}
  return square_sum;
}

bool isprime(int num) {
	int a=0;  
    int i = 0; 
    for(i=2;i<num;i++){
        if((num%i)==0) break;
    }
    if(i<num){
        return false; 
    }else{
    	return true;
	}
}

int main() {
	int num = 0;
	printf("����һ��������");
    scanf("%d",&num);
  if(isprime(num)&&isprime(sum_bit(num))&&isprime(multi_bit(num))&&isprime(square_sum_bit(num)))
  {
  	printf("�ǳ���������");
  }else{
  	printf("���ǳ���������");
  }
    //to do sth
    return 0;
}
