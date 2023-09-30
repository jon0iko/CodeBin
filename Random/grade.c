#include<stdio.h>
int main()
{
    int marks[3],grade=0,i,sum=0,count,student,batch;
    for(batch=0; batch<4; batch++)
    {
        printf("\nbatch %d",batch+1);
        for(student=0; student<2; student++)  //counting for 2 student
        {

            for(i=0; i<3; i++) //counting for each
            {
                printf("\nenter your course marks:");
                scanf("%d",&marks[i]);
                for(count=0; count<3; count++)
                {
                    if(marks[count]>=0 && marks[count]<=40)
                    {
                        grade=1;
                    }
                    else if(marks[count]>40 && marks[count]<=60)
                    {
                        grade=2;
                    }
                    else if(marks[count]>60 && marks[count]<=80)
                    {

                        grade=3;
                    }
                    else if(marks[count]<80 && marks[count]<=100)
                    {
                        grade=4;
                    }


                    sum=sum+grade;
                    grade++;
                }


            printf("Total Grade for student%d is:%d",student+1,sum);
            sum=0;
            }
            printf("\nCGPA of student%d is:%d",student+1,sum/3);

        }




    }
}
