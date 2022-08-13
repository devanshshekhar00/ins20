
#include <stdio.h>
void swap(int*,int*);
int main() {
    // Write C code here
    int a,b;
    printf("Enter two numbers\t");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);

    return 0;
}
void swap(int *a,int*b)
{
    int k = *a;
    *a = *b;
    *b = k;
    
    return 0;
}
