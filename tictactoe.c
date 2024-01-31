#include<stdio.h>
char a[10]={'0','1','2','3','4','5','6','7','8','9'};  //showboard boxes
void showboard();
int checkForWin();
int main()
{
    int player=1;
    int choice,i;
    char mark; //mark is x or o
    do{
        showboard();
        player=(player%2)?1:2;
        printf("%d",&choice);
        mark=(player==1)?'X':'O';
        if(choice==1 && a[i]=='1')
        a[1]=mark;
        else if(choice==2 && a[i]=='2')
        a[2]=mark;
        else if(choice==3 && a[i]=='3')
        a[3]=mark;
        else if(choice==4 && a[i]=='4')
        a[4]=mark;
        else if(choice==5 && a[i]=='5')
        a[5]=mark;
        else if(choice==6 && a[i]=='6')
        a[6]=mark;
        else if(choice==7 && a[i]=='7')
        a[7]=mark;
        else if(choice==8 && a[i]=='8')
        a[8]=mark;
        else if(choice==9 && a[i]=='9')
        a[9]=mark;
        else
        {
            printf("\nInvalid values");
            player--;
           
        }
      i=checkForWin();
      player++;
    }while(i==-1);
    showboard();
    if(i==-1)
    {
        printf("player %d won\n",player);
    }
    else{
        printf("game draw\n");
    }
    return 0;
}
void showboard()
{
    printf("\nTIC TAC TOE\n");
    printf("    |   |    \n");
    printf("    |   |    \n");
    printf(" %c |%c |%c  \n",a[1],a[2],a[3]);
    printf("____|___|____\n");
    printf("    |   |   \n");
    printf(" %c |%c |%c \n",a[4],a[5],a[6]);
    printf("    |   |   \n");
    printf("____|___|___\n");
    printf("    |   |   \n");
    printf(" %c |%c |%c \n",a[7],a[8],a[9]);
    printf("    |   |   \n");

}
checkForWin()
{
    if(a[1]==a[2]&&a[2]==a[3]) //for rows
    return 1;
    else if(a[4]==a[5]&&a[5]==a[6])
    return 1;
    else if(a[7]==a[8]&&a[8]==a[9])
    return 1;
    else if(a[1]==a[4]&&a[4]==a[7])//for columns
    return 1;
    else if(a[2]==a[5]&&a[5]==a[8])
    return 1;
    else if(a[3]==a[6]&&a[6]==a[9])
    return 1;
    else if(a[1]==a[5]&&a[5]==a[9])//for diogaonals
    return 1;
    else if(a[3]==a[5]&&a[5]==a[7])
    return 1;
    else if(a[1]=='1'&& a[2]=='2'&& a[3]=='3'&& a[4]=='4'&& a[5]=='5'&& a[6]=='6'&& a[7]=='7'&& a[8]=='8'&& a[9]=='9')
    return 0;
    else
    return -1;
}