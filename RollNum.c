//回文数：正读与反读相等的数
//2018/11/14 更新
int main() {
	int i,j,k;
	int a[10];
	k = 0;
	scanf("%d",&i);
	for(j = 0;j>=0;j++){
		a[j] = i % 10;
		i = i / 10;
		if (i == 0) break;
	}
for (i = j;i >= 0;i--){
		if (a[i] != a[k]) break;
		k++;
	}
	if (i>=0){
		printf("���ǻ�������");
	}else{
		printf("�ǻ�������");
	}
    //to do sth
    return 0;
}
