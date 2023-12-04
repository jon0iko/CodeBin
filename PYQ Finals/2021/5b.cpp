#include <bits/stdc++.h>

struct Point {
    double x, y;
};

struct Quadrilateral {
    struct Point a, b, c, d;
};

// Function to calculate distance between two points
double distance(struct Point p1, struct Point p2) {
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

// Function to identify type of quadrilateral
void identifyQuadrilateral(struct Quadrilateral q) {
    double sideAB = distance(q.a, q.b);
    double sideBC = distance(q.b, q.c);
    double sideCD = distance(q.c, q.d);
    double sideDA = distance(q.d, q.a);
    double sideAC = distance(q.a, q.c);
    double sideBD = distance(q.b, q.d);

    if (sideAB == sideBC && sideBC == sideCD && sideCD == sideDA) {
        if (sideAC == sideBD) {
            printf("Type: Square\n");
        } else {
            printf("Type: Rhombus\n");
        }
    } else if ((sideAB == sideCD && sideBC == sideDA) && (sideAC != sideBD)) {
        printf("Type: Parallelogram\n");
    } else if ((sideAB == sideCD || sideBC == sideDA) && (sideAC == sideBD)) {
        printf("Type: Rectangle\n");
    } else {
        printf("Type: Other Quadrilateral\n");
    }
}

int main() {
    struct Point p1 = {5, 7};
    struct Point p2 = {9, 5};
    struct Point p3 = {5, 3};
    struct Point p4 = {1, 5};

    struct Quadrilateral quad = {p1, p2, p3, p4};

    identifyQuadrilateral(quad);

    return 0;
}