
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


typedef struct NodeStruct{
    int data;
    struct NodeTag *next;
} Node;

Node *head = NULL; //Creates a head pointer with properties of a node
int count = 0;

void List_insert_at_end(int); //why do I need this? ask Andrew. Maybe need to declare the type we're working with

int main() {
    int input, data;
    printf("Let's get this started!\n");
    printf("Menu\n");
    printf("Add something to the list? Please enter 1!\n");

    scanf("%d", &input);

    if(input == 1){
        printf("Please enter the movie name:\n");
        scanf("%d", &data);
        List_insert_at_end(data);
    }
    printf("How many movies in here: %d", count);

    return 0;
}


/*Node *Node_create(){
    Node *node = malloc (sizeof(Node)); //Creates a Node pointer and allocates memory for new node, with a size of the Node structure
    assert(node != NULL); //Continue on if statement holds true

    node->data = NULL; //Goes into the "node's" data and set it to ""
    node->next = NULL; //Goes into the "node's" next pointer and sets it to NULL

    return node;
}*/

void List_insert_at_end(int x) {

    Node *new_node; //Creates new node and gives sets its properties from the defined structure
    Node *temp;
    new_node = (Node*)malloc(sizeof(Node));
    count++;
    if(head == NULL){ //if the element added is the first item on the list
        head = new_node;
        new_node->data = x; //putting the string into the node
        new_node->next = NULL; //setting the node's next to NULL since it's end of the list
    }
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    new_node->data = x; //putting the string into the node
    new_node->next = NULL; //setting the node's next to NULL since it's end of the list
    temp->next = new_node;
    printf("It worked!\n");
}
