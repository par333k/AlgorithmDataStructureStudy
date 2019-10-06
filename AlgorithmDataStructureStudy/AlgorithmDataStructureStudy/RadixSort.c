#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000


// 기수 정렬(Radix Sort)는 자릿수를 기준으로 차례대로 데이터를 정렬하는 알고리즘
// 기수 정렬은 시간 복잡도가 O(DN)인 정렬 알고리즘입니다.
// 기수 정렬은 계수 정렬보다 약간 더 느리지만, 숫자가 매우 큰 상황에서도 사용할 수 있습니다.

void radixSort(int* a, int n) {
	int res[MAX], maxValue = 0;
	int exp = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] > maxValue) maxValue = a[i];
	}

	while (maxValue / exp > 0) { // 1의 자리부터 계산
		int bucket[10] = { 0 };
		for (int i = 0; i < n; i++) bucket[a[i] / exp % 10]++; // 자릿수 배열 처리
		for (int i = 1; i < 10; i++) bucket[i] += bucket[i - 1]; // 누적 계산
		for (int i = n - 1; i >= 0; i--) { // 같은 자릿수 끼리는 순서를 유지
			res[--bucket[a[i] / exp % 10]] = a[i];
		}
		for (int i = 0; i < n; i++) a[i] = res[i]; // 기본 배열 갱신
		exp *= 10;
	}
}

int main(void) {
	int a[MAX];
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	radixSort(a, n);
	for (i = 0; i < n; i++) {
		printf("%d", a[i]);
	}
	system("pause");
}