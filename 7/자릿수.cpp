#include <stdio.h>
int main(void)
{
	int n, a, b;
	
	printf("3�ڸ� ������ �Է��ϼ��� : ");
	scanf("%d", &n);
	
	if (n<100 || n>=1000)
		printf("3�ڸ� ������ �ƴմϴ�.");
	else{
		 a= n/100;
		 b= ((n%100)%10);
		 printf("���� �ڸ� ���� : %d\n", a);
		 printf("���� �ڸ� ���� : %d", b);
	}
	return 0;
}
