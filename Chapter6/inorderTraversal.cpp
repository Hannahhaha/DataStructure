
#include "stdio.h"
#include <stdlib.h>
#define STACKINITSIZE 20//ջ��ʼ�ռ��С
#define INCREASEMENT 10//ջ�ռ��С������

typedef struct BiTNode
{
	char data;//�������ڵ�����
	BiTNode *lchild, *rchild;//ָ�����������������������ָ��
}BiTNode, *BiTree;//����������ڵ�ṹ

typedef struct SqStack
{
	BiTNode *base;//ջ��ָ��
	BiTNode *top;//ջ��ָ��
	int stacksize;//˳��ջ�ռ��С
}SqStack;//����˳��ջ�ṹ

//����һ����ջ�������ɹ�������1��ʧ�ܣ�����0
int InitStack(SqStack &S)
{
	S.base = (BiTNode*)malloc(STACKINITSIZE * sizeof(BiTNode));//20Ϊջ�Ĵ�С�����Ը���
	if (!S.base)
		return 0;
	S.top = S.base;
	S.stacksize = STACKINITSIZE;
	return 1;
}

//��ջ����
int Push(SqStack &S, BiTNode e)
{
	if (S.top - S.base >= S.stacksize)
	{
		S.base = (BiTNode*)realloc(S.base, (STACKINITSIZE + INCREASEMENT) * sizeof(BiTNode));
		if (!S.base)
			return 0;
		S.stacksize = 30;
	}
	*S.top = e;
	S.top++;
	return 1;
}

//��ջ��������ջΪ�գ��򷵻�0��ջ��Ϊ�գ��򷵻�1
int Pop(SqStack &S, BiTNode &e)
{
	if (S.base == S.top)
		return 0;
	S.top--;
	e = *S.top;
	return 1;
}

//�ж�ջ�Ƿ�Ϊ�գ���ջΪ�գ��򷵻�true��ջ��Ϊ�գ��򷵻�false
bool StackEmpty(SqStack S)
{
	if (S.base == S.top)
		return true;
	else
		return false;
}

//����������
void CreateBiTree(BiTree &T)
{
	char ch;
	scanf_s("%c", &ch);
	if (ch == '#')
		T = NULL;
	else
	{
		T = (BiTNode *)malloc(sizeof(BiTNode));
		T->data = ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}
//�������������
int InOrderTraverse(BiTree T)
{
	if (!T)
		return 0;
	SqStack S;
	int n = InitStack(S);//������ջ
	if (!n)
		return 0;
	BiTree p = T;
	BiTNode e;//�������ڵ㣬���ڴ�Ŵ�ջ��ȡ���Ľڵ�
	while (p || !StackEmpty(S))
	{
		if (p)
		{
			Push(S, *p);
			p = p->lchild;
		}
		else
		{
			Pop(S, e);
			printf("%c ", e.data);
			p = e.rchild;
		}
	}
	printf("\n");
	return 1;
}

int main(int argc, char* argv[])
{
	BiTree T = NULL;
	printf("�����������-�����������н���������\n");
	CreateBiTree(T);
	printf("����������������Ϊ��\n");
	InOrderTraverse(T);
	return 0;
}
