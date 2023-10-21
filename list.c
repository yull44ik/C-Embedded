#include <stdio.h>
#include <stdlib.h>

struct book {
    char *name;
    int price;
    int page;
    char *language;
    int weight;
    int year;
    struct book *next;
};
struct book *head = NULL;

void printList(){
    struct book *p = head;
    while (p != NULL){
        printf(p->name);
        printf("- %d - ", p->price);
        printf("%d - ", p->page);
        printf(p->language);
        printf("- %d - ", p->weight);
        printf("%d", p->year);
        p = p->next;
        printf( "\n");
    }
}
void insertatbegin(char name[], int price, int page, char language[], int weight, int year) {
    struct book *b = (struct book*) malloc(sizeof(struct book));

    b->name = name;
    b->price = price;
    b->page = page;
    b->language = language;
    b->weight = weight;
    b->year = year;
    b->next = head;

    head = b;
}

void insertatend(char name[], int price, int page, char language[], int weight, int year){
     struct book *end = (struct book*) malloc(sizeof(struct book));

    end->name = name;
    end->price = price;
    end->page = page;
    end->language = language;
    end->weight = weight;
    end->year = year;
    end->next = NULL;

    struct book *linkedlist = head;

    while(linkedlist->next != NULL)
        linkedlist = linkedlist->next;

    linkedlist->next = end;
}

int main() {
    insertatbegin("Harry Potter and the Philosopher's Stone ", 499, 245, "English ", 145, 1997);
    insertatend("Harry Potter and the Chamber of Secrets ", 549, 340, "English ", 189, 1998);
    insertatend("Harry Potter and the Prisoner of Azkaban ", 529, 385, "English ", 177, 1999);
    insertatend("Harry Potter and the Goblet of Fire ", 549, 590, "English ", 170, 2000);
    insertatend("Harry Potter and the Order of the Phoenix ", 499, 700, "English ", 156, 2003);
    insertatend("Harry Potter and the Half-Blood Prince ", 599, 600, "English ", 166, 2005);
    insertatend("Harry Potter and the Deathly Hallows ", 599, 641, "English ", 163, 2007);

    printList();

    return 0;

}
