#include <stdio.h>
#include <stdlib.h>

double courseGrade(double num) {

        if (num>=80.00) 
        return 4.00;
        else if (num>=75.00 && num<80.00)
        return 3.75;
         else if (num>=70.00 && num<75.00)
        return 3.5;
         else if (num>=65.00 && num<70.00)
        return 3.25;
         else if (num>=60.00 && num<65.00)
        return 3.00;
         else if (num>=55.00 && num<60.00)
        return 2.75;
         else if (num>=50.00 && num<55.00)
        return 2.5;
         else if (num>=45.00 && num<50.00)
        return 2.25;
         else if (num>=40.00 && num<45.00)
        return 2.00;
         else if (num<40.00)
        return 0.00;

}

double labGrade(double num) {

        if (num>=40) 
        return 4.00;
        else if (num>=35 && num<40)
        return 3.75;
         else if (num>=30 && num<35)
        return 3.5;
         else if (num>=25 && num<30)
        return 3.25;
         else if (num>=20 && num<25)
        return 3.00;
         else if (num>=15 && num<20)
        return 2.75;
         else if (num>=10 && num<15)
        return 2.5;
         else if (num<10)
        return 0.00;

}

int main() {
    double fcc,eee,math,chem,dm,fcclab,chemlab,eeelab;
    printf("Enter marks in this order:\nFCC EEE MATH CHEM DM FCCLAB CHEMLAB EEELAB\n");
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &fcc, &eee,&math,&chem,&dm,&fcclab,&chemlab,&eeelab);
    double cgpa = (courseGrade(fcc)*2+courseGrade(eee)*3+courseGrade(math)*3+courseGrade(chem)*3+courseGrade(dm)*3+labGrade(fcclab)*1.5+labGrade(eeelab)*1.5+labGrade(chemlab)*1.5)/18.50;
    printf("CGPA: %.2lf", cgpa);
    return 0;
}