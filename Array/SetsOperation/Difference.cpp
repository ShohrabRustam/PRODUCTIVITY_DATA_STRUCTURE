
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


struct List {
    int B[15];
    int size;
    int length;
};

void Display(struct List list) {
    int i;
    cout <<"Elements are :  "<<endl;
    for (i = 0;i<list.length;i++)
       cout << list.B[i] <<"    ";
    
    return ;
}

struct List* Difference(struct List *list1, struct List *list2) {
 int i, j, k;
 i = j = k = 0;

 struct List *list3 = (struct List *)malloc(sizeof(struct List));

 while (i<list1->length && j<list2->length) {
  if (list1->B[i]<list2->B[j])
   list3->B[k++] = list1->B[i++];
  else if (list2->B[j]<list1->B[i])
   j++;
  else {
   i++;
   j++;
  }
 }

 for (;i<list1->length;i++)
  list3->B[k++] = list1->B[i];

 list3->length = k;
 list3->size = 10;

 return list3;
 
}

int main() {
 struct List list1 = { { 2, 4, 7, 9,10 },10,5 };
 struct List list2 = { { 3, 5, 8,10,12 },10,5 };
 struct List *list3;

 printf("First Set:");
 Display(list1);

 printf("\n\n");

 printf("Second Set:");
 Display(list2);

 printf("\n\nDifference Operation on above 2 sets:");
 list3 = Intersection(&list1, &list2);
 Display(*list3);

 return 0;
}