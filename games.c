#include<stdio.h>
#include<unistd.h>
#include<dos.h>

int two(int no);
int three(int no);
int four(int no);
void handcricket(void);
void bat(void);
void bowl(void);
int main()
{
   int no;

   int choice;

   printf("Enter 1 for snake and ladder or 2 for hand cricket:");
   scanf("%d",&choice);

   if(choice ==2)
   {
    handcricket();
   }

   else
  {
   printf("Enter Number of Players(2 to 4):");
   scanf("%d",&no);

   if(no==2)
   {
    two(no);
   }

   else if(no==3)
   {
    three(no);
   }

   else if(no==4)
   {
    four(no);
   }
  }

   return 0;
}


int two(int no)
{
   int x1=0,x2=0,a,b;
   srand(time(0));


   char name1[50]={'\0'};
   char name2[50]={'\0'};


   printf("Player instructions:\n\n");
   printf("1.Snakes:\n");
   printf("a)From 99 to 26\n");
   printf("b)From 89 to 67\n");
   printf("c)From 73 to 12\n");
   printf("d)From 66 to 24\n");
   printf("e)From 59 to 46\n");
   printf("f)From 35 to 5\n");
   printf("g)From 27 to 7\n\n");



   printf("2.Ladders:\n");
   printf("a)From 28 to 77\n");
   printf("b)From 13 to 29\n");
   printf("c)From 30 to 32\n");
   printf("d)From 87 to 93\n");
   printf("e)From 70 to 90\n");
   printf("f)From 80 to 98\n\n\n");
///player instructions

   x1+=(rand()%6)+1;
   a=x1;
   x2+=(rand()%6)+1;
   b=x2;                        ///random no generator

   printf("\n\nEnter Player-1's Name:");
   scanf("%s",name1);

   printf("\n\nEnter Player-2's Name:");
   scanf("%s",name2);

   printf("\n\n");

   for(int i=100;i>0;i--)
   {
    if(i==91)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==71)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==81)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==61)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==51)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==41)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==31)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==21)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==11)
     {
      printf("%5d",i);
      printf("\n");
     }

     else
        printf("%5d",i);

   }


   printf("\n\n");


   player1:
   for( ; ; )
   {
    printf("%s:\n",name1);
    printf("You have rolled %d\n",a);

    if(x1==100)
   {
    printf("Congrats you are the winner %s\n\n",name1);
    goto end;
   }

   if(x1==99)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 26\n\n",x1);
    x1=26;
    goto end1;
   }

   if(x1==89)
   {
    printf("Oops! A snake has bitten youat %d. You are now at 67\n\n",x1);
    x1=26;
    goto end1;
   }


   if(x1==73)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 12\n\n",x1);
    x1=12;
    goto end1;
   }

   if(x1==59)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x1);
    x1=5;
    goto end1;
   }


   if(x1==27)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 7\n\n",x1);
    x1=7;
    goto end1;
   }

   if(x1==35)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x1);
    x1=5;
    goto end1;
   }

   if(x1==66)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 24\n\n",x1);
    x1=24;
    goto end1;
   }

   if(x1==28)
   {
    printf("Hooray! You have climbed from 28 to 77\n\n");
    x1=77;
    goto end1;
   }

   if(x1==13)
   {
    printf("Hooray! You have climbed from 13 to 29\n\n");
    x1=29;
    goto end1;
   }

   if(x1==30)
   {
    printf("Hooray! You have climbed from 30 to 32\n\n");
    x1=32;
    goto end1;
   }

   if(x1==87)
   {
    printf("Hooray! You have climbed from 87 to 93\n\n");
    x1=93;
    goto end1;
   }

   if(x1==70)
   {
    printf("Hooray! You have climbed from 70 to 90\n\n");
    x1=90;
    goto end1;
   }

   if(x1==80)
   {
    printf("Hooray! You have climbed from 80 to 98\n\n");
    x1=98;

    sleep(3);

    goto end1;
   }



   else
   {
    if(x1>100)
    {
     x1=x1-a;
     printf("You are now at %d again!\n\n",x1);
    }

     else
      printf("You are now at %d\n\n",x1);
   }

   end1:

   a=(rand()%6)+1;
   x1+=a;

   ///end of play for player 1

   sleep(3);


   goto player2;

  }



   player2:


   for( ; ; )
   {
    printf("%s:\n",name2);
    printf("You have rolled %d\n",b);

    if(x2==100)
   {
    printf("Congrats you are the winner %s",name2);
    goto end;
   }

   if(x2==99)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 26\n\n",x2);
    x2=26;
    goto end2;
   }

   if(x2==89)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 67\n\n",x2);
    x2=26;
    goto end2;
   }


   if(x2==73)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 12\n\n",x2);
    x2=12;
    goto end2;
   }

   if(x2==59)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x2);
    x2=5;
    goto end2;
   }


   if(x2==27)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 7\n\n",x2);
    x2=7;
    goto end2;
   }

   if(x2==35)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x2);
    x2=5;
    goto end2;
   }

   if(x2==66)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 24\n\n",x2);
    x2=24;
    goto end2;
   }

   if(x2==28)
   {
    printf("Hooray! You have climbed from 28 to 77\n\n");
    x2=77;
    goto end2;
   }

   if(x2==13)
   {
    printf("Hooray! You have climbed from 13 to 29\n\n");
    x2=29;
    goto end2;
   }

   if(x2==30)
   {
    printf("Hooray! You have climbed from 30 to 32\n\n");
    x2=32;
    goto end2;
   }

   if(x2==87)
   {
    printf("Hooray! You have climbed from 87 to 93\n\n");
    x2=93;
    goto end2;
   }

   if(x2==70)
   {
    printf("Hooray! You have climbed from 70 to 90\n\n");
    x2=90;
    goto end2;
   }

   if(x2==80)
   {
    printf("Hooray! You have climbed from 80 to 98\n\n");
    x2=98;
    goto end2;
   }



   else
   {
    if(x2>100)
    {
     x2=x2-b;
     printf("You are now at %d again!\n\n",x2);
     goto end2;
    }

     else
     {
      printf("You are now at %d\n\n",x2);
      goto end2;
     }

   }

   end2:
   b=(rand()%6)+1;
   x2+=b;

   sleep(3);

   ///end of play for player 2



   goto player1;

  }



   end:
       return 0;

}



int three(int no)
{
   int x1=0,x2=0,x3=0,a,b,c;
   srand(time(0));


   char name1[50]={'\0'};
   char name2[50]={'\0'};
   char name3[50]={'\0'};


   printf("Player instructions:\n\n");
   printf("1.Snakes:\n");
   printf("a)From 99 to 26\n");
   printf("b)From 89 to 67\n");
   printf("c)From 73 to 12\n");
   printf("d)From 66 to 24\n");
   printf("e)From 59 to 46\n");
   printf("f)From 35 to 5\n");
   printf("g)From 27 to 7\n\n");



   printf("2.Ladders:\n");
   printf("a)From 28 to 77\n");
   printf("b)From 13 to 29\n");
   printf("c)From 30 to 32\n");
   printf("d)From 87 to 93\n");
   printf("e)From 70 to 90\n");
   printf("f)From 80 to 98\n\n\n");
///player instructions

   x1+=(rand()%6)+1;
   a=x1;
   x2+=(rand()%6)+1;
   b=x2;
   x3+=(rand()%6)+1;
   c=x3;        ///random no generator

   printf("\n\nEnter Player-1's Name:");
   scanf("%s",name1);

   printf("\n\nEnter Player-2's Name:");
   scanf("%s",name2);

   printf("\n\nEnter Player-3's Name:");
   scanf("%s",name3);

   printf("\n\n");

   for(int i=100;i>0;i--)
   {
    if(i==91)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==71)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==81)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==61)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==51)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==41)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==31)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==21)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==11)
     {
      printf("%5d",i);
      printf("\n");
     }

     else
        printf("%5d",i);

   }


   printf("\n\n");


   player1:
   for( ; ; )
   {
    printf("%s:\n",name1);
    printf("You have rolled %d\n",a);

    if(x1==100)
   {
    printf("Congrats you are the winner %s\n\n",name1);
    goto end;
   }

   if(x1==99)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 26\n\n",x1);
    x1=26;
    goto end1;
   }

   if(x1==89)
   {
    printf("Oops! A snake has bitten youat %d. You are now at 67\n\n",x1);
    x1=26;
    goto end1;
   }


   if(x1==73)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 12\n\n",x1);
    x1=12;
    goto end1;
   }

   if(x1==59)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x1);
    x1=5;
    goto end1;
   }


   if(x1==27)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 7\n\n",x1);
    x1=7;
    goto end1;
   }

   if(x1==35)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x1);
    x1=5;
    goto end1;
   }

   if(x1==66)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 24\n\n",x1);
    x1=24;
    goto end1;
   }

   if(x1==28)
   {
    printf("Hooray! You have climbed from 28 to 77\n\n");
    x1=77;
    goto end1;
   }

   if(x1==13)
   {
    printf("Hooray! You have climbed from 13 to 29\n\n");
    x1=29;
    goto end1;
   }

   if(x1==30)
   {
    printf("Hooray! You have climbed from 30 to 32\n\n");
    x1=32;
    goto end1;
   }

   if(x1==87)
   {
    printf("Hooray! You have climbed from 87 to 93\n\n");
    x1=93;
    goto end1;
   }

   if(x1==70)
   {
    printf("Hooray! You have climbed from 70 to 90\n\n");
    x1=90;
    goto end1;
   }

   if(x1==80)
   {
    printf("Hooray! You have climbed from 80 to 98\n\n");
    x1=98;
    goto end1;
   }



   else
   {
    if(x1>100)
    {
     x1=x1-a;
     printf("You are now at %d again!\n\n",x1);
    }

     else
      printf("You are now at %d\n\n",x1);
   }

   end1:

   a=(rand()%6)+1;
   x1+=a;

   ///end of play for player 1

   sleep(3);


   goto player2;

  }



   player2:


   for( ; ; )
   {
    printf("%s:\n",name2);
    printf("You have rolled %d\n",b);

    if(x2==100)
   {
    printf("Congrats you are the winner %s",name2);
    goto end;
   }

   if(x2==99)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 26\n\n",x2);
    x2=26;
    goto end2;
   }

   if(x2==89)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 67\n\n",x2);
    x2=26;
    goto end2;
   }


   if(x2==73)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 12\n\n",x2);
    x2=12;
    goto end2;
   }

   if(x2==59)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x2);
    x2=5;
    goto end2;
   }


   if(x2==27)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 7\n\n",x2);
    x2=7;
    goto end2;
   }

   if(x2==35)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x2);
    x2=5;
    goto end2;
   }

   if(x2==66)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 24\n\n",x2);
    x2=24;
    goto end2;
   }

   if(x2==28)
   {
    printf("Hooray! You have climbed from 28 to 77\n\n");
    x2=77;
    goto end2;
   }

   if(x2==13)
   {
    printf("Hooray! You have climbed from 13 to 29\n\n");
    x2=29;
    goto end2;
   }

   if(x2==30)
   {
    printf("Hooray! You have climbed from 30 to 32\n\n");
    x2=32;
    goto end2;
   }

   if(x2==87)
   {
    printf("Hooray! You have climbed from 87 to 93\n\n");
    x2=93;
    goto end2;
   }

   if(x2==70)
   {
    printf("Hooray! You have climbed from 70 to 90\n\n");
    x2=90;
    goto end2;
   }

   if(x2==80)
   {
    printf("Hooray! You have climbed from 80 to 98\n\n");
    x2=98;
    goto end2;
   }



   else
   {
    if(x2>100)
    {
     x2=x2-b;
     printf("You are now at %d again!\n\n",x2);
     goto end2;
    }

     else
     {
      printf("You are now at %d\n\n",x2);
      goto end2;
     }

   }

   end2:
   b=(rand()%6)+1;
   x2+=b;

   ///end of play for player 2

   sleep(3);



   goto player3;

  }


   player3:

   for( ; ; )
   {
    printf("%s:\n",name3);
    printf("You have rolled %d\n",c);

    if(x3==100)
   {
    printf("Congrats you are the winner %s",name3);
    goto end;
   }

   if(x3==99)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 26\n\n",x3);
    x3=26;
    goto end3;
   }

   if(x3==89)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 67\n\n",x3);
    x3=26;
    goto end3;
   }


   if(x3==73)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 12\n\n",x3);
    x3=12;
    goto end3;
   }

   if(x3==59)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x3);
    x3=5;
    goto end3;
   }


   if(x3==27)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 7\n\n",x3);
    x3=7;
    goto end3;
   }

   if(x3==35)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x3);
    x3=5;
    goto end3;
   }

   if(x3==66)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 24\n\n",x3);
    x3=24;
    goto end3;
   }

   if(x3==28)
   {
    printf("Hooray! You have climbed from 28 to 77\n\n");
    x3=77;
    goto end3;
   }

   if(x3==13)
   {
    printf("Hooray! You have climbed from 13 to 29\n\n");
    x3=29;
    goto end3;
   }

   if(x3==30)
   {
    printf("Hooray! You have climbed from 30 to 32\n\n");
    x3=32;
    goto end3;
   }

   if(x3==87)
   {
    printf("Hooray! You have climbed from 87 to 93\n\n");
    x3=93;
    goto end3;
   }

   if(x3==70)
   {
    printf("Hooray! You have climbed from 70 to 90\n\n");
    x3=90;
    goto end3;
   }

   if(x3==80)
   {
    printf("Hooray! You have climbed from 80 to 98\n\n");
    x3=98;
    goto end3;
   }



   else
   {
    if(x3>100)
    {
     x3=x3-b;
     printf("You are now at %d again!\n\n",x3);
     goto end3;
    }

     else
     {
      printf("You are now at %d\n\n",x3);
      goto end3;
     }

   }

   end3:
   c=(rand()%6)+1;
   x3+=c;

   ///end of play for player 3

   sleep(3);



   goto player1;

  }



   end:
       return 0;
}





int four(int no)
{
   int x1=0,x2=0,x3=0,x4=0,a,b,c,d;
   srand(time(0));


   char name1[50]={'\0'};
   char name2[50]={'\0'};
   char name3[50]={'\0'};
   char name4[50]={'\0'};


   printf("Player instructions:\n\n");
   printf("1.Snakes:\n");
   printf("a)From 99 to 26\n");
   printf("b)From 89 to 67\n");
   printf("c)From 73 to 12\n");
   printf("d)From 66 to 24\n");
   printf("e)From 59 to 46\n");
   printf("f)From 35 to 5\n");
   printf("g)From 27 to 7\n\n");



   printf("2.Ladders:\n");
   printf("a)From 28 to 77\n");
   printf("b)From 13 to 29\n");
   printf("c)From 30 to 32\n");
   printf("d)From 87 to 93\n");
   printf("e)From 70 to 90\n");
   printf("f)From 80 to 98\n\n\n");
///player instructions

   x1+=(rand()%6)+1;
   a=x1;
   x4+=(rand()%6)+1;
   d=x4;
   x2+=(rand()%6)+1;
   b=x2;
   x3+=(rand()%6)+1;
   c=x3;        ///random no generator

   printf("\n\nEnter Player-1's Name:");
   scanf("%s",name1);

   printf("\n\nEnter Player-2's Name:");
   scanf("%s",name2);

   printf("\n\nEnter Player-3's Name:");
   scanf("%s",name3);

   printf("\n\nEnter Player-4's Name:");
   scanf("%s",name4);

   printf("\n\n");

   for(int i=100;i>0;i--)
   {
    if(i==91)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==71)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==81)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==61)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==51)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==41)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==31)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==21)
     {
      printf("%5d",i);
      printf("\n");
     }

     else if(i==11)
     {
      printf("%5d",i);
      printf("\n");
     }

     else
        printf("%5d",i);

   }


   printf("\n\n");


   player1:
   for( ; ; )
   {
    printf("%s:\n",name1);
    printf("You have rolled %d\n",a);

    if(x1==100)
   {
    printf("Congrats you are the winner %s\n\n",name1);
    goto end;
   }

   if(x1==99)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 26\n\n",x1);
    x1=26;
    goto end1;
   }

   if(x1==89)
   {
    printf("Oops! A snake has bitten youat %d. You are now at 67\n\n",x1);
    x1=26;
    goto end1;
   }


   if(x1==73)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 12\n\n",x1);
    x1=12;
    goto end1;
   }

   if(x1==59)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x1);
    x1=5;
    goto end1;
   }


   if(x1==27)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 7\n\n",x1);
    x1=7;
    goto end1;
   }

   if(x1==35)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x1);
    x1=5;
    goto end1;
   }

   if(x1==66)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 24\n\n",x1);
    x1=24;
    goto end1;
   }

   if(x1==28)
   {
    printf("Hooray! You have climbed from 28 to 77\n\n");
    x1=77;
    goto end1;
   }

   if(x1==13)
   {
    printf("Hooray! You have climbed from 13 to 29\n\n");
    x1=29;
    goto end1;
   }

   if(x1==30)
   {
    printf("Hooray! You have climbed from 30 to 32\n\n");
    x1=32;
    goto end1;
   }

   if(x1==87)
   {
    printf("Hooray! You have climbed from 87 to 93\n\n");
    x1=93;
    goto end1;
   }

   if(x1==70)
   {
    printf("Hooray! You have climbed from 70 to 90\n\n");
    x1=90;
    goto end1;
   }

   if(x1==80)
   {
    printf("Hooray! You have climbed from 80 to 98\n\n");
    x1=98;
    goto end1;
   }



   else
   {
    if(x1>100)
    {
     x1=x1-a;
     printf("You are now at %d again!\n\n",x1);
    }

     else
      printf("You are now at %d\n\n",x1);
   }

   end1:

   a=(rand()%6)+1;
   x1+=a;

   ///end of play for player 1

   sleep(3);


   goto player2;

  }



   player2:


   for( ; ; )
   {
    printf("%s:\n",name2);
    printf("You have rolled %d\n",b);

    if(x2==100)
   {
    printf("Congrats you are the winner %s",name2);
    goto end;
   }

   if(x2==99)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 26\n\n",x2);
    x2=26;
    goto end2;
   }

   if(x2==89)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 67\n\n",x2);
    x2=26;
    goto end2;
   }


   if(x2==73)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 12\n\n",x2);
    x2=12;
    goto end2;
   }

   if(x2==59)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x2);
    x2=5;
    goto end2;
   }


   if(x2==27)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 7\n\n",x2);
    x2=7;
    goto end2;
   }

   if(x2==35)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x2);
    x2=5;
    goto end2;
   }

   if(x2==66)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 24\n\n",x2);
    x2=24;
    goto end2;
   }

   if(x2==28)
   {
    printf("Hooray! You have climbed from 28 to 77\n\n");
    x2=77;
    goto end2;
   }

   if(x2==13)
   {
    printf("Hooray! You have climbed from 13 to 29\n\n");
    x2=29;
    goto end2;
   }

   if(x2==30)
   {
    printf("Hooray! You have climbed from 30 to 32\n\n");
    x2=32;
    goto end2;
   }

   if(x2==87)
   {
    printf("Hooray! You have climbed from 87 to 93\n\n");
    x2=93;
    goto end2;
   }

   if(x2==70)
   {
    printf("Hooray! You have climbed from 70 to 90\n\n");
    x2=90;
    goto end2;
   }

   if(x2==80)
   {
    printf("Hooray! You have climbed from 80 to 98\n\n");
    x2=98;
    goto end2;
   }



   else
   {
    if(x2>100)
    {
     x2=x2-b;
     printf("You are now at %d again!\n\n",x2);
     goto end2;
    }

     else
     {
      printf("You are now at %d\n\n",x2);
      goto end2;
     }

   }

   end2:
   b=(rand()%6)+1;
   x2+=b;

   ///end of play for player 1

   sleep(3);



   goto player3;

  }


   player3:

   for( ; ; )
   {
    printf("%s:\n",name3);
    printf("You have rolled %d\n",c);

    if(x3==100)
   {
    printf("Congrats you are the winner %s",name3);
    goto end;
   }

   if(x3==99)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 26\n\n",x3);
    x3=26;
    goto end3;
   }

   if(x3==89)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 67\n\n",x3);
    x3=26;
    goto end3;
   }


   if(x3==73)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 12\n\n",x3);
    x3=12;
    goto end3;
   }

   if(x3==59)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x3);
    x3=5;
    goto end3;
   }


   if(x3==27)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 7\n\n",x3);
    x3=7;
    goto end3;
   }

   if(x3==35)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x3);
    x3=5;
    goto end3;
   }

   if(x3==66)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 24\n\n",x3);
    x3=24;
    goto end3;
   }

   if(x3==28)
   {
    printf("Hooray! You have climbed from 28 to 77\n\n");
    x3=77;
    goto end3;
   }

   if(x3==13)
   {
    printf("Hooray! You have climbed from 13 to 29\n\n");
    x3=29;
    goto end3;
   }

   if(x3==30)
   {
    printf("Hooray! You have climbed from 30 to 32\n\n");
    x3=32;
    goto end3;
   }

   if(x3==87)
   {
    printf("Hooray! You have climbed from 87 to 93\n\n");
    x3=93;
    goto end3;
   }

   if(x3==70)
   {
    printf("Hooray! You have climbed from 70 to 90\n\n");
    x3=90;
    goto end3;
   }

   if(x3==80)
   {
    printf("Hooray! You have climbed from 80 to 98\n\n");
    x3=98;
    goto end3;
   }



   else
   {
    if(x3>100)
    {
     x3=x3-b;
     printf("You are now at %d again!\n\n",x3);
     goto end3;
    }

     else
     {
      printf("You are now at %d\n\n",x3);
      goto end3;
     }

   }

   end3:
   c=(rand()%6)+1;
   x3+=c;

   ///end of play for player 3

   sleep(3);



   goto player4;

  }

  player4:

   for( ; ; )
   {
    printf("%s:\n",name4);
    printf("You have rolled %d\n",d);

    if(x4==100)
   {
    printf("Congrats you are the winner %s",name4);
    goto end;
   }

   if(x4==99)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 26\n\n",x4);
    x4=26;
    goto end4;
   }

   if(x4==89)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 67\n\n",x4);
    x4=26;
    goto end4;
   }


   if(x4==73)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 12\n\n",x4);
    x4=12;
    goto end4;
   }

   if(x4==59)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x4);
    x4=5;
    goto end4;
   }


   if(x4==27)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 7\n\n",x3);
    x4=7;
    goto end4;
   }

   if(x4==35)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 5\n\n",x4);
    x4=5;
    goto end4;
   }

   if(x4==66)
   {
    printf("Oops! A snake has bitten you at %d. You are now at 24\n\n",x4);
    x4=24;
    goto end4;
   }

   if(x4==28)
   {
    printf("Hooray! You have climbed from 28 to 77\n\n");
    x4=77;
    goto end4;
   }

   if(x4==13)
   {
    printf("Hooray! You have climbed from 13 to 29\n\n");
    x4=29;
    goto end4;
   }

   if(x4==30)
   {
    printf("Hooray! You have climbed from 30 to 32\n\n");
    x4=32;
    goto end4;
   }

   if(x4==87)
   {
    printf("Hooray! You have climbed from 87 to 93\n\n");
    x4=93;
    goto end4;
   }

   if(x4==70)
   {
    printf("Hooray! You have climbed from 70 to 90\n\n");
    x4=90;
    goto end4;
   }

   if(x4==80)
   {
    printf("Hooray! You have climbed from 80 to 98\n\n");
    x4=98;
    goto end4;
   }



   else
   {
    if(x3>100)
    {
     x4=x4-d;
     printf("You are now at %d again!\n\n",x4);
     goto end4;
    }

     else
     {
      printf("You are now at %d\n\n",x4);
      goto end4;
     }

   }

   end4:
   d=(rand()%6)+1;
   x4+=d;

   ///end of play for player 4

   sleep(3);



   goto player1;

  }



   end:
       return 0;
}




void handcricket(void)
{
    printf("Welcome to the all new hand cricket game!\n");
   printf("The numbers allowed are 1 to 6\n");

   srand(time(0));

   int x1;
   int no;

   printf("Get ready for toss! Choose 0 for heads and 1 for tails:");
   scanf("%d",&no);

   x1+=(rand()%2);

   int toss;

   if(x1==no)
   {
    printf("Hooray! You have won the toss\n\n");
    printf("Enter 1 for batting and 2 for bowling:");
    scanf("%d",&toss);

    if(toss==1)
    {
     bat();
    }

    else if(toss=2)
    {
     bowl();
    }
   }

   else
   {
    printf("Oops! You have lost the toss\n\n");
    int t=(rand()%2)+1;

     if(t==1)
     {
      printf("You are going to bat first\n");
      bat();
     }

     else
     {
      printf("You are going to bowl first\n");
      bowl();
     }

    }
}




void bat(void)
{
   int n1=0,n2=0,x=0,y=0,ran;

   for( ; ; )
   {
    printf("Enter your number:");
    scanf("%d",&x);

    ran=(rand()%6)+1;

    if(x!=ran)
    {
     n1+=x;
     printf("Your score is %d\n",n1);
    }

    else
    {
     printf("Oops! You are out\n");
     printf("Your score is:%d\n\n",n1);
     break;
    }

    printf("\n\n");

   }

   printf("You are going to bowl now\n\n");

   for( ; ;  )
   {


    printf("Enter your number:");
    scanf("%d",&x);

    y=(rand()%6)+1;



    if(y!=x)
    {
     n2+=y;
     printf("The Computer has put %d\n",y);
     printf("The computer's score is %d\n",n2);
    }

    else if(n2>=(n1+1))
    {
     printf("The computer is the winner\n\n");
     break;
    }


    else if(y==x)
    {
     printf("The computer is out for %d\n\n",n2);
     if(n2<n1){
     printf("Hooray you are the winner!\n");}

     else{printf("The match is draw!");}
     break;
    }

    printf("\n\n");

   }
}










void bowl(void)
{
   printf("The Computer is going to bat first\n\n");

   int n1=0,n2=0,x=0,y=0;

   n1=(rand()%6)+1;
   y=n1;

   for( ; ; )
   {
    printf("Enter the number for bowling:");
    scanf("%d",&x);

    if(x!=y)
    {
     printf("The computer has put %d and %d is its score\n",y,n1);
    }

    else if(x==y)
    {
     printf("Bowled! You have taken the computer's wicket!\n");
     break;
    }

    printf("\n\n");

    y=(rand()%6)+1;
    n1+=y;
   }

   for( ; ; )
   {
    printf("Enter the number for batting:");
    scanf("%d",&x);

    y=(rand()%6)+1;

    if(x!=y)
    {
     n2+=x;
     printf("Your score is now %d\n",n2);
    }

    else if(n2>=(n1+1))
    {
     if(n2>n1){
     printf("Hooray you are the winner!\n");}

     else{printf("The match is draw!");}
     break;
    }

    else if(x==y)
    {
     printf("You are out! The computer has won\n");
     break;
    }

    printf("\n\n");


   }
}

