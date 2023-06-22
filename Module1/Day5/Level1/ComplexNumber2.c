#include<stdio.h>

struct complex{
    float real;
    float imaginary;
}p, q, r;

typedef struct complex complex;

complex read();
void write(complex);
complex add();
complex mul();

complex read(){
    complex c;
     printf("Enter real part : ");
     scanf("%f", &c.real);
     printf("Enter imaginary part : ");
     scanf("%f", &c.imaginary);
     return c;
}

void write(complex p){
    printf("Complex number is : ");
    printf("%.1f + i %.1f", p.real, p.imaginary);
    printf("\n");
}

complex add(complex a, complex b){
    complex c;
     c.real = (a.real + b.real);
     c.imaginary = (a.imaginary + b.imaginary);
     return c;
}

complex mul(complex a, complex b){
    complex c;
    c.real=(a.real * b.real) - (a.imaginary * b.imaginary);
    c.imaginary=(a.real * b.imaginary) + (a.imaginary * b.real);
    return c;
}

int main(){
    complex c;
    printf("Enter the 1st complex number\n ");
    p = read();
    write(p);
    printf("Enter  the 2nd complex number\n");
    q = read();
    write(q);
    printf("Addition\n ");
    r = add(p, q);
    write(r); 
    printf("Multiplication\n");
    r = mul(p, q);
    write(r);
}

/*struct complex
{
   float real, imag;
}a, b, c;
   struct complex read(void);
   void write(struct complex);
   struct complex add(struct complex, struct complex);
   struct complex sub(struct complex, struct complex);
   struct complex mul(struct complex, struct complex);
   struct complex div(struct complex, struct complex);
void main ()
{
   printf("Enter the 1st complex number\n ");
   a = read();
   write(a);
   printf("Enter  the 2nd complex number\n");
   b = read();
   write(b);
   printf("Addition\n ");
   c = add(a, b);
   write(c);
   
}
struct complex read(void)
{
   struct complex t;
   printf("Enter the real part\n");
   scanf("%f", &t.real);
   printf("Enter the imaginary part\n");
   scanf("%f", &t.imag);
   return t;
}
void write(struct complex a)
{
   printf("Complex number  is\n");
   printf(" %.1f + i %.1f", a.real, a.imag);
   printf("\n");
}
struct complex add(struct complex p, struct complex q)
{
   struct complex t;
   t.real = (p.real + q.real);
   t.imag = (p.imag + q.imag);
   return t;
}*/