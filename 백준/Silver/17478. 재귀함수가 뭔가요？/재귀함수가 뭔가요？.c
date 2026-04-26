#include <stdio.h>

void PrintForward(int n); 
void Recursive(int start, int end);

int main(void)
{
	int n;
	
	scanf("%d", &n);
	puts("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.");
	Recursive(0, n);
	
	return 0;
}

void PrintForward(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("____");
	}
}

void Recursive(int start, int end)
{	
	PrintForward(start);
	puts("\"재귀함수가 뭔가요?\"");
	
	if (start == end)
	{
		PrintForward(start);
		puts("\"재귀함수는 자기 자신을 호출하는 함수라네\"");
		PrintForward(start);
		puts("라고 답변하였지.");
		
		return;
	}
	
	PrintForward(start);
	puts("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.");
	PrintForward(start);
	puts("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.");
	PrintForward(start);
	puts("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"");
	Recursive(++start, end);
	PrintForward(start - 1);
	puts("라고 답변하였지.");
}