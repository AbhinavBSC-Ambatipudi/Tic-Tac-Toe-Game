#include<stdio.h>

int a[3][3] , i , j ;
char name1[20] , name2[20] ;
int p1w , p2w ;

void save_table()
{
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            a[i][j]='_';
        }
    }
}

void print_table()
{
    int i , j ;
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%c\t", a[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");
}

void player1()
{
    int pos , z ;
    printf("Enter a position %s : \n", name1);
    scanf("%d", &pos);
    printf("\n");

    if(pos == 1)
    {
        if(a[0][0] == 88 || a[0][0] == 79)
        {
            printf("enter a valid position \n");
            player1();
        }
        else
        {
            a[0][0] = 88 ;
        }
    }

    else if(pos == 2)
    {
       if(a[0][1] == 88 || a[0][1] == 79)
        {
            printf("enter a valid position \n");
            player1();
        }
        else
        {
            a[0][1] = 88 ;
        }
    }

    else if(pos == 3)
    {
        if(a[0][2] == 88 || a[0][2] == 79)
        {
            printf("enter a valid position \n");
            player1();
        }
        else
        {
            a[0][2] = 88 ;
        }
    }

    else if(pos == 4)
    {
        if(a[1][0] == 88 || a[1][0] == 79)
        {
            printf("enter a valid position \n");
            player1();
        }
        else
        {
            a[1][0] = 88 ;
        }
    }

    else if(pos == 5)
    {
        if(a[1][1] == 88 || a[1][1] == 79)
        {
            printf("enter a valid position \n");
            player1();
        }
        else
        {
            a[1][1] = 88 ;
        }
    }

    else if(pos == 6)
    {
        if(a[1][2] == 88 || a[1][2] == 79)
        {
            printf("enter a valid position \n");
            player1();
        }
        else
        {
            a[1][2] = 88 ;
        }
    }

    else if(pos == 7)
    {
        if(a[2][0] == 88 || a[2][0] == 79)
        {
            printf("enter a valid position \n");
            player1();
        }
        else
        {
            a[2][0] = 88 ;
        }
    }

    else if(pos == 8)
    {
        if(a[2][1] == 88 || a[2][1] == 79)
        {
            printf("enter a valid position \n");
            player1();
        }
        else
        {
            a[2][1] = 88 ;
        }
    }

    else if(pos == 9)
    {
        if(a[2][2] == 88 || a[2][2] == 79)
        {
            printf("enter a valid position \n");
            player1();
        }
        else
        {
            a[2][2] = 88 ;
        }
    }

    else
    {
        printf("Enter correct choice \n");
        player1();
    }
}

void player2()
{
    int pos ;
    printf("Enter a position %s : \n", name2);
    scanf("%d", &pos);
    printf("\n");

    if(pos == 1)
    {
        if(a[0][0] == 88 || a[0][0] == 79)
        {
            printf("enter a valid position  \n");
            player2();
        }
        else 
        {
            a[0][0] = 79 ;
        }
    }

    else if(pos == 2)
    {
        if(a[0][1] == 88 || a[0][1] == 79)
        {
            printf("enter a valid position  \n");
            player2();
        }
        else 
        {
            a[0][1] = 79 ;
        }
    }

    else if(pos == 3)
    {
        if(a[0][2] == 88 || a[0][2] == 79)
        {
            printf("enter a valid position \n");
            player2();
        }
        else 
        {
            a[0][2] = 79 ;
        }
    }

    else if(pos == 4)
    {
        if(a[1][0] == 88 || a[1][0] == 79)
        {
            printf("enter a valid position \n");
            player2();
        }
        else 
        {
            a[1][0] = 79 ;
        }
    }

    else if(pos == 5)
    {
        if(a[1][1] == 88 || a[1][1] == 79)
        {
            printf("ente a valid position \n");
            player2();
        }
        else 
        {
            a[1][1] = 79 ;
        }
    }

    else if(pos == 6)
    {
        if(a[1][2] == 88 || a[1][2] == 79)
        {
            printf("enter a valid position \n");
            player2();
        }
        else 
        {
            a[1][2] = 79 ;
        }
    }

    else if(pos == 7)
    {
        if(a[2][0] == 88 || a[2][0] == 79)
        {
            printf("enter a valid position \n");
            player2();
        }
        else 
        {
            a[2][0] = 79 ;
        }
    }

    else if(pos == 8)
    {
        if(a[2][1] == 88 || a[2][1] == 79)
        {
            printf("enter a valid position \n");
            player2();
        }
        else 
        {
            a[2][1] = 79 ;
        }
    }

    else if(pos == 9)
    {
        if(a[2][2] == 88 || a[2][2] == 79)
        {
            printf("enter a valid position \n");
            player2();
        }
        else 
        {
            a[2][2] = 79 ;
        }
    }

    else
    {
        printf("Enter correct choice \n");
        player2();
    }
}

void winning_condition()
{
    int i , j ;
    int hx1=0 , hx2=0 , hx3=0 ;
    int vx1=0 , vx2=0 , vx3=0 ;
    int ho1=0 , ho2=0 , ho3=0 ;
    int vo1=0 , vo2=0 , vo3=0 ;
    int dx1=0 , dx2=0 , do1=0 , do2=0 ;

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            if(a[i][j] == 'X')
            {
                if(i==0 && (j==0||j==1||j==2))
                {
                    hx1++;
                }
                    
                if(i==1 && (j==0||j==1||j==2))
                {
                    hx2++;
                }
                   
                if(i==2 && (j==0||j==1||j==2))
                {
                    hx3++;
                }

                if(j==0 && (i==0||i==1||i==2))
                {
                    vx1++;
                }
                    
                if(j==1 && (i==0||i==1||i==2))
                {
                    vx2++;
                }
                  
                if(j==2 && (i==0||i==1||i==2))
                {
                    vx3++;
                }

                if(i==j)
                {
                    dx1++;
                }

                if(i+j==2)
                {
                    dx2++;
                }
            }

            else if(a[i][j] == 'O')
            {
                if(i==0 && (j==0||j==1||j==2))
                {
                    ho1++;
                }
                    
                if(i==1 && (j==0||j==1||j==2))
                {
                    ho2++;
                }
                   
                if(i==2 && (j==0||j==1||j==2))
                {
                    ho3++;
                }

                if(j==0 && (i==0||i==1||i==2))
                {
                    vo1++;
                }
                   
                if(j==1 && (i==0||i==1||i==2))
                {
                    vo2++;
                }
                   
                if(j==2 && (i==0||i==1||i==2))
                {
                    vo3++;
                }

                if(i==j)
                {
                    do1++;
                }

                if(i+j==2)
                {
                    do2++;
                }
            }
        }
    }

    if(hx1==3 || hx2==3 || hx3==3 || vx1==3 || vx2==3 || vx3==3 || dx1==3 || dx2==3)
    {
        p1w = 1;
    }
            
    else if(ho1==3 || ho2==3 || ho3==3 || vo1==3 || vo2==3 || vo3==3 || do1==3 || do2==3)          
    {
        p2w = 1 ;
    }
}

void swap1()
{
    int opos , npos ;
    int *p , temp ;
    printf("%s swap : \n",name1);
    printf("old position = \t");
    scanf("%d", &opos);
    printf("new position = \t");
    scanf("%d", &npos);
    p=&a[0][0];

    if(opos != npos)
    { 
        if(*(p + opos - 1) == 'X')
        {
            p = &a[0][0];

            if(*(p + npos - 1) != 'X' && *(p + npos - 1) !='O')
            {
                if(opos == 1)
                {       
                    if(npos == 2 || npos == 4 || npos == 5)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }

                    else
                    {
                        printf("enter adjacent position only\n");
                        swap1();
                    }
                }
            
                else if(opos == 2)
                {       
                    if(npos == 1 || npos == 3 || npos == 5)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }
                
                    else
                    {
                        printf("enter adjacent position only\n");
                        swap1();
                    }
                }    

                else if(opos == 3)
                {       
                    if(npos == 2 || npos == 5 || npos == 6)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }

                    else
                    {
                        printf("enter adjacent position only\n");
                        swap1();
                    }
                }

                else if(opos == 4)
                {       
                    if(npos == 1 || npos == 5 || npos == 7)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }
                
                    else
                    {
                        printf("enter adjacent position only\n");
                        swap1();
                    }
                }

                else if(opos == 5)
                {
                    temp = *(p + opos - 1);
                    *(p + opos - 1) = *(p + npos - 1);
                    *(p + npos - 1) = temp;
                }
    
                else if(opos == 6)
                {       
                    if(npos == 3 || npos == 5 || npos == 9)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }
                
                    else
                    {
                        printf("enter adjacent position only\n");
                        swap1();
                    }
                }
            
                else if(opos == 7)
                {       
                    if(npos == 4 || npos == 5 || npos == 8)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }
                
                    else
                    {
                        printf("enter adjacent position only\n");
                        swap1();
                    }
                }

                else if(opos == 8)
                {       
                    if(npos == 7 || npos == 5 || npos == 9)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }
                
                    else
                    {
                        printf("enter adjacent position only\n");
                        swap1();
                    }
                }

                else if(opos == 9)
                {       
                    if(npos == 6 || npos == 5 || npos == 8)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }
                
                    else
                    {
                        printf("enter adjacent position only\n");
                        swap1();
                    }
                }

                else
                {
                    printf("Enter correct choice \n");
                    swap1();
                }
            }

            else
            {
                printf("\nenter valid position \n\n");
                swap1();
            }
        }

        else
        {
            printf("\nenter valid position \n\n");
            swap1();
        }
    }

    else
    {
        printf("\nBoth positions are same \n\n");
        swap1();
    }
    printf("\n");
}

void swap2()
{
    int opos , npos ;
    int *p , temp ;
    printf("%s swap : \n",name2);
    printf("old position = \t");
    scanf("%d", &opos);
    printf("new position = \t");
    scanf("%d", &npos);
    p=&a[0][0];

    if(opos != npos)
    { 
        if(*(p + opos - 1) == 'O')
        {
            p = &a[0][0];

            if(*(p + npos - 1) != 'X' && *(p + npos - 1) !='O')
            {
                if(opos == 1)
                {       
                    if(npos == 2 || npos == 4 || npos == 5)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }

                    else
                    {
                        printf("enter adjacent position only\n");
                        swap2();
                    }
                }
            
                else if(opos == 2)
                {       
                    if(npos == 1 || npos == 3 || npos == 5)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }
                
                    else
                    {
                        printf("enter adjacent position only\n");
                        swap2();
                    }
                }    

                else if(opos == 3)
                {       
                    if(npos == 2 || npos == 5 || npos == 6)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }

                    else
                    {
                        printf("enter adjacent position only\n");
                        swap2();
                    }
                }

                else if(opos == 4)
                {       
                    if(npos == 1 || npos == 5 || npos == 7)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }
                
                    else
                    {
                        printf("enter adjacent position only\n");
                        swap2();
                    }
                }

                else if(opos == 5)
                {
                    temp = *(p + opos - 1);
                    *(p + opos - 1) = *(p + npos - 1);
                    *(p + npos - 1) = temp;
                }
    
                else if(opos == 6)
                {       
                    if(npos == 3 || npos == 5 || npos == 9)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }
                
                    else
                    {
                        printf("enter adjacent position only\n");
                        swap2();
                    }
                }
            
                else if(opos == 7)
                {       
                    if(npos == 4 || npos == 5 || npos == 8)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }
                
                    else
                    {
                        printf("enter adjacent position only\n");
                        swap2();
                    }
                }

                else if(opos == 8)
                {       
                    if(npos == 7 || npos == 5 || npos == 9)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }
                
                    else
                    {
                        printf("enter adjacent position only\n");
                        swap2();
                    }
                }

                else if(opos == 9)
                {       
                    if(npos == 6 || npos == 5 || npos == 8)
                    {
                        temp = *(p + opos - 1);
                        *(p + opos - 1) = *(p + npos - 1);
                        *(p + npos - 1) = temp;
                    }
                
                    else
                    {
                        printf("enter adjacent position only\n");
                        swap2();
                    }
                }

                else
                {
                    printf("Enter correct choice \n");
                    swap2();
                }
            }
            
            else
            {
                printf("\nenter valid position \n\n");
                swap2();
            }
        }

        else
        {
            printf("\nenter valid position \n\n");
            swap2();
        }
    }

    else
    {
        printf("\nBoth positions are same \n\n");
        swap2();
    }
    printf("\n");
}

void main()
{
    int i , j , k = 1 ;
    printf("\nWelcome to the game of TIC-TAC-TOE \n\n");
    printf("Player1 Enter your name : \t");
    gets(name1);
    printf("Player2 Enter your name : \t");
    gets(name2);
    printf("\n");
    printf("%s plays for X\t %s plays for O \n\n", name1, name2);
    printf("Let the game begin...... \n\n");

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d\t", k++);
        }
        printf("\n");
    }
    printf("\n");

    save_table();

    player1();
    print_table();
    player2();
    print_table();
    player1();
    print_table();
    player2();
    print_table();
    player1();
    print_table();

    winning_condition();
    
    if(p1w != 1)
    {
        player2();
        print_table();
        winning_condition();

        for(i = 0 ; i < 100 ; i++)
        {
            if(p2w == 1)
            {
                printf("%s ur the winner\n\n", name2);
                break;
            }
                
            else if(p1w == 1)
            {
                printf("%s ur the winner\n\n", name1);
                break;
            }

            else 
            {
                swap1();
                print_table();
                winning_condition();

                if(p1w != 1)
                {
                    swap2();
                    print_table();
                    winning_condition();
                }
            }
        }
    }

    else if(p1w == 1)
    {
        printf("%s ur the winner\n\n", name1);
    } 
}