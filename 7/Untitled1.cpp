#include <stdio.h>
int main(void)
{
	int n, a, sum1;
	
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);
	a=1;
	sum1=0;
	
	while(a<=n){
		if(n>0){
			sum1+=a;
		}
		else
			break;
		a++;
	}
	printf("%d", a);
	return 0;
}
