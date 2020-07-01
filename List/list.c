#include<stdio.h>
#include<stdlib.h>
int list[10],n;
void create();
void insert();
void delect();
void display();
void search();

void create()
{
   int i;
   printf("Enter the no of elements:");
   scanf("%d",&n);

   printf("Enter the elements:");
   for(i=0;i<n;i++)
   {
      scanf("%d",&list[i]);
   }
}

void insert()
{
   int ele;
   printf("Enter the number to be inserted");
   scanf("%d",&ele);
   list[n++]=ele;
}

void delect()
{
   int ele,i;
   printf("Enter the element want to be delected");
   scanf("%d",&ele);
   for(i=0;i<n;i++)
   {
      if(list[i]==ele)
      {
         list[i]=0;
         break;
      }
   }
}

void display()
{
   int i;
   printf("The elements are:");
   for(i=0;i<n;i++)
   {
      printf("%d\n",list[i]);
   }
}

void search()
{
   int i,ele,c=0;
   printf("Enter the elements to be search:");
   scanf("%d",&ele);
   for(i=0;i<n;i++)
   {
      if(list[i]==ele)
      {
         printf("The elements found at:%d",i+1);
         c=1;
         break;
      }
      
   }
   if(c==0)
   {
      printf("No such elements");
   }
}
void main()
{
   int ch;
   do
   {
      printf("\n List operation");
      printf("\n 1.create \n 2.Insert \n 3.Delect \n 4.Display \n 5.search \n 6.Exit");


      printf("Enter your choice:");
      scanf("%d",&ch);

      switch(ch)
      {
         case 1:
            create();
            break;
         case 2:
            insert();
            break;
         case 3:
            delect();
            break;
         case 4:
            display();
            break;
         case 5:
            search();
            break;
         case 6:exit(0);
         default:
            printf("No such option");         
      }
   } 
   while (ch!=6);


}
