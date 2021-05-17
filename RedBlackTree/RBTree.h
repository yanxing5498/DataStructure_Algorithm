#pragma once
/***
�ѵ���Ҫ��ɾ���ڵ��ĵ���
*/
enum class Color
{
	RED,BLACK
};
class Node {
public:  
	int val;
	Color color;
	Node* left, * right, *parent;
	Node(int v) :val(v),color(Color::RED), left(nullptr), right(nullptr), parent(nullptr) {};
};
class RBTree {
protected: 

	Color getColor(Node* node);

	Node* findNode(int num);
	Node* findMaxNode(Node* node);			//�ҵ��ýڵ��£������˽ڵ㣩�����ڵ�

	void rotateLeft(Node* node);
	void rotateRight(Node* node);
	 
	void rebalanceAfterDelete(Node* node);
	void rebalanceAfterInsert(Node* node);
	 

	void inOrder(Node* node);				//������ʾ
public:
	Node* root;
	int size;

	RBTree():root(nullptr),size(0){}
	bool insert(int num);
	bool remove(int num);

	void printByInOrder();


	//int getBlackHeight(Node* node);
	//int getBlackHeightByRandom(Node* node); 
	//bool checkRule1(); //�׽ڵ�Ϊ��
	//bool checkRule2(Node* node); //û��˫��
	//bool checkRule3(Node* node);//�ȸ�
};


