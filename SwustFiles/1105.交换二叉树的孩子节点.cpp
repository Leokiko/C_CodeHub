// 题目描述
// 编程程序实现将二叉树中所有结点的左右孩子互换。
// 输入
// 二叉树的先序序列（输入先序序列建立二叉树）。
// 输出
// 第一行为交换后的二叉树的中序序列
// 第二行为交换后的二叉树的先序序列

#include <iostream>
using namespace std;

typedef struct BiTNode {
    char            data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void CreateBiTree(BiTree& T) {
    char ch;
    cin >> ch;
    if (ch == '#') {
        T = NULL;
    } else {
        T       = new BiTNode;
        T->data = ch;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
}

void InOrderTraverse(BiTree T) {
    if (T) {
        InOrderTraverse(T->lchild);
        cout << T->data;
        InOrderTraverse(T->rchild);
    }
}

void PreOrderTraverse(BiTree T) {
    if (T) {
        cout << T->data;
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}

void Swap(BiTree& T) {
    if (T) {
        BiTree temp = T->lchild;
        T->lchild   = T->rchild;
        T->rchild   = temp;
        Swap(T->lchild);
        Swap(T->rchild);
    }
}

int main() {
    BiTree T;
    CreateBiTree(T);
    Swap(T);
    InOrderTraverse(T);
    cout << endl;
    PreOrderTraverse(T);
    return 0;
}
