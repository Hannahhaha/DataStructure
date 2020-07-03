
#include "stdio.h"
#include <stdlib.h>

typedef int Status;
typedef struct Node
{
  int data;
  struct Node *next;
}Node;
typedef struct Node *LinkList;