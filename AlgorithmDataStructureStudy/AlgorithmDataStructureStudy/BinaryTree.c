#include <stdio.h>
#include <stdlib.h>

//트리는 나무의 형태를 뒤집은 것과 같은 자료구조, 이진트리는 최대 2개의 자식을 가질 수 있는 트리
//이진 트리는 많은 양의 노드를 낮은 높이에서 관리할 수 있다는 점에서 데이터 활용 효율성이 높다
//이진 트리는 포인터를 이용하여 구현

typedef struct {
	int data;
	struct Node* leftChild;
	struct Node* rightChild;
} Node;

Node* initNode(int data, Node* leftChild, Node* rightChild) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->leftChild = leftChild;
	node->rightChild = rightChild;
	return node;
}

//전위순회 1)자기 자신 출력 2) 왼쪽 자식 방문 3) 오른쪽 자식 방문 
void preorder(Node* root) {
	if (root) {
		printf("%d", root->data);
		preorder(root->leftChild);
		preorder(root->rightChild);
	}
}

//중위순회 1)왼쪽 자식 방문 2)자기 자신 출력 3)오른쪽 자식 방문
void inorder(Node* root) {
	if (root) {
		inorder(root->leftChild);
		printf("%d", root->data);
		inorder(root->rightChild);
	}
}

//후위순회 1)왼쪽 자식 방문 2)오른쪽 자식 방문 3)자기 자신 출력
void postorder(Node* root) {
	if (root) {
		postorder(root->leftChild);
		postorder(root->rightChild);
		printf("%d", root->data);
	}
}

int main(void) {
	Node* n7 = initNode(50, NULL, NULL);
	Node* n6 = initNode(37, NULL, NULL);
	Node* n5 = initNode(23, NULL, NULL);
	Node* n4 = initNode(5, NULL, NULL);
	Node* n3 = initNode(48, n6, n7);
	Node* n2 = initNode(17, n4, n5);
	Node* n1 = initNode(30, n2, n3);
	preorder(n1);
	printf("\n");
	inorder(n1);
	printf("\n");
	postorder(n1);
	system("pause");
	return 0;
}