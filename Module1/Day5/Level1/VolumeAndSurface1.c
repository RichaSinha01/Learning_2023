#include<stdio.h>

struct box{
    int length;
    int width;
    int height;
};

typedef struct box box;

void calculate(box b1, int l, int w, int h){
    b1.length = l;
    b1.width = w;
    b1.height = h;
    int volume = l * w * h;
    int surfaceArea = 2 * l * w + 2 * w * h + 2 * l * h;
    printf("Volume  = %d", volume);
    printf("\nSurface Area = %d", surfaceArea);
}

int main(){
    int length, width, height;
    printf("Enter length, width and height of the box : ");
    scanf("%d%d%d", &length, &width, &height);
    box b1;
    calculate(b1, length, width, height);
}