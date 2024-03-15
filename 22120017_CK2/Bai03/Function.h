#include<iostream>
#include<math.h>

using namespace std;

struct Film
{
	char* id;

	char* name;

	char* nameNum;

	float monney;
};


struct Node
{
	Film F;

	Node* next;
};

struct List
{
	Node* head;
};

typedef struct Node* node;
typedef struct List* list;

void inputFilm(list& l, int n);

void deleteFilm(list& l, int k);


void printList(list& l);