#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M,N;
    int arr[20][20];
    int used[201]={0};
    int i,j,num;

    srand(time(NULL));

    scanf("%d %d",&M,&N);

    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            do{
                num = rand()%101 + 100; //100-200
            }while(used[num]==1);

            arr[i][j] = num;
            used[num] = 1;
        }
    }

    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
