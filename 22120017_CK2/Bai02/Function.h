#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<math.h>

using namespace std;

struct SV
{
	char* id;

	char* name;

	float gpa;
};

struct Node
{
	SV Student;

	Node* next;
};

struct Queue
{
	Node* head;

	Node* tail;

	int Size;
};

typedef struct Node* node;
typedef struct Queue* queue;

queue init(int Size);

//Cau1
void inputStudent(queue& q, int n);
void writeStudentBinary(queue& q, int n);

//Cau2
void readAnhDisplayBinary();

//Cau3
void printListStudent(queue& q);

//Cau4
bool isEmpty(queue& q, int n);

//Cau5
bool isFull(queue& q, int n);

//Cau6
void enQueue(queue& q, int& n);

//Cau7
void deQueue(queue& q, int& n);

//Cau8
void findStudent(queue& q, char* id, int& n);
