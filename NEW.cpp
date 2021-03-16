#include <iostream>
#include <vector>
#include<string>
#include<string.h>

using namespace std;
//create note and pointer to next node
struct node
{
    int data;
    int key;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//insert ahead
void insertFirst(int key,int data) {
    //create a link
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->key=key;
    link->data=data;
    link->next=head;
    head=link;
}

void insertTail(int key,int data){
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->key=key;
    link->data=data;
    
    if(head == NULL){
        head = link;
        head->next=NULL;
    } else {
       // struct note *p = head;
       struct node *p; // point to head
       p = head;
       while(p->next != nullptr)
       {
           p = p->next;
       }
       p->next=link;
       p->next->next=NULL;
    }
}
void insertAt(int key,int data){
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->key=key;
    link->data=data;
    if(key == 0 || head == NULL){
        head = link;
        head->next=NULL;
    } else {
        int k =1;
        struct node *ptr = head;
        while(ptr != NULL && k != key)
        {
            ptr = ptr->next;
            k++;
        }
        if (k != key)
        {
            cout << "the position is invalid";
        } else {
            link->next=ptr->next;
            ptr->next=link;
        }
        struct node *p = ptr->next->next;
        while(p != NULL)
        {
            p->key++;
            p=p->next;
        }
    }
}
void printlist(){
    struct node *ptr = head;
    //cout << "\n[ ";
    while(ptr != NULL){
        cout <<"[" <<ptr->key << "," << ptr->data<<"]";
        ptr = ptr->next;
    }
    //cout << " ]";
}
int main(){
    insertTail(0,1);
    insertTail(1,2);
    insertTail(2,3);
    insertTail(3,4);
    insertTail(4,5);
    insertAt(1,6);
    printlist();
}
// int main() {
//     int a[10000*10000000];
//     vector<int> array;
//     array.push_back(1);
//     array.push_back(4);
//     cout << array[array.size()-1];
    
// }
// int main() {
//     //int *p = nullptr;

//     //cout << *p;

//     //cout << "hello";
//     int i =5;
//     i++;
//     int a[i];
//     i = i + 4;
//     int b[i];
//     cout << "ss";

// }

// int main()
// {
//     int i;
//     cin >> i;
//     int j =11;


//     int* p1 = &i;
//     int** p2 = &p1;
//         cout << "p1:" << *p1;
//         cout << "p1:" << **p2;
//         cout << "###" << sizeof(p1);
// }
