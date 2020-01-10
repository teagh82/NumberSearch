#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
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

	printf("정수 개수 입력: ");
	scanf("%d", &n);

	printf("정수 집합 입력: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &l[i]);
		tree.insert(new BinaryNode(l[i]));
	}

	printf("예제 개수 입력: ");
	scanf("%d", &m);

	printf("예제: ");
	for (int i = 0; i < m; i++) {
		scanf("%d", &mm[i]);
		tree.search(mm[i]);
		printf("\n");
	}

	delete[]l;
	delete[]mm;

	system("pause");

}
