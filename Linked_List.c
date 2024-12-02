include<stdlib.h>
#include<stdio.h>

struct node {
   int data;
   struct node * next;
};

typedef struct node item;

void main() {
   item * temp, * head;
   int i,n,num;

   head = NULL;
   printf("How many number of node be created ? ");
   scanf("%d",&n);
   for(i=1;i<=n;i++) {
      temp = (item *)malloc(sizeof(item));
      scanf("%d",&num);
      temp->data = num;
      temp->next  = head;
      head = temp;
   }

   temp = head;

   while(temp) {
      printf("\n %d \n", temp->data);
      temp = temp->next ;
   }
}
