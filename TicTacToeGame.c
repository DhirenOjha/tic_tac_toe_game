#include<stdio.h>
#include<stdlib.h>
void main()
{
int num,num2;
char a='_',b='_',c='_',d='_',e='_',f='_',g=' ',h=' ',i=' ';
int check=0;
printf("Tic-Tac-Toe Game\n");
printf("\t|\t |\t\n");
printf("________|________|________\n");
printf("\t|\t |\t\n");
printf("________|________|________\n");
printf("\t|\t |\t\n");
printf("\t|\t |\t\n");
printf("Player 1 uses- O\n");
printf("Player 2 uses- X\n");
printf("Positions-\n");
printf("\t|\t |\t\n");
printf("___1____|___2____|___3____\n");
printf("\t|\t |\t\n");
printf("___4____|___5____|___6____\n");
printf("\t|\t |\t\n");
printf("   7    |   8    |   9    \n");

for(;;)
{
    player1:{
    printf("Player 1's turn enter your mark at position-");
    scanf("%d",&num);

     if(num==1)
    {
        if(a=='O')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player1;
        }
        else if(a=='X')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player1;
        }
        else
        {
            check++;
            a='O';
        }
    }
    else if(num==2)
    {
        if(b=='O')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player1;
        }
        else if(b=='X')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player1;
        }
        else
        {
            check++;
            b='O';
        }
    }
    else if(num==3)
    {
        if(c=='O')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player1;
        }
        else if(c=='X')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player1;
        }
        else
        {
            check++;
            c='O';
        }
    }
    else if(num==4)
    {
        if(d=='O')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player1;
        }
        else if(d=='X')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player1;
        }
        else
        {
            check++;
            d='O';
        }
    }
    else if(num==5)
    {
        if(e=='O')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player1;
        }
        else if(e=='X')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player1;
        }
        else
        {
            check++;
            e='O';
        }
    }
    else if(num==6)
    {
        if(f=='O')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player1;
        }
        else if(f=='X')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player1;
        }
        else
        {
            check++;
            f='O';
        }
    }
    else if(num==7)
    {
        if(g=='O')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player1;
        }
        else if(g=='X')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player1;
        }
        else
        {
            check++;
            g='O';
        }
    }
    else if(num==8)
    {
        if(h=='O')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player1;
        }
        else if(h=='X')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player1;
        }
        else
        {
            check++;
            h='O';
        }
    }
    else if(num==9)
    {
        if(i=='O')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player1;
        }
        else if(i=='X')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player1;
        }
        else
        {
            check++;
            i='O';
        }
    }
    else
    {
        printf("Invalid Input\n");
        printf("Enter again\n");
        goto player1;
    }
    }

    printf("\t|\t |\t\n");
    printf("___%c____|___%c____|___%c____\n",a,b,c);
    printf("\t|\t |\t\n");
    printf("___%c____|___%c____|___%c____\n",d,e,f);
    printf("\t|\t |\t\n");
    printf("   %c    |   %c    |   %c    \n",g,h,i);

    if(a=='O' && e=='O' && i=='O')
    {
        printf("Player 1 wins");
        break;
    }
    else if(g=='O' && e=='O' && c=='O')
    {
        printf("Player 1 wins");
        break;
    }
    else if(a=='O' && b=='O' && c=='O')
    {
        printf("Player 1 wins");
        break;
    }
    else if(g=='O' && h=='O' && i=='O')
    {
        printf("Player 1 wins");
        break;
    }
    else if(a=='O' && d=='O' && g=='O')
    {
        printf("Player 1 wins");
        break;
    }
    else if(c=='O' && f=='O' && i=='O')
    {
        printf("Player 1 wins");
        break;
    }
        else if(d=='O' && e=='O' && f=='O')
    {
        printf("Player 1 wins");
        break;
    }
        else if(b=='O' && e=='O' && h=='O')
    {
        printf("Player 1 wins");
        break;
    }
    else
    {
        printf("Positions-\n");
        printf("\t|\t |\t\n");
        printf("___1____|___2____|___3____\n");
        printf("\t|\t |\t\n");
        printf("___4____|___5____|___6____\n");
        printf("\t|\t |\t\n");
        printf("   7    |   8    |   9    \n");

        if(check==9)
        {
            printf("It's a tie!");
            exit(0);
        }
        goto player2;
    }

       player2:{
    printf("Player 2's turn enter your mark at position-");
    scanf("%d",&num2);

    if(num2==1)
    {
        if(a=='X')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player2;
        }
        else if(a=='O')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player2;
        }
        else
        {
            check++;
            a='X';
        }
    }
    else if(num2==2)
    {
        if(b=='X')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player2;
        }
        else if(b=='O')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player2;
        }
        else
        {
            check++;
            b='X';
        }
    }
    else if(num2==3)
    {
        if(c=='X')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player2;
        }
        else if(c=='O')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player2;
        }
        else
        {
            check++;
            c='X';
        }
    }
    else if(num2==4)
    {
        if(d=='X')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player2;
        }
        else if(d=='O')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player2;
        }
        else
        {
            check++;
            d='X';
        }
    }
    else if(num2==5)
    {
        if(e=='X')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player2;
        }
        else if(e=='O')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player2;
        }
        else
        {
            check++;
            e='X';
        }
    }
    else if(num2==6)
    {
        if(f=='X')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player2;
        }
        else if(f=='O')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player2;
        }
        else
        {
            check++;
            f='X';
        }
    }
    else if(num2==7)
    {
        if(g=='X')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player2;
        }
        else if(g=='O')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player2;
        }
        else
        {
            check++;
            g='X';
        }
    }
    else if(num2==8)
    {
        if(h=='X')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player2;
        }
        else if(h=='O')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player2;
        }
        else
        {
            check++;
            h='X';
        }
    }
    else if(num2==9)
    {
        if(i=='X')
        {
            printf("Position marked by you\n");
            printf("Try again\n");
            goto player2;
        }
        else if(i=='O')
        {
        printf("Position taken\n");
        printf("Try Again\n");
        goto player2;
        }
        else
        {
            check++;
            i='X';
        }
    }
    else
    {
        printf("Invalid Input\n");
        printf("Enter again\n");
        goto player2;
    }
    }

    printf("\t|\t |\t\n");
    printf("___%c____|___%c____|___%c____\n",a,b,c);
    printf("\t|\t |\t\n");
    printf("___%c____|___%c____|___%c____\n",d,e,f);
    printf("\t|\t |\t\n");
    printf("   %c    |   %c    |   %c    \n",g,h,i);

    if(a=='X' && e=='X' && i=='X')
    {
        printf("Player 2 wins");
        break;
    }
    else if(g=='X' && e=='X' && c=='X')
    {
        printf("Player 2 wins");
        break;
    }
    else if(a=='X' && b=='X' && c=='X')
    {
        printf("Player 2 wins");
        break;
    }
    else if(g=='X' && h=='X' && i=='X')
    {
        printf("Player 2 wins");
        break;
    }
    else if(a=='X' && d=='X' && g=='X')
    {
        printf("Player 2 wins");
        break;
    }
    else if(c=='X' && f=='X' && i=='X')
    {
        printf("Player 2 wins");
        break;
    }
    else if(d=='X' && e=='X' && f=='X')
    {
        printf("Player 2 wins");
        break;
    }
    else if(b=='X' && e=='X' && h=='X')
    {
        printf("Player 2 wins");
        break;
    }
    else
    {
        printf("Positions-\n");
        printf("\t|\t |\t\n");
        printf("___1____|___2____|___3____\n");
        printf("\t|\t |\t\n");
        printf("___4____|___5____|___6____\n");
        printf("\t|\t |\t\n");
        printf("   7    |   8    |   9    \n");

        if(check==9)
        {
            printf("It's a tie!");
            exit(0);
        }
        goto player1;
    }
}
}
