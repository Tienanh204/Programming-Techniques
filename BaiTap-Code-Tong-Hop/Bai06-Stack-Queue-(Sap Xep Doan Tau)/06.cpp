#include<iostream>
#include<math.h>
#include<sstream>
#include<map>
#include<string>
using namespace std;


struct Stack
{
	int* a;

    int* b;

    int* c;

    int top1 ;

    int top2 ;

    int top3 ;
	
};

typedef struct Stack* stack;

stack Create_Node(int x)
{
    stack st = new Stack();
    
    st-> top1 = -1;

    st-> top2 = -1;

    st-> top3 = -1;

    st->a = new int[x];

    st->b = new int[x];

    st->c = new int[x];

    return st;
}


//Stack A

bool Empty_a(stack& st)
{
	return st->top1 == -1;
}

void Push_a(stack& st, int &n)
{
    st->a[++st->top1] = n;
}

void Pop_a(stack& st)
{
    if (Empty_a(st))
    {
        return;
    }
    else
    {
        st->a[st->top1--];
    }
}

//Stack B
bool Empty_b(stack& st)
{
    return st->top2 == -1;
}

void Push_b(stack& st, int &n)
{
    st->b[++st->top2] = n;
}

void Pop_b(stack& st)
{
    if (Empty_b(st))
    {
        return;
    }
    else
    {
        st->b[st->top2--];
    }
}

//Stack C
bool Empty_c(stack& st)
{
    return st->top3 == -1;
}

void Push_c(stack& st, int &n)
{
    st->c[++st->top3] = n;
}

void Pop_c(stack& st)
{
    if (Empty_c(st))
    {
        return;
    }
    else
    {
        st->c[st->top3--];
    }
}

int main()
{
    map<int, int> mp;

    int arr1[100];
    int arr2[100];

    string s1;
    string s2;

    getline(cin, s1);
    getline(cin, s2);

    stringstream ss1(s1);
    stringstream ss2(s2);

    string tmp;

    int index1=0, data;

    while (getline(ss1, tmp, '-'))
    {
        data = 0;
        for (int i = 0; i < tmp.size(); i++) {
            int digit = tmp[i] - '0';
            int position_value = pow(10, tmp.size() - i - 1);
            data += digit * position_value;
        }
        arr1[index1++] = data;
    }

   int  index2 = 0;

    while (getline(ss2, tmp, '-'))
    {
        data = 0;
        for (int i = 0; i < tmp.size(); i++) {
            int digit = tmp[i] - '0';
            int position_value = pow(10, tmp.size() - i - 1);
            data += digit * position_value;
        }
        arr2[index2++] = data;

        mp[data]++;
    }

    string step[100];

    //Xu ly bai toan
    stack st = Create_Node(index1);

    int j = 0, cnt = 0;

    for (int i = index1 - 1; i >= 0; i--)
    {
        Push_a(st, arr1[i]);

        if (arr1[i] == arr2[0])
        {
            Push_c(st,arr1[i]);

            Pop_a(st);

            step[j++] = "A->C";
        }
    }

    for (int i = 0;i<index1-2;i++)
    {
        Push_b(st, st->a[st->top1]);
    }

}


//1-2-3-4
//1-4-3-2

//4-1-3-2
//2-1-3-4


//Yes
//
//1 : A->C
//
//2 : A->B
//
//3 : A->B
//
//4 : A->C
//
//5 : B->C
//
//6 : B->C