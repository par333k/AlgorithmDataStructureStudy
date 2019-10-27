#include <stdio.h>
#include <stdlib.h>


//��������Ʈ���� �Ϲ� �迭���� ���⵵�� �������� �ʴ´� O(N)
//��������Ʈ���� ������ ���־�� ȿ�����̴� O(logN)
//typedef struct {
//	int data;
//	struct Node* leftChild;
//	struct Node* rightChild;
//} Node;
//
//Node* insertNode(Node* root, int data) {
//	if (root == NULL) {
//		root = (Node*)malloc(sizeof(Node));
//		root->leftChild = root->rightChild = NULL;
//		root->data = data;
//		return root;
//	}
//	else {
//		if (root->data > data) {
//			root->leftChild = insertNode(root->leftChild, data);
//		}
//		else {
//			root->rightChild = insertNode(root->rightChild, data);
//		}
//	}
//	return root;
//}

//Node* searchNode(Node* root, int data) {
//	if (root == NULL) return NULL;
//	if (root->data == data) return root;
//	else if (root->data > data) return searchNode(root->leftChild, data);
//	else return searchNode(root->rightChild, data);
//}
//
//Node* findMinNode(Node* root) {
//	Node* node = root;
//	while (node->leftChild != NULL) {
//		node = node->leftChild;
//	}
//	return node;
//}
//
//Node* deleteNode(Node* root, int data) {
//	//������ ��� ã�� 
//	Node* node = NULL;
//	if (root == NULL) return NULL;  // ��ã���� NULL ��ȯ
//	if (root->data > data) root->leftChild = deleteNode(root->leftChild, data); //ã���� �ϴ� ��庸�� ���� ��尡 ũ�� ���� �ڽĳ���
//	else if (root->data < data) root->rightChild = deleteNode(root->rightChild, data); //ã���� �ϴ� ��庸�� ���� ��尡 ������ ������ �ڽĳ���
//	else {	// ������ ��带 ã���� ��� 
//		if (root->leftChild != NULL && root->rightChild != NULL) { // �ڽ��� �� �� ������ ���
//			node = findMinNode(root->rightChild); // ������ ����߿� ���� ������� = �ڱ⺸�� ū ����� �ٷ� �������
//			root->data = node->data; // �ڱ� ��带 �ڱ⺸�� ū ����� �ٷ� �������� �ٲ�ġ��
//			root->rightChild = deleteNode(root->rightChild, node->data); // ������ ��带 ���� 
//		}
//		else {//�ڽ��� �Ѱ� �����϶�
//			node = (root->leftChild != NULL) ? root->leftChild : root->rightChild; //���� �ڽ��� �����Ѵٸ� ��忡 ���, �ƴ϶�� ������ �ڽ��� ��´�
//			free(root); // �ڱ� �ڽ� ��� �Ҵ� ����
//			return node; // �ش� �ڽĳ�尡 ��Ʈ��带 ��ü
//		}
//	}
//	return root;
//}
//
//void preorder2(Node* root) {
//	if (root == NULL) return;
//	printf("%d ", root->data);
//	preorder2(root->leftChild);
//	preorder2(root->rightChild);
//}
//
//int main(void) {
//	Node* root = NULL;
//	root = insertNode(root, 30);
//	root = insertNode(root, 17);
//	root = insertNode(root, 48);
//	root = insertNode(root, 5);
//	root = insertNode(root, 23);
//	root = insertNode(root, 37);
//	root = insertNode(root, 50);
//	root = deleteNode(root, 30);
//	preorder2(root);
//	system("pause");
//	return 0;
//}