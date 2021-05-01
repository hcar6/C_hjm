# include<stdio.h>
//성공
int main()
{
    int i;
    int subject, score;
    double sum_score = 0 ;

    printf("몇 개의 과목 점수를 입력받을 것인가요? : ");
    scanf("%d", & subject);

    printf("\n 각 과목의 점수를 입력 해주세요 \n");
    for (i = 1 ; i <= subject; i ++) //여기서 for 반복문 들어가고.
    {
        printf("과목 %d : " , i);
        scanf("%d", & score);
        sum_score = sum_score + score;
    } //여기까지

    printf("전체 과목의 평균은 : %.2f \n", sum_score / subject); // 총 점수에서 몇과목인지를 나눈 결과 값이 나온다.

    return  0 ;
}