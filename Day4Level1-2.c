#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} Complex;

Complex readComplex();
void writeComplex(Complex c);
Complex addComplex(Complex c1, Complex c2);
Complex multiplyComplex(Complex c1, Complex c2);

int main() {
    Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    num1 = readComplex();

    printf("Enter the second complex number:\n");
    num2 = readComplex();

    sum = addComplex(num1, num2);
    printf("Sum of the two complex numbers: ");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("Product of the two complex numbers: ");
    writeComplex(product);

    return 0;
}

Complex readComplex() {
    Complex c;

    printf("Real part: ");
    scanf("%lf", &c.real);
    printf("Imaginary part: ");
    scanf("%lf", &c.imaginary);

    return c;
}

void writeComplex(Complex c) {
    if (c.imaginary >= 0)
        printf("%.2lf + %.2lfi\n", c.real, c.imaginary);
    else
        printf("%.2lf - %.2lfi\n", c.real, -c.imaginary);
}

Complex addComplex(Complex c1, Complex c2) {
    Complex sum;

    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;

    return sum;
}

Complex multiplyComplex(Complex c1, Complex c2) {
    Complex product;

    product.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    product.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);

    return product;
}
