
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_STR_LEN 20
typedef struct NodeStruct{
    char data_string[MAX_STR_LEN];
    struct NodeStruct *next;
} Node;

int count = 0;
Node *head = NULL; //Creates a head pointer with properties of a node

void List_insert_at_end(char *x); //why do I need this? ask Andrew. Maybe need to declare the type we're working with
void Print_list();

int main() {
    int input;
    char data[MAX_STR_LEN];

    for (;;){
        printf("Menu\n");
        printf("1. Add something to the list?\n");
        printf("2. Print the list?\n");
        printf("6. If you want to Exit\n");

        scanf("%d", &input);

        if(input == 1){
            printf("Please enter the movie name:\n");
            fgets(data, MAX_STR_LEN, stdin); //takes the string you type, stores in memory, then pointed to by data
            fgets(data, MAX_STR_LEN, stdin); // somehow the function only works when there's two fgets ? lool

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
        printf("%s", temp->data_string);
        temp = temp->next;
    }
    printf("%s", temp->data_string); //prints the last item in the list
}

void List_insert_at_end(char *x) {

    Node *new_node; //Creates new node and gives sets its properties from the defined structure
    Node *temp;
    new_node = (Node*)malloc(sizeof(Node));
    count++;
    if(head == NULL){ //if the element added is the first item on the list
        head = new_node;
        int i = 0;
        do{ // add the firt char of the stored string
            new_node->data_string[i] = x[i];
            i++;
        }while(x[i] != '\0' ); //keep on iterating through until you hit the end if the string
        new_node->next = NULL; //setting the node's next to NULL since it's end of the list
    }
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    int i = 0;
    do{
        new_node->data_string[i] = x[i];
        i++;
    }while(x[i]!= '\0' );
    new_node->next = NULL; //setting the node's next to NULL since it's end of the list
    printf("It worked\n");
}

