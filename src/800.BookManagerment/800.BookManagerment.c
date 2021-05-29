#include<stdio.h>
int add_book(char (*book_name)[30], char (*auth_name)[30], char (*publ_name)[30], int *borrowed, int *num_total_book);
int compare(char *str1, char *str2);
int search_book(char (*book_name)[30], char (*auth_name)[30], char (*publ_name)[30], int num_total_book);


int main(){
	int user_choice; //사용자가 선택한 메뉴 번호
	char book_name[100][30]; //책의 제목을 저장할 배열
	char auth_name[100][30];//책의 저자를 저장할 배열
	char publ_name[100][30];//책의 출판자를 저장할 배열
	int num_total_book = 0;//현재 저장된 책의 개수
	int borrowed[100];//대여 상태를 저장할 배열
	
	while(1){
	printf("도서 관리 프로그램\n");
		printf("메뉴를 선택하세요 \n");
		printf("1. 책을 새로 추가하기\n");
		printf("2. 책을 검색하기\n");
		printf("3. 책을 빌리기\n");
		printf("4. 책을 반납하기\n");
		printf("5. 프로그램 종료\n");

		printf("당신의 선택은 : ");
		scanf("%d", &user_choice);

		if (user_choice == 1){
			add_book(book_name, auth_name, publ_name, borrowed, &num_total_book); //책을 새로 추가하기
		}else if (user_choice == 2){
			search_book(book_name, auth_name, publ_name, num_total_book);//책을 검색하기
		}else if (user_choice == 3){
			borrowed_book(borrowed);//책을 빌리기
		}else if (user_choice == 4){
			return_book(borrowed);//책을 반납하기
		}else if (user_choice == 5){
			break;//프로그램 종료
		}	
	}
	
	
	return 0;
}


//책을 추가하는 함수(2차원 char 배열을 인자로 받음)
int add_book(char (*book_name)[30], char (*auth_name)[30], char (*publ_name)[30], int *borrowed, int *num_total_book){
	printf("추가할 책의 제목");//추가할 책의 제목
	scanf("%s", book_name[*num_total_book]);
	
	printf("추가할 책의 저자");//추가할 책의 저자
	scanf("%s", auth_name[*num_total_book]);
	
	printf("추가할 책의 출판사");//추가할 책의 출판사
	scanf("%s", publ_name[*num_total_book]);
	
	borrowed[*num_total_book] = 0; //대여 불가
	printf("추가 완료! \n");
    (*num_total_book)++;


	return 0;
}

//책을 검색하는 함수
int search_book(char (*book_name)[30], char (*auth_name)[30], char (*publ_name)[30], int num_total_book) {
	int user_input;//사용자의 입력값 저장
	char user_search[30];
	int i = 0;
	
	
	printf("어느 것으로 검색할 것인가요? \n");
	printf("1. 책 제목 검색 \n");
    printf("2. 지은이 검색 \n");
    printf("3. 출판사 검색 \n");
    printf("당신의 선택은 : ");
    scanf("%d", &user_input);
	
	printf("검색할 단어를 입력해주새요 : ");
	scanf("%s", user_search);
	
	printf("---검색 결과--- \n");
	
	if (user_input == 1) {
        //i 가 0 부터 num_total_book 까지 가면서 각각의 책 제목을 사용자가 입력한 검색어와 비교
        for (i = 0; i < num_total_book; i++) {
            if (compare(book_name[i], user_search)) {
                printf("번호 : %d // 책 이름 : %s // 지은이 : %s // 출판사 : %s \n", i, book_name[i], auth_name[i], publ_name[i]);
            }
        }
    } else if (user_input == 2) {
        //i 가 0 부터 num_total_book 까지 가면서 각각의 지은이 이름을 사용자가 입력한 검색어와 비교
        for (i = 0; i < num_total_book; i++) {
            if (compare(auth_name[i], user_search)) {
                printf("번호 : %d // 책 이름 : %s // 지은이 : %s // 출판사 : %s \n", i, book_name[i], auth_name[i], publ_name[i]);
            }
        }

    } else if (user_input == 3) {
        //i 가 0 부터 num_total_book 까지 가면서 각각의 출판사를 사용자가 입력한 검색어와 비교
        for (i = 0; i < num_total_book; i++) {
            if (compare(publ_name[i], user_search)) {
                printf("번호 : %d // 책 이름 : %s // 지은이 : %s // 출판사 : %s \n", i, book_name[i], auth_name[i], publ_name[i]);
            }
        }
    }
	
	return 0;
}

//문자열 비교 함수
int compare(char *str1, char *str2) {
    while (*str1) {
        if (*str1 != *str2) {
            return 0;
        }

        str1++;
        str2++;
    }

    if (*str2 == '\0') {
        return 1;
    }

    return 0;
}