
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

int count = 0;
Node *head = NULL; //Creates a head pointer with properties of a node


void List_insert(char *x);
void Print_list();
void Delete_node(char *a);
void writeListToFile();

int main() {
    int input;
    char data[MAX_STR_LEN];
    char delete_word[MAX_STR_LEN];


    for (;;){
        printf("Menu\n");
        printf("1. Add something to the list?\n");
        printf("2. Print the list?\n");
        printf("3. Delete from the list?\n");
        printf("5. Save list\n");
        printf("6. If you want to Exit\n");

        scanf("%d", &input);

        if(input == 1){
            printf("Please enter the movie name:\n");
            fgets(data, MAX_STR_LEN, stdin); //takes the string you type, stores in memory, then pointed to by data
            fgets(data, MAX_STR_LEN, stdin); // somehow the function only works when there's two fgets ? lool

            List_insert(data);
        }
        else if(input == 2){
            Print_list();
        }
        else if(input == 3){
            printf("What do you want to delete?\n");
            fgets(delete_word, MAX_STR_LEN, stdin);
            fgets(delete_word, MAX_STR_LEN, stdin);
            Delete_node(delete_word);
        }
        else if(input == 5){
        writeListToFile();
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

void List_insert(char *x) {

    Node *new_node; //Creates new node and gives sets its properties from the defined structure
    Node *temp;
    new_node = (Node*)malloc(sizeof(Node));
    count++;

    if(head == NULL){ //if the element added is the first item on the list
        head = new_node;
        int i = 0;
        do{ // add the first char of the stored string to the node
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

void Delete_node(char *a) { // delete's the node with the string the user typed in
    Node *temp;
    Node *prev;
    temp = head;
    if (temp == NULL){
        printf("Sorry there is nothing in the list :(\n");
        return;
    }
    if(temp != NULL && strcmp(temp->data_string, a) == 0){ // If movie titled entered is the first item on the list
        head = temp->next; // attaches the head to the next node
        count--;
        free(temp);
        return;
    }
    while(temp != NULL && (strcmp(a, temp->data_string) != 0)){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    printf("You deleted %s\n", temp->data_string);
    count--;
    free(temp);
    return;
}

void writeListToFile(){
    FILE *pfile = fopen("/Users/ericzhu/Documents/MyPProjects/movielist/SavedFile", "w");
    Node *temp;
    temp = head;
    if(pfile != NULL){
        while(temp->next != NULL){
            fprintf(pfile, "%s", temp->data_string);
            temp = temp->next;
        }
        fprintf(pfile, "%s", temp->data_string);
    }
    fclose(pfile);
    return;
}