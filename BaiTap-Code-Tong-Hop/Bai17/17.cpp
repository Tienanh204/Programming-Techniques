#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* head=NULL;

int prime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}

Node* createNode(int data)
{
	Node* tmp = new Node();

	tmp->data = data;

	tmp->next = NULL;

	return tmp;
}

int countNode(Node* h)
{

	int cnt = 0;

	if (h == NULL)
		return cnt;

	if (prime(h->data))
	{
		cnt++;
	}
	return cnt + countNode(h->next);
	
}

int main()
{
	cout << "n: ";
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Data: ";
		int data; cin >> data;

		Node* tmp = createNode(data);

		if (head == NULL)
		{
			head = tmp;
		}
		else
		{
			tmp->next = head;
			head = tmp;
		}
	}

	cout << "So: " << countNode(head);
}