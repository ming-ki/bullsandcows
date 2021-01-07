#include <stdio.h>
#include <stdlib.h> /*rand 함수*/
#include <time.h>

int main(void)
{
	srand(time(NULL)); /*1초마다 다른 랜덤값 생성*/
	int answer = 0;
	int ans_arr[4] = { 0,0,0,0 };

	for (int i = 0; i < 4; i++)
	{
		ans_arr[i] = rand() % 9 + 1; /*1~9까지 난수 생성*/
		
		for (int j = 0; j < i; j++) /*중복 검사*/
		{
			if (ans_arr[i] == ans_arr[j])
				i--;
		}
		
	}
	for (int i = 0; i < 4; i++) /*정답 출력*/
	{
		printf("%d", ans_arr[i]);
	}
}
