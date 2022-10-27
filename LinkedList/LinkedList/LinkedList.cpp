#include <stdio.h>
#include <stdlib.h>

typedef struct listNode {
    int data[10];
    struct listNode* link;
} listNode;

typedef struct {
    listNode* head;
} hNode;

hNode createLinkedList(void) {
    hNode* H;
    H = (hNode*)malloc(sizeof(hNode*));
    H->head = NULL;
    return head;
}

void addNode(hNode* H, int x) {
    listNode* nNode;
    listNode* lastNode;
    nNode = (listNode*)malloc(sizeof(listNode));
    nNode->data = x;
    nNode->link = NULL;

    if (H->head == NULL) {
        H->head = wNode;
        return;
    }

    lastNode = H->head;
    while (lastNode->link != NULL) lastNode = lastNode->link;
    lastNode->link = nNode;
}

/*
#include <stdio.h>
#include <stdlib.h>  // mallac과 free함수 사용

struct NODE {            //노드 구조체
    struct NODE* next;   //주소 저장 포인터
    int data;             // 데이터 저장
};

int main()
{
    struct NODE *head = malloc(sizeof(struct NODE));


    struct NODE *node1 = malloc(sizeof(struct NODE));
    head -> next = node1;
    node1 -> data = 20;

    struct NODE *node2 = malloc(sizeof(struct NODE));
    node1 -> next = node2;
    node2 -> data = 40;

    node2->next = NULL;

    struct NODE *curr = head->next;
    while (curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    free(node2);
    free(node1);
    free(head);

    return 0;
}

*/