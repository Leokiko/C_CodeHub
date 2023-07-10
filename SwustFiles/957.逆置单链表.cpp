#include <iostream>
using namespace std;

// 定义链表结点
struct lb {
    char data;
    lb *next;
};

int main() {
    // 建立长度为n的单链表，然后将其数据元素逆置，即第1个元素变为最后一个元素，第2个元素变为倒数第2个元素，以此类推，最后一个元素变为第1个元素。（处理的数据类型为字符型。必须使用链表完成。）
    int n;
    cin >> n;
    lb *head, *p, *q;
    head = new lb;
    head->next = NULL;
    p = head;
    for (int i = 0; i < n; i++) {
        q = new lb;
        cin >> q->data;
        q->next = NULL;
        p->next = q;
        p = q;
    }
    p = head->next;
    q = p->next;
    p->next = NULL;
    while (q != NULL) {
        lb *r;
        r = q->next;
        q->next = p;
        p = q;
        q = r;
    }
    head->next = p;
    p = head->next;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}
