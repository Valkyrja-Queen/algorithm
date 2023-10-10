#include<stdio.h>
#define N 8
 
int LinerSearch(int x[],int n,int y)
{
        int i=0;
        while(i<n){
                if(x[i]==y) return i;
                else i++;
        }
        return -1;
}
 
int SentinelSearch(int x[],int n,int y)
{
        int i=0;
        x[n]=y;
        while(1){
              if(x[i]==y) break;
              else i++;
        }
        if(i<n) return i;
        return -1;
}

void main()
{
        int data[N+1]={11,22,33,44,55,66,77,88}; //一つ大きく宣言
        int target;
        int rc;

        printf("目標データを入力");
        scanf("%d",&target);
        //rc=LinearSearch(data,N,target);
        rc=SentinelSearch(data,N,target);
        if(rc==-1) printf("見つかりません\n");
        else printf("要素番号 %d のデータです\n",rc);

        return;
}
                                              