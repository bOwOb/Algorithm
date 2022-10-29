#include <stdio.h>

int Graph[1001][1001] = { 0 };
int visit[1001] = { 0 };
int queue[1001];

void BFS(int v, int N)
{
	int front = 0, rear = 0, Pop, i;
	printf("%d ", v);
	queue[0] = v;
	rear++;
	visit[v] = 1;

	while (front < rear)
	{
		Pop = queue[front];
		front++;

		for (i = 1; i <= N; i++)
		{
			if (Graph[Pop][i] == 1 && visit[i] == 0)
			{
				printf("%d ", i);
				queue[rear] = i;
				rear++;
				visit[i] = 1;
			}
		}
	}
	return;
}

int main() {
	int N, M, Start;
	int i, x, y;

	scanf("%d%d%d", &N, &M, &Start);

	for (i = 0; i < M; i++) {
		scanf("%d%d", &x, &y);
		Graph[x][y] = 1;
		Graph[y][x] = 1;
	}
	printf("\\n");
	BFS(Start, N);

	return 0;
}