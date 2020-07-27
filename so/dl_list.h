#ifndef dl_list
#define dl_list

//extern struct Node;
extern struct Node {
    int data;
    struct Node* next; // Pointer to next node in DLL
    struct Node* prev; // Pointer to previous node in DLL
}Node;
void push(struct Node**, int);
void insertAfter(struct Node*, int);
void append(struct Node**, int);
void insertBefore(struct Node**, struct Node*, int);
void printList(struct Node*);

#endif
