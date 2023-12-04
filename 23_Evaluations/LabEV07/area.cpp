#include <bits/stdc++.h>

struct Line { // To store a line
    int A, B, C;
};

struct FloatPoint { // To store a floating 2D point
    double x, y;
};

double area(FloatPoint A, FloatPoint B, FloatPoint C) {
    // Given points, A, B, and C
    // finds the triangle area
    double triangle_area = 0.5 * fabs(A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y));
    return triangle_area;
}

int line_line_intersecion(Line M, Line N, FloatPoint &f) {
    int flag = 1; // variable initialize
    // Given two lines M and N, finding its intersecting points
    // storing it into x and y (reference variables, values will be stored directly into the memory address)
    // If the intersecting point is properly calculated, save the points in the FloatPoint typed variable f and set the value
    // of the flag as 1
    // but if you can not find a proper intersecting point
    // set the value of the flag as 0

    int d = M.A * N.B - N.A * M.B;
    if (d == 0) {
        flag = 0;
    } else {
        f.x = (N.B * M.C - M.B * N.C) * 1.0 / d;
        f.y = (M.A * N.C - N.A * M.C) * 1.0 / d;
    }

    return flag; // return value
}

void solution() {
    // Take the coefficients (A, B, and C : Ax+By+C=0) of three lines
    // Store the inputs in three Line type variables: one, two, and three
    Line one, two, three;

    
    scanf("%d %d %d", &one.A, &one.B, &one.C);
    scanf("%d %d %d", &two.A, &two.B, &two.C);
    scanf("%d %d %d", &three.A, &three.B, &three.C);

    // Find the three points that comprise the triangle using the function line_line_intersection()
    // line_line_intersecion(), returns a flag (true/false) and stores the value into a variable typed FloatPoint (parameter is passed as a reference)
    // returned value false means, these lines do not intersect
    // but if returned true means, they have intersected and the value is stored in FloatPoint typed variable that is passed in the function

    int flag;
    FloatPoint X, Y, Z;

    flag = line_line_intersecion(one, two, X);
    flag &= line_line_intersecion(two, three, Y);
    flag &= line_line_intersecion(three, one, Z);

    if (!flag) {
        // Lines do not intersect, triangle cannot be formed
        printf("0.000\n");
        return;
    }

    // calculate the triangle area and print up to three decimal places
    double triangle_area = area(X, Y, Z);

    // Final Printing up to three decimal places
    printf("%0.3lf\n", triangle_area);
    return;
}

int main(void) {
    solution();
}