#include <stdio.h>
struct st
{ char name[20];
  int batch;
};
void b1()
{printf("---------------Your Batch 1 Time Tabel---------------\n");
 printf("Day Order    8:00 - 9:40    9:45 - 11:30    11:35 - 12:30   12:30 - 3:10\n");
 printf("Day 1           MATH            PPS             LUNCH          PPS LAB\n");
 printf("Day 2          CME LAB        CME LAB           LUNCH            LANG\n");
 printf("Day 3           CHEM           MATH             LUNCH          NSS/NSO\n");
 printf("Day 4            -               -              LUNCH          CHEM LAB\n");
 printf("Day 5           CME             PPS             LUNCH            LANG\n");}
void b2()
{printf("\n---------------Your Batch 2 Time Tabel---------------\n");
 printf("Day Order    8:00 - 9:40    9:45 - 11:30    11:35 - 12:30   12:30 - 3:10\n");
 printf("Day 1           CME             PPS             LUNCH            LANG\n");
 printf("Day 2         CHEM LAB        CHEM LAB          LUNCH              -\n");
 printf("Day 3         NSS/NSO           MATH            LUNCH            CHEM\n");
 printf("Day 4            -              LANG            LUNCH           CME LAB\n");
 printf("Day 5         PPS LAB         PPS LAB           LUNCH              -\n");}
int main()
{ struct st s;
  printf("------------------Time Tabel Displayer------------------\n");
  printf("Enter the name of the Student : ");
  scanf("%s",s.name);
  printf("Batch :\nPress 1 - Batch 1\nPress 2 - Batch 2\nYour Batch no: ");
  scanf("%d",&s.batch);
  switch(s.batch)
  { case 1:
        b1();
        break;
    case 2:
        b2();
        break;
    default:
        printf("Invalid Choice\n");
        break;
  }
  printf("------------------Exiting the Program------------------");
  return 0;
}