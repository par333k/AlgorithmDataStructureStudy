#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 1000

char** array;
int founded;

//순차탐색은 데이터 정렬 유무에 상관없이 가장 앞에 있는 원소부터 
//하나씩 확인해야 한다는 점에서 O(N)의 시간복잡도를 가진다

//int main(void) {
//	int n;
//	char* word;
//	word = malloc(sizeof(char) * LENGTH);
//	scanf("%d %s", &n, word);
//	array = (char**)malloc(sizeof(char*) * n);
//	for (int i = 0; i < n; i++) {
//		array[i] = malloc(sizeof(char) * LENGTH);
//		scanf("%s", array[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		if (!strcmp(array[i], word)) {
//			printf("%d번째 원소입니다. \n", i + 1);
//			founded = 1;
//		}
//	}
//	if (!founded) printf("원소를 찾을 수 없습니다.\n");
//	system("pause");
//	return 0;
//
//}