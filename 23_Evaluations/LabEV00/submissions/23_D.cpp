//23
//23
//23
#include <stdio.h>

int main()
{
    int basic, house, med;
    double yearBasic, yearHouse, yearMed, taxable, tax, temp;
    scanf("%d %d %d", &basic, &house, &med);
    yearBasic = (double)basic * 12.00;
    // yearHouse = ((double)house - (0.5 * (double)basic)) * 12.00;
    if (house >= basic/2)
    {
        yearHouse= ((double)house - (0.5 * (double)basic)) * 12.00;
    } else {
        yearHouse = 0;
    }
    yearMed = (double)med * 12.00;
    if (yearMed > 60000)
    {
        taxable = yearBasic + yearHouse + (yearMed - 60000);
    }
    else
    {
        taxable = yearBasic + yearHouse;
    }

    printf("Annual Taxable Income: %0.2lf\n", taxable);

    double etax;

    if (taxable <= 200000.00)
    {
        tax = 0.00;
    }
    else if (taxable <= 300000.00)
    {
        etax = taxable - 200000;
        tax = etax * 0.10;
    }
    else if (taxable <= 800000.00)
    {
        etax = taxable - 300000;
        tax = 0.15 * etax + 0.1 * 100000;
    }
    else if (taxable <= 1800000.00)
    {
        etax = taxable - 800000;
        tax = 0.20 * etax + 0.10 * 100000 + 0.15*500000;
    }
    else if (taxable <= 4800000.00)
    {
        etax = taxable - 1800000;   
        tax = 0.25 * etax + 0.1* 1000000 + 0.15*500000 + 0.20 * 1000000;
    }
    else if (taxable > 4800000.00)
    {
        etax = taxable - 4800000;
        tax = 0.30 * etax +  0.1* 1000000 + 0.15*500000 + 0.20 * 1000000 + 0.25 * 3000000;
    }

    printf("Annual Tax: %0.2lf\n", tax);

    return 0;
}