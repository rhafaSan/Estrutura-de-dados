#include <stdio.h>

int fat(int n);
int fat2(int n);
int fatRec(int n);

int main(){

    int num, r;

    printf("Digite um numero: ");
    scanf("%d", &num);

    r = fatRec(num);

    printf("Fatorial de %d é = %d\n", num, r);

    return 0;
}


int fat(int n){
    int i;
    int f = 1;

    for(i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}

int fat2(int n){
    int f = 1.0;
    while (n != 0)
    {
        f *= n;
        n--;
    }
    return f;
}

int fatRec(int n){
    if (n == 0)
        return 1;
    else
        return n * fatRec(n - 1);
}