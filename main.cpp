#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdlib.h>
#include <stdio.h>
#include "BinSrchTree.h"

int main()
{
	BinSrchTree tree;
	int n;
	int m;
	int* l = new int[50];
	int* mm = new int[50];

	printf("���� ���� �Է�: ");
	scanf("%d", &n);

	printf("���� ���� �Է�: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &l[i]);
		tree.insert(new BinaryNode(l[i]));
	}

	printf("���� ���� �Է�: ");
	scanf("%d", &m);

	printf("����: ");
	for (int i = 0; i < m; i++) {
		scanf("%d", &mm[i]);
		tree.search(mm[i]);
		printf("\n");
	}

	delete[]l;
	delete[]mm;

	system("pause");

}
