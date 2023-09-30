#include <stdio.h>
#include <math.h>

int checkposneg() {
    int num;
    scanf("%lf", &num);
    if (num > 0)
    {
        printf("positive");
    } else if (num == 0)
    {
        printf("zero");
    } else {
        printf("negative");
    }
}

int checkeodd() {
    int num;
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("even");
    } else {
        printf("odd");
    }
    
}

int checkequal() {
	int n1,n2;
	scanf("%d %d", &n1,&n2);
	if (n1==n2) 
	printf("equal");
	else 
	printf("not equal\n");
}

void checkleapyear()
{
    int year;
    scanf("%d", &year);
    if (year % 4 == 0 && (year % 100 != 0 && year & 400 == 0))
    {
        printf("leap year");
    }
    else
    {
        printf("Not leap year");
    }
}

void findlargen()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    if ((n1 > n2) && (n1 > n3))
    {
        printf("%d largest", n1);
    }
    else if ((n2 > n1) && (n2 > n3))
    {
        printf("%d largest", n2);
    }
    else
    {
        printf("%d largest", n3);
    }
}

void checkquad()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x >= 0 && y >= 0)
    {
        printf("first quadrant");
    }
    else if (x <= 0 && y >= 0)
    {
        printf("second quadrant");
    }
    else if (x <= 0 && y <= 0)
    {
        printf("third quadrant");
    }
    else if (x >= 0 && y <= 0)
    {
        printf("fourth quadrant");
    }
    else if (x == 0 && y == 0)
    {
        printf("ORIGIN");
    }
}

void month()
{
    int num;
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    }
}

void monthdays()
{
    int num;
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("31\n");
        break;
    case 2:
        printf("28 or 29\n");
        break;
    case 3:
        printf("31\n");
        break;
    case 4:
        printf("30\n");
        break;
    case 5:
        printf("31\n");
        break;
    case 6:
        printf("30\n");
        break;
    case 7:
        printf("31\n");
        break;
    case 8:
        printf("31\n");
        break;
    case 9:
        printf("30\n");
        break;
    case 10:
        printf("31\n");
        break;
    case 11:
        printf("30\n");
        break;
    case 12:
        printf("31\n");
        break;
    }
}

void area()
{
    printf("Calculate Area:\n1.Triangle\n2.Rectangle\n3.Circle\nEnter Option: ");
    int opt;
    double area, b, h;
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("Enter base and height: ");
        scanf("%lf %lf", &b, &h);
        area = 0.5 * b * h;
        printf("%lf\n", area);
        break;
    case 2:
        printf("Enter length and width: ");
        scanf("%lf %lf", &b, &h);
        area = b * h;
        printf("%lf\n", area);
        break;
    case 3:
        printf("Enter radius: ");
        scanf("%lf", &b);
        area = 3.14159 * b * b;
        printf("%lf\n", area);
        break;
    default:
        printf("Invalid option");
        break;
    }
}

void day()
{
    int num;
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Wednesday\n");
        break;
    case 6:
        printf("Thursday\n");
        break;
    case 7:
        printf("Friday\n");
        break;
    }
}

void profitLoss()
{
    {  
    int cost,sell; 
    printf("Input Cost Price: ");  
    scanf("%d", &cost);  
    printf("Input Selling Price: ");  
    scanf("%d", &sell);  
      
    if(sell>cost) 
    {  
        
        printf("profit amount : %d\n", sell - cost);  
    }  
    else if(cost>sell) 

    {  
        printf("loss of amount : %d\n", cost - sell);  
    }  
    else
    {  
        printf("No Profit and Loss\n");  
    }  
}
}

void ebill()
{
    int ID, unit;
    char c;
    double bill;
    scanf("%d %c %d", &ID, &c, &unit);
    if (unit <= 199)
    {
        bill = unit * 1.20;
    }
    else if (unit >= 200 && unit < 400)
    {
        bill = unit * 1.50;
    }
    else if (unit >= 400 && unit < 600)
    {
        bill = unit * 1.80;
    }
    else if (unit > 600)
    {
        bill = unit * 2.00;
    }

    if (bill > 400)
    {
        bill = bill * 0.15 + bill;
    }
    else if (bill < 100)
    {
        bill = 100;
    }

    printf("ID: %d\nName: %c\nBill: %lf\n", ID, c, bill);
}
void triangle()
{
    int side1, side2, side3;
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 == side2 && side1 == side3)
    {
        printf("Equilateral\n");
    }
    else if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2))
    {
        printf("Isosceles\n");
    }
    else if (side1 != side2 && side1 != side3 && side2 != side3)
    {
        printf("Scalene\n");
    }
}
void checkTriangle()
{
    double a, b, c;
    scanf("&lf &lf &lf", &a, &b, &c);
    if (a + b + c <= 180.00)
    {
        printf("Triangle possible\n");
    }
    else
    {
        printf("Triangle not possible\n");
    }
}
void checkAscii()
{
    char c;
    scanf("%c", &c);
    int ascii = c;
    if (ascii >= 48 && ascii <= 57)
    {
        printf("Number!\n");
    }
    else if (ascii >= 65 && ascii <= 122)
    {
        printf("Alphabet!\n");
    }
    else
    {
        printf("Special Char!\n");
    }
}
void checkVowc()
{
    char c;
    scanf("%c", &c);
    if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
}


void roots()
{
    {

    int a,b,c;
   printf("Input the value of a,b & c : ");
   scanf("%d%d%d",&a,&b,&c);
   int d=b*b-4*a*c;
   double root1, root2;
   if(d==0)
   {

     root1 =-b/(2.0*a);
     printf("Both roots are equal and roots are %lf\n",root1);

   }
   else if(d>0)
	{
	
	   root1=(-b+sqrt(d))/(2*a);
	   root2=(-b-sqrt(d))/(2*a);
	   printf("Roots are real \n First  Root Root1= %lf\n",root1);
	   printf("Second Root root2= %lf\n",root2);
	}
	else{
	    printf("Root are imaginary and No Solution. \n");
	}
}

}
int main()
{
    checkposneg();
    checkequal();
    checkAscii();
    checkeodd();
    checkleapyear();
    checkquad();
    checkTriangle();
    checkVowc();
    findlargen();
    month();
    monthdays();
    area();
    day();
    roots();
    profitLoss();
    triangle();
    roots();
    ebill();
    return 0;
}