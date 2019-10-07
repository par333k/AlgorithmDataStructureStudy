#include <stdio.h>
#include <stdlib.h>

//Ʈ���� ������ ���¸� ������ �Ͱ� ���� �ڷᱸ��, ����Ʈ���� �ִ� 2���� �ڽ��� ���� �� �ִ� Ʈ��
//���� Ʈ���� ���� ���� ��带 ���� ���̿��� ������ �� �ִٴ� ������ ������ Ȱ�� ȿ������ ����
//���� Ʈ���� �����͸� �̿��Ͽ� ����

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

//������ȸ 1)�ڱ� �ڽ� ��� 2) ���� �ڽ� �湮 3) ������ �ڽ� �湮 
void preorder(Node* root) {
	if (root) {
		printf("%d", root->data);
		preorder(root->leftChild);
		preorder(root->rightChild);
	}
}

//������ȸ 1)���� �ڽ� �湮 2)�ڱ� �ڽ� ��� 3)������ �ڽ� �湮
void inorder(Node* root) {
	if (root) {
		inorder(root->leftChild);
		printf("%d", root->data);
		inorder(root->rightChild);
	}
}

//������ȸ 1)���� �ڽ� �湮 2)������ �ڽ� �湮 3)�ڱ� �ڽ� ���
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