#include <stdio.h>
#include <math.h>

// precision error, if the absolute difference between two values is less than or equal to EPS,
// they are considered equal
# define EPS 1e-3

typedef struct Circle{
    // a structure that should hold three attributes/members per entity
    int x,y,z;
}Circle;

double _distance(Circle a, Circle b){
    // purpose of this function is to calculate the square root distance (Euclidian distance) between the centers of two circle type variables a and b
    double value = 0.0;
    // write your logic here
    value = (b.x - a.x)*(b.x - a.x) + (b.y-a.y)*(b.y-a.y);
    return sqrt(value);
}

Circle circle_input(){
    // purpose of this function is to take input, store the values into a Circle type variable "temp"
    // and to return the corresponding Circle variable
    Circle temp;

    //write your logic here
    scanf("%d%d%d",&temp.x,&temp.y,&temp.z);
    return temp;
}

void circle_circle_intersection(Circle a, Circle b){
    // purpose of this function is to find the intersection of two circles stored into
    // two Circle type variables, Circle a and Circle b
    // if you do not find any intersection print "NO INTERSECTION" (without quotes)
    // if you find intersection print "INTERSECTION" (without quotes)
    // if two circles touch each other print "TOUCHED" (without quotes)
    // if one circle encloses another circle also print "INTERSECTION" (without quotes)

    /* write your logic here*/

    double distancee = _distance(a,b);
    int r1 = a.z;
    int r2 = b.z;
    if (fabs(distancee-(r1+r2)) <= EPS)
    {
        printf("Touched\n");
    }
    else if (distancee > (r1+r2))
    {
        printf("No Intersection\n");
    }
    else {
        printf("Intersection\n");
    }
    
    return;
}


int main(void){
    
    Circle a,b;

    a = circle_input();
    b = circle_input();

    circle_circle_intersection(a,b);
    return 0;
}