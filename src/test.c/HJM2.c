/* 
나는 간판가게 사장이다.
영문 간판의 문자를 만들때 각 문자의 필요 개수를 알고싶다.
#공백 문자는 없다
#영문 간판용 문자(소문자)

S : 1
0 : 2 -- 예시고 이렇게 하는거

1. 사용자의 문자열을 입력(배열 : word)
2. 영문을 저장할 배열(alpabet)
3. 비교 결과를 저장할 배열(counter)
4. word배열과 alpabet 배열과 원소를 비교(반복, for/while)
   4.1 같으면 counter 배열의 인덱스에 개수 저장 (if)
   4.2 다르면 아무처리 없음
5. alpabet 배열의 크기만큼 반복해서 결과 출력
*/
//알파벳 총 갯수는 26개 a는 97번 z는 122번
#include<stdio.h>

int main(){
	
	char word[50];
	char alpabet[30];
	int count;
	char counter[30];
	
	printf("영문 이름을 입력해주세요 : ");
	scanf("%s", word);
	
	printf("영문 이름 : %s \n", word);
	
	for(int  i = 0; i <= 25; i++)
	{
		alpabet[i] = (i + 97);
	}
	
	for(i = 0; i <= 25; i++)
	
	
	
	
	
	return 0;
	
}