#include <iostream>
#include <cstdio>
using namespace std;

int printMax(int a, int b, int c, int d){
    int max = a;
    

    if(b > max){
        max = b;                    //OPTIMISED ONE IS 1ST BECAUSE NESTED GENERAGTE MORE COMLLEX CODE BY COMPILER
    }

    if(c > max){
        max = c;
    }

    if(d > max){
        max = d;
    }

    return max;
}

int max_of_four(const int a,const int b,const int c,const int d){           //SHORT BUT NOT BETTER
    return ((a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d))));
}

int main() {
   int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}