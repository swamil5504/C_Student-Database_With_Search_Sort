#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int rollNo;
    int marks;
};

void accept(struct student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter Student details:\n");
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
}

void display(struct student students[], int n) {
    printf("Name\t\tRollNo\tMarks\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t\t%d\t%d\n", students[i].name, students[i].rollNo, students[i].marks);
    }
}

void bucket(struct student students[5], int n)
{
	int i,j,max=100;
	int bucket[max];
	for(i=0;i<max;i++)
	{
		bucket[i]=0;
	}
	for(j=0;j<n;j++)
	{
		bucket[students[j].marks]++;
	}
	for(i=0,j=0;i<max;i++)
	{
		for(;bucket[i]>0;--bucket[i])
		{
			students[j].marks=i;
			j++;
		}
		if (j==n)
			break;
	}
	display(students,n);
}
  
  void radix(struct student students[5],int n){
    int large,pass,div,bktno,i,j,k,count[10],bkt[20][20];
    large=students[0].marks;
     for(i=0;i<n;i++)
     {
      if(students[i].marks>large)
      {
       large = students[i].marks;
      }
     }
     pass = 0;
     while(large>0)
     {
      pass++;
      large = large/10;
     }
     div = 1;
      for(i=1;i<=pass;i++)
      {
       for(j=0;j<=9;j++)
       {
        count[j] = 0;
       }
       for(j=0;j<n;j++)
       {
        bktno = (students[j].marks/div)%10;
        bkt[bktno][count[bktno]]=students[j].marks;
        count[bktno]++;
       }
       j = 0;
        for(bktno=0;bktno<=9;bktno++)
        {
         for(k=0;k<count[bktno];k++)
         {
          students[j].marks = bkt[bktno][k];
          j++;
         }
        }
        div = div*10;
      }
       display(students,n);
  }
  
  int main(){
   
   struct student students[5];
   int N,choice,rn;
   
   printf("Enter Number of students: ");
   scanf("%d",&N);
   accept(students,N);
   display(students,N);
   
   do{
     printf("\nChoose the operation to be performed:\n");
     printf("1. Bucket Sort\n2. Radix Sort\n3. Exit\n");
     scanf("%d",&choice);
   
   switch(choice){
                case 1:
	            printf("Bucket Sort:\n");
	            bucket(students,N);
	            break;
	        case 2:
	            printf("Radix Sort:\n");
	            radix(students,N);
	            break;	      
	        case 3:
	        exit(0);
	        
	        default:
	        printf("Wrong Choice!!");
	    }
   }while(choice!=3);
   return 0;
  }
  
  


