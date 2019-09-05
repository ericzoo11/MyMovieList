
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//#define MAX_STR_LEN 50
typedef struct NodeStruct{
    int data;
    //char data_string[MAX_STR_LEN];
    struct NodeTag *next;
} Node;

int count = 0;
Node *head = NULL; //Creates a head pointer with properties of a node

void List_insert_at_end(int); //why do I need this? ask Andrew. Maybe need to declare the type we're working with
void Print_list();
//void cleanInput(char* input);

int main() {
    int input, data;
    //char data[50];

    for (;;){
        printf("Menu\n");
        printf("1. Add something to the list?\n");
        printf("2. Print the list?\n");
        printf("6. If you want to Exit\n");

        scanf("%d", &input);

        if(input == 1){
            printf("Please enter the movie name:\n");
            scanf("%d", &data);
            //fgets(data, MAX_STR_LEN, stdin);

            List_insert_at_end(data);
        }
        else if(input == 2){
            Print_list();
        }
        else if (input == 6){
            break;
        }
        printf("Total Movies: %d\n", count);
    }
    return 0;
}

void Print_list(){
    Node *temp;
    temp = head;
    if (temp == NULL){
        printf("Nothing on the list\n");
        return;
    }
    printf("There are %d elements in the list\n", count);

    while(temp->next != NULL){ //traverse the list until the last node in the list
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data); //prints the last item in the list
}

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
    temp->next = new_node;
    new_node->data = x; //putting the string into the node
    new_node->next = NULL; //setting the node's next to NULL since it's end o// f the list

}
/*void cleanInput(char* input) {
    int len = strlen(input);
    int i;
    for (i = 0; i < len - 1; i++) {}
    input[i] = '\0';
}*/