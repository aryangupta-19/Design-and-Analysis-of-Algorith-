// pow (a,b)

#include<stdio.h>
#include<unistd.h>

int power(int a, int b){
    if(b==0) return 1;
    if(b == 1) return a;

    if(b % 2 == 0 ) return power(a, b/2) * power(a, b/2);
    else return a * power(a, b/2) * power(a, b/2);
}

int main(){
    int a , b;
    printf("Enter number a: ");
    scanf("%d",&a);

    printf("Enter number b: ");
    scanf("%d",&b);

    int ans = power(a,b);
    printf("%d to the power %d is : %d\n", a, b, ans);
}

// finding min and max 
#include <stdio.h>

int main() {
    int a[5] = {2, 23, 1, 4, 5};

    int mini = a[0];
    int maxi = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] < mini)    mini = a[i];

        if (a[i] > maxi)    maxi = a[i];
    }
    printf("Minimum = %d\n", mini);
    printf("Maximum = %d\n", maxi);

    return 0;
}

