/* Given a reference (pointer to pointer) 
to the head of a list and an int, 
inserts a new node on the front of the list. */
#include <bits/stdc++.h>
using namespace std;
class Node 
{ 
    public:
    int data; 
    Node *next; 
}; 
void push(Node** head_ref, int new_data) 
{   
    Node* new_node = new Node();   
    new_node->data = new_data;  
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 


// Given a node prev_node, insert a
// new node after the given
// prev_node
#include <bits/stdc++.h>
using namespace std;
class Node 
{ 
    public:
    int data; 
    Node *next; 
}; 
void insertAfter(Node* prev_node, int new_data)
{ 
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    } 
    Node* new_node = new Node();
    new_node->data = new_data; 
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Given a reference (pointer to pointer) to the head  
// of a list and an int, appends a new node at the end 
#include <bits/stdc++.h>
using namespace std;
class Node 
{ 
    public:
    int data; 
    Node *next; 
}; 
void append(Node** head_ref, int new_data)  
{      
    Node* new_node = new Node(); 
    Node *last = *head_ref;   
    new_node->data = new_data;     
    new_node->next = NULL;    
    if (*head_ref == NULL)  
    {  
        *head_ref = new_node;  
        return;  
    }  
    while (last->next != NULL)
    {
        last = last->next;  
    }
    last->next = new_node;  
    return;  
}  
  
// Given a reference (pointer to pointer)
// to the head of a list and a key, deletes
// the first occurrence of key in linked list
#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};
void deleteNode(Node** head_ref, int key){
    Node* temp = *head_ref;
    Node* prev = NULL;
 
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next; 
        delete temp; 
        return;
    }
    // Else Search for the key to be deleted,
    // keep track of the previous node as we
    // need to change 'prev->next' */
 else {
        while (temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }      
        if (temp == NULL)
            return;        
        prev->next = temp->next;
        delete temp;
    }
}

// Given a reference (pointer to pointer)
// to the head of a list and a key, remove
// the last occurrence of key in linked list
#include <iostream>
using namespace std;
  
struct Node {
    int data;
    struct Node* next;
};
  
Node* removeLastNode(struct Node* head)
{
    if (head == NULL)
        return NULL;
  
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
  
    Node* second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;
  
    delete (second_last->next);
  
    second_last->next = NULL;
  
    return head;
}


  




  