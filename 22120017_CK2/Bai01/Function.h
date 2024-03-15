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

struct Stack
{
	Node* head;

	int Size;
};

typedef struct Node* node;
typedef struct Stack* stack;

stack init(int Size);

//Cau1
void inputStudent(stack& st, int n);
void writeStudentBinary(stack& st, int n);

//Cau2
void readAnhDisplayBinary();

//Cau3
void printListStudent(stack& st);

//Cau4
bool isEmpty(stack& st, int n);

//Cau5
bool isFull(stack& st, int n);

//Cau6
void pushStudent(stack& st, int& n);

//Cau7
void popStudent(stack& st, int& n);

//Cau8
void findStudent(stack& st, char* id, int& n);

//Cau9
void addStudent(stack& st, int& n);