#include <stdio.h>
int main(void) {

	char letter;

		printf("���ĺ� ���ڸ� �Է��ϼ��� : ");
		scanf("%c", &letter);

		if (letter <= 90)
			letter = letter - 'A' + 'a';

		else
			letter = letter - 'a' + 'A';

		printf("��ȯ�� ���ڴ� %c�Դϴ�.\n", letter);
	return 0;
}
