#include <stdio.h>
#include <stdlib.h>


//편향이진트리는 일반 배열보다 복잡도가 개선되지 않는다 O(N)
//완전이진트리를 유지할 수있어야 효과적이다 O(logN)
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
//	//삭제할 노드 찾기 
//	Node* node = NULL;
//	if (root == NULL) return NULL;  // 못찾으면 NULL 반환
//	if (root->data > data) root->leftChild = deleteNode(root->leftChild, data); //찾고자 하는 노드보다 현재 노드가 크면 왼쪽 자식노드로
//	else if (root->data < data) root->rightChild = deleteNode(root->rightChild, data); //찾고자 하는 노드보다 현재 노드가 작으면 오른쪽 자식노드로
//	else {	// 삭제할 노드를 찾았을 경우 
//		if (root->leftChild != NULL && root->rightChild != NULL) { // 자식이 둘 다 존재할 경우
//			node = findMinNode(root->rightChild); // 오른쪽 노드중에 가장 작은노드 = 자기보다 큰 노드중 바로 다음노드
//			root->data = node->data; // 자기 노드를 자기보다 큰 노드중 바로 다음노드로 바꿔치기
//			root->rightChild = deleteNode(root->rightChild, node->data); // 삭제할 노드를 삭제 
//		}
//		else {//자식이 한개 이하일때
//			node = (root->leftChild != NULL) ? root->leftChild : root->rightChild; //왼쪽 자식이 존재한다면 노드에 담고, 아니라면 오른쪽 자식을 담는다
//			free(root); // 자기 자신 노드 할당 해제
//			return node; // 해당 자식노드가 루트노드를 대체
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