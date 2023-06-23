#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

void calculateVolumeAndSurfaceArea(struct Box* box, double* volume, double* surfaceArea);

int main() {
    struct Box box;
    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%lf", &(box.length));
    printf("Width: ");
    scanf("%lf", &(box.width));
    printf("Height: ");
    scanf("%lf", &(box.height));

    double volume, surfaceArea;
    calculateVolumeAndSurfaceArea(&box, &volume, &surfaceArea);

    printf("Volume of the box: %.2lf\n", volume);
    printf("Total surface area of the box: %.2lf\n", surfaceArea);

    return 0;
}

void calculateVolumeAndSurfaceArea(struct Box* box, double* volume, double* surfaceArea) {
    *volume = box->length * box->width * box->height;

    *surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}
