#include<stdio.h>

int main(void){
    double matrix[10][10], ans[10];
    short rows = 0, columns = 0;
    int i = 0, cnt = 0;

/*  行列設定    */
    printf("行列の幅(2^9)");
    scanf("%1d",&i);
    if(i > 9)
        i = 9;
    printf("行列A\n");
    for(; rows < i ; rows++){
        for(columns = 0 ; columns < i ; columns++){
            printf("A[%hi][%hi] = ",rows+1,columns+1);
            scanf("%lf",&matrix[rows][columns]);
        }
    }

    printf("適当な解 ");

/*  計算   */
    for(cnt = 0 ; cnt < i ; cnt++){
        printf("x[%d] = ",cnt+1);
        scanf("%lf",&ans[cnt]);
    }

    return 0;
}
