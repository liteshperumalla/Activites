#include<stdio.h>
void swap(void* a, void* b, size_t size) {
    char* p = (char*)a;
    char* q = (char*)b;

    for (size_t i = 0; i < size; i++) {
        char temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}
int main(){
    int n1,n2;
    char string1,string2;
    float f1, f2;
    scanf("%d %d", &n1, &n2);
    scanf("%c %c", &string1, &string2);
    scanf("%f %f", &f1, &f2);

    swap(&n1, &n2, sizeof(int));
    swap(&f1, &f2, sizeof(float));
    swap(&string1, &string2, 1);

    printf("%d , %d\n", n1, n2);
    printf("%c , %c\n", string1, string2);
    printf("%f , %f\n", f1, f2);

    return 0;

}