#include<stdio.h>
#include<string.h>
#include <math.h>

int cnt = 0;
int a[1005];
int min(int x, int y) {

    if(x > y) return y;
    else return x;
}
int isDig(char *p) {
    int d = 0;
    int m = strlen(p);
    for(int i = 0; i < m; i ++) {
        if(p[i] >= '0' && p[i] <= '9')
            d = d * 10 + p[i]-'0';
        else return 0;
    }
    a[cnt++] = d;
    return 1;
}

int main(int argc,char *argv[]){
    int i = 0;
    int minx = 10000000000;
    int flag = 0;
    int flag1 = 1;
    for( i=1 ; i<argc ; i++){
        if( isDig(argv[i]) ) {
            flag = 1;
        }
        else flag1 = 0;
    }
    if(!flag) {
        printf("The program needs at least one integer parameter to run!\n");
    } else if(flag1 == 0) {
        printf("The parameter has to be an integer format!\n");
    } else {
        for(int i = 0; i < cnt; i ++) {
            minx = min(minx, a[i]);
        }
        printf("Min parameter is %d\n",minx);
    }
    return 0;
}