#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct ticket{
    char name[40];
    char ph[11];
    char email[50];
    char gender[7];
    int age;
    char date[15];
    char seat_no[10];
    float price;
    char destination [40];
}passenger;

FILE *fp, *ft;
int i,found,ch,chk,num,choice,pass;

void about();
//void buy();
//void time_schedule();
//void ticket_price();
//void buy_ticket();



int main()
{
    /* -------------- Main menu -------------- */
    home:
    system("cls");
    printf("\n\t\t**-----------------------------------------****");
    printf("\n\t\t  --* WELCOME TO KAMLAPUR RAILWAY STATION *--");
    printf("\n\t\t****-----------------------------------------**\n\n");
    printf("\t\t[1] HOME PAGE\n");
    printf("\t\t[2] ABOUT Kamlapur RAILWAY\n");
    printf("\t\t[3] TIME SCHEDULE & TICKET PRICE\n");
    printf("\t\t[4] BUY TICKET\n");
    printf("\t\t[5] SEE ALL TICKET\n");
    printf("\t\t[0] EXIT\n");
    printf("\n\t\t------------------------------------------------\n\n");
    printf("\n\tEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            goto home;
            break;

        case 2:
            /* -------------- ABOUT Kamlapur RAILWAY-------------- */
            system("cls");
            printf("\n\t\t\t\t  --- ABOUT Kamlapur RAILWAY ---");
            printf("\n\t\t------------------------------------------------\n\n\n\n");
            printf("\n\t Kamlapur Railway Station is the central railway station in Dhaka, Bangladesh.\n\n The station is the largest in the country and the most important terminal for transportation between Dhaka and the rest of Bangladesh.\n It is also one of the most modern and striking buildings in Dhaka designed by American architect Robert Boughey. The railway station situated in the north-east side of Motijheel, was established in the early 1960s and started its operation from 1969.\n");
            printf(" \nThere are 47 local trains, 28 express trains and 24 inter-city trains going through the station,\n and normally around 50 trains a day.\n");
            printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
            scanf("%d",&ch);
            switch (ch){
                case 1:
                    goto home;
                case 0:
                    break;
                default:
                    printf("Invalid Choice !");
                    break;
            }
            break;
             /* -------------- ABOUT RAILWAY END-------------- */

            case 3:
                /* -------------- TIME SHEDULE START-------------- */
                system("cls");
                printf("\n\t\t\t --- TIME SHEDULE & TICKET PRICE ---\n");
                printf("\n\t\t------------------------------------------------\n\n\n\n");
                printf("\t\t1.Dhaka to Rajshahi\n");
                printf("\t\t2.Dhaka to Chittagong\n");
                printf("\t\t3.Dhaka to Khulna\n");
                printf("\t\t4.Dhaka to Rangpur\n");
                printf("\t\t5.Dhaka to Sylhet\n");
                printf("\t\t6.Dhaka to Comilla\n");
                printf("\t\t7.Dhaka to India\n");
                printf("\t\t0.Home Page\n");
                printf("\n\t\t------------------------------------------------\n\n");
                printf("\n\tEnter your choice: \n");
                scanf("%d",&chk);
                switch(chk){
                    case 0:
                        goto home;
                        break;
                    case 1:
                        printf("\t\t1.Silk city express\n");
                        printf("\t\t2.Padma Express\n");
                        printf("\t\t3.Dhumketue Express\n");
                        printf("\n\tEnter your choice:\n");
                        scanf("%d",&num);
                        switch(num){
                            case  1:
                              printf("\t\tTrain number 753\n");
                              printf("\t\tWeekly off day ----->	Sunday.\n");
                              printf("\t\tDeparture Time--->14:40\n");
                              printf("\t\tArrival Time--->21:05\n");
                              printf("\t\tPlatform number---->05\n");
                              printf("\t\tTicket Price---->360 TK Only\n");
                                                  printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                    scanf("%d",&ch);
                                    switch (ch){
                                        case 1:
                                            goto home;
                                        case 0:
                                            break;
                                        default:
                                            printf("Invalid Choice !");
                                            break;
                                    }
                              break;

                            case 2:
                                printf("\t\tTrain number 759\n");
                                printf("\t\tWeekly off day ----->Tuesday.\n");
                                printf("\t\tDeparture Time--->23:10\n");
                                printf("\t\tArrival Time--->4:50\n");
                                printf("\t\tPlatform number---->01\n");
                                printf("\t\tTicket Price---->360 TK Only\n");
                                                printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                scanf("%d",&ch);
                                switch (ch){
                                    case 1:
                                        goto home;
                                    case 0:
                                        break;
                                    default:
                                        printf("Invalid Choice !");
                                        break;
                                }
                                break;

                            case 3:
                                  printf("\t\tTrain number 769\n");
                                  printf("\t\tWeekly off day ----->Saturday.\n");
                                  printf("\t\tDeparture Time--->6:00\n");
                                  printf("\t\tArrival Time--->11:50\n");
                                  printf("\t\tPlatform number---->03\n");
                                  printf("\t\tTicket Price---->360 TK Only\n");
                                                  printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                scanf("%d",&ch);
                                switch (ch){
                                    case 1:
                                        goto home;
                                    case 0:
                                        break;
                                    default:
                                        printf("Invalid Choice !");
                                        break;
                                }
                                  break;
                        }
                        break;

                    case 2:
                         printf("\t\t1.Subarna Express\n");
                         printf("\t\t2.Mohanagar Provati\n");
                         printf("\t\t3.Mohanagar Express\n");
                         printf("\t\t4.Turna Express\n");
                         printf("\n\tEnter your choice: \n");
                        scanf("%d",&num);
                        switch(num){
                            case 1:
                                  printf("\t\tTrain number 702\n");
                                  printf("\t\tWeekly off day ----->Friday.\n");
                                  printf("\t\tDeparture Time--->15:00\n");
                                  printf("\t\tArrival Time--->20:30 \n");
                                  printf("\t\tPlatform number---->04\n");
                                   printf("\t\tTicket Price---->450 TK Only\n");
                                                      printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                    scanf("%d",&ch);
                                    switch (ch){
                                        case 1:
                                            goto home;
                                        case 0:
                                            break;
                                        default:
                                            printf("Invalid Choice !");
                                            break;
                                    }
                                  break;

                            case 2:
                                  printf("\t\tTrain number 704\n");
                                  printf("\t\tWeekly off day ----->NO.\n");
                                  printf("\t\tDeparture Time--->07:45\n");
                                  printf("\t\tArrival Time--->14:55\n");
                                  printf("\t\tPlatform number---->06\n");
                                  printf("\t\tTicket Price---->450 TK Only\n");
                                  printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                        scanf("%d",&ch);
                                        switch (ch){
                                            case 1:
                                                goto home;
                                            case 0:
                                                break;
                                            default:
                                                printf("Invalid Choice !");
                                                break;
                                        }
                                  break;

                                case 3:
                                  printf("\t\tTrain number 722\n");
                                  printf("\t\tWeekly off day ----->Sunday.\n");
                                  printf("\t\tDeparture Time--->21:00\n");
                                  printf("\t\tArrival Time--->5:00 \n");
                                  printf("\t\tPlatform number---->01\n");
                                  printf("\t\tTicket Price---->450 TK Only\n");
                                  printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                    scanf("%d",&ch);
                                    switch (ch){
                                        case 1:
                                            goto home;
                                        case 0:
                                            break;
                                        default:
                                            printf("Invalid Choice !");
                                            break;
                                    }
                                  break;

                                case 4:
                                  printf("\t\tTrain number 742\n");
                                  printf("\t\tWeekly off day ----->NO.\n");
                                  printf("\t\tDeparture Time--->23:30\n");
                                  printf("\t\tArrival Time--->7:30 \n");
                                  printf("\t\tPlatform number---->05\n");
                                  printf("\t\tTicket Price---->450 TK Only\n");
                                  printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                            scanf("%d",&ch);
                                            switch (ch){
                                                case 1:
                                                    goto home;
                                                case 0:
                                                    break;
                                                default:
                                                    printf("Invalid Choice !");
                                                    break;
                                            }
                                  break;
                            }
                            break;
                        case 3:
                            printf("\t\t1.Sundarban express\n");
                            printf("\t\t2.Chittra Express\n");
                            printf("\n\tEnter your choice: \n");
                            scanf("%d",&num);
                            switch(num){
                                case 1:
                                      printf("\t\tTrain number 726\n");
                                      printf("\t\tWeekly off day----->Wednesday.\n");
                                      printf("\t\tDeparture Time--->6:20\n");
                                      printf("\t\tArrival Time--->16:20 \n");
                                      printf("\t\tPlatform number---->04\n");
                                      printf("\t\tTicket Price---->340 TK Only\n");
                                                                  printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                            scanf("%d",&ch);
                                            switch (ch){
                                                case 1:
                                                    goto home;
                                                case 0:
                                                    break;
                                                default:
                                                    printf("Invalid Choice !");
                                                    break;
                                            }
                                      break;

                              case 2:
                                      printf("\t\tTrain number 764\n");
                                      printf("\t\tWeekly off day----->Monday.\n");
                                      printf("\t\tDeparture Time--->19:00\n");
                                      printf("\t\tArrival Time--->5:10 \n");
                                      printf("\t\tPlatform number---->02\n");
                                      printf("\t\tTicket Price---->340 TK Only\n");
                                      printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                        scanf("%d",&ch);
                                        switch (ch){
                                            case 1:
                                                goto home;
                                            case 0:
                                                break;
                                            default:
                                                printf("Invalid Choice !");
                                                break;
                                        }
                                      break;
                                }
                                break;

                            case 4:
                                printf("\t\tRangpur Express\n\n");
                                printf("\t\tTrain number 771\n");
                                printf("\t\tWeekly off day----->Monday.\n");
                                printf("\t\tDeparture Time--->9:00\n");
                                printf("\t\tArrival Time--->19:00 \n");
                                printf("\t\tPlatform number---->03\n");
                                printf("\t\tTicket Price---->380 TK Only\n");
                                printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                    scanf("%d",&ch);
                                    switch (ch){
                                        case 1:
                                            goto home;
                                        case 0:
                                            break;
                                        default:
                                            printf("Invalid Choice !");
                                            break;
                                    }
                                break;

                            case 5:
                                    printf("\t\t1.Parabat Express\n");
                                    printf("\t\t2.Joyantika Express\n");
                                    printf("\t\t3.Upaban Express\n");
                                    printf("\t\t4.Kalani Express\n");
                                    printf("\n\tEnter your choice: \n\n");
                                    scanf("%d",&num);
                                    switch(num){
                                        case 1:
                                          printf("\t\tTrain number 717\n");
                                          printf("\t\tWeekly off day----->NO.\n");
                                          printf("\t\tDeparture Time--->6:35\n");
                                          printf("\t\tArrival Time--->13:40 \n");
                                          printf("\t\tPlatform number---->05\n");
                                          printf("\t\tTicket Price---->395 TK Only\n");
                                          printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                            scanf("%d",&ch);
                                            switch (ch){
                                                case 1:
                                                    goto home;
                                                case 0:
                                                    break;
                                                default:
                                                    printf("Invalid Choice !");
                                                    break;
                                            }
                                          break;
                                          case 2:
                                                  printf("\t\tTrain number 709\n");
                                                  printf("\t\tWeekly off day----->Tuesday.\n");
                                                  printf("\t\tDeparture Time--->12:00\n");
                                                  printf("\t\tArrival Time--->19:45 \n");
                                                  printf("\t\tPlatform number---->2\n");
                                                  printf("\t\tTicket Price---->395 TK Only\n");
                                                  printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                                scanf("%d",&ch);
                                                switch (ch){
                                                    case 1:
                                                        goto home;
                                                    case 0:
                                                        break;
                                                    default:
                                                        printf("Invalid Choice !");
                                                        break;
                                                }
                                                  break;
                                          case 3:
                                                  printf("\t\tTrain number 739\n");
                                                  printf("\t\tWeekly off day----->Wednesday.\n");
                                                  printf("\t\tDeparture Time--->21:50\n");
                                                  printf("\t\tArrival Time--->5:35 \n");
                                                  printf("\t\tPlatform number---->03\n");
                                                  printf("\t\tTicket Price---->395 TK Only\n");
                                                  printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                                   scanf("%d",&ch);
                                                    switch (ch){
                                                case 1:
                                                goto home;
                                                case 0:
                                                break;
                                                default:
                                                printf("Invalid Choice !");
                                                break;
                                                }
                                        break;
                                            case 4:
                                                printf("\t\tTrain number 773\n");
                                                printf("\t\tWeekly off day----->Friday .\n");
                                                printf("\t\tDeparture Time--->16:00\n");
                                                printf("\t\tArrival Time--->22:45 \n");
                                                printf("\t\tPlatform number---->04\n");
                                                printf("\t\tTicket Price---->395 TK Only\n");
                                                printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                                scanf("%d",&ch);
                                                switch (ch){
                                                    case 1:
                                                        goto home;
                                                    case 0:
                                                        break;
                                                    default:
                                                        printf("Invalid Choice !");
                                                        break;
                                                }
                                                break;
                                        }
                                        break;

                                    case 6:
                                        printf("\t\tComilla Comuter\n\n");
                                        printf("\t\tTrain number 90\n");
                                        printf("\t\tWeekly off day----->Monday.\n");
                                        printf("\t\tDeparture Time--->13:30\n");
                                        printf("\t\tArrival Time--->19:00\n");
                                        printf("\t\tPlatform number---->01\n");
                                        printf("\t\tTicket Price---->250 TK Only\n");
                                        printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                        scanf("%d",&ch);
                                        switch (ch){
                                            case 1:
                                                goto home;
                                            case 0:
                                                break;
                                            default:
                                                printf("Invalid Choice !");
                                                break;
                                        }
                                        break;

                                    case 7:
                                        printf("\t\tMoitree Express \n");
                                        printf("\t\tTrain number 3107/3110\n");
                                        printf("\t\tWeekly off day----->Sat.Mon.Tues. & Thursday \n");
                                        printf("\t\tDeparture Time--->08:10\n");
                                        printf("\t\tArrival Time--->18:45\n"); printf("\t\tTicket Price---->360 TK Only\n");
                                        printf("\t\tPlatform number---->06\n");
                                        printf("\t\tTicket Price---->950 TK Only\n");
                                        printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                                        scanf("%d",&ch);
                                        switch (ch){
                                            case 1:
                                                goto home;
                                            case 0:
                                                break;
                                            default:
                                                printf("Invalid Choice !");
                                                break;
                                        }
                                        break;
                }
                break;
                printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                scanf("%d",&ch);
                switch (ch){
                    case 1:
                        goto home;
                    case 0:
                        break;
                    default:
                        printf("Invalid Choice !");
                        break;
                }

            case 4:
                /* -------------- BUY TicketET  START-------------- */
                system("cls");
                printf("\n\t\t--- Buy a Ticket ---");
                fp=fopen("ticket.dll","a");
                {
                    fflush(stdin);
                    printf("\n\n\t\t-------------------------\n\t\t    Type Passenger Name\n\t\t-------------------------\n\t\t");
                    scanf("%[^\n]",&passenger.name);
                    fflush(stdin);
                    printf("\n\t\t-------------------------\n\t\tType Passenger  Phone Number\n\t\t-------------------------\n\t\t");
                    scanf("%[^\n]",&passenger.ph);
                    fflush(stdin);
                    printf("\n\t\t-------------------------\n\t\tType Passenger Email Address\n\t\t-------------------------\n\t\t");
                    gets(passenger.email);
                    fflush(stdin);
                    printf("\n\t\t-------------------------\n\t\tType Passenger  Gender\n\t\t-------------------------\n\t\t");
                    scanf("%[^\n]",&passenger.gender);
                    fflush(stdin);
                    printf("\n\t\t-------------------------\n\t\t  Type Passenger Age\n\t\t-------------------------\n\t\t");
                    scanf("%d",&passenger.age);
                    fflush(stdin);
                    printf("\n\t\t-------------------------\n\t\t  Type Traveling Date\n\t\t-------------------------\n\t\t");
                    scanf("%[^\n]",&passenger.date);
                    fflush(stdin);
                    printf("\n\t\t-------------------------\n\t\t  Type Passenger Seat no.\n\t\t-------------------------\n\t\t");
                    scanf("%[^\n]",&passenger.seat_no);
                    fflush(stdin);
                    printf("\n\t\t-------------------------\n\t\t  Type Ticket Price\n\t\t-------------------------\n\t\t");
                    scanf("%f",&passenger.price);
                    fflush(stdin);
                    printf("\n\t\t-------------------------\n\t\t  Type Passenger Destination\n\t\t-------------------------\n\t\t");
                    scanf("%[^\n]",&passenger.destination);
                    fwrite(&passenger,sizeof(passenger),1,fp);
                    fclose(fp);
                    printf("\n\tYou Have Successfully Buy this Ticket!\n\t%s,***Happy Journey ***.",passenger.name);
                }
                printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                scanf("%d",&ch);
                switch (ch){
                    case 1:
                        goto home;
                    case 0:
                        break;
                    default:
                        printf("Invalid Choice !");
                        break;
                }
                break;
                /* -------------- BUY TICKET  END-------------- */

                case 5:
                     /* -------------- SEE TICKET  STRART-------------- */
                     printf("\n\t\t-------------------------\n\t\tType Admin Password\n\t\t-------------------------\n\t\t");
                     scanf("%d",&pass);
                     if (pass == 1234){
                        printf("Accepted Password !");
                        system("cls");
                printf("\n\t\t--- See All Contacts ---");
                printf("\n\n\t(If you want to Cancel, Enter a blank space.)\n");
                printf("\n\n\t\t-------------------------\n\t\t    List of All Contact\n\t\t-------------------------\n\t\t");
                printf("\n\t---------------------------------------------\n");
                for(i=97;i<=122;i=i+1){
                    fp=fopen("ticket.dll","r");
                    fflush(stdin);
                    found=0;
                    while(fread(&passenger,sizeof(passenger),1,fp)==1){
                        if(passenger.name[0]==i || passenger.name[0]==i-32){
                            printf("\n\tName\t: %s\n\tPhone\t: %ld\n\tAddress\t: %s\n\tEmail\t: %s\n",passenger.name,passenger.ph,passenger.destination,passenger.email);
                            found++;
                        }
                    }
                    if(found!=0){
                        printf("\n\t------------------------------------- [%c]-(%d)\n",i-32,found);
                        if (found>4){
                                printf("\n\tPress any key to See More...\n");
                                getch();
                            }
                    }
                    fclose(fp);
                }
                printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                scanf("%d",&ch);
                switch (ch){
                    case 1:
                        goto home;
                    case 0:
                        break;
                    default:
                        printf("Invalid Choice !");
                        break;
                break;
                     }
                     }
                     else{
                        printf("Invalid Password !\a");
                     }
                      printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                scanf("%d",&ch);
                switch (ch){
                    case 1:
                        goto home;
                    case 0:
                        break;
                    default:
                        printf("Invalid Choice !");
                        break;
                }

                      /* -------------- SEE TICKET  END-------------- */
                break;
            case 0:
                printf("exit\n");
                return 0;
                break;

            default: printf("Invalid Choice !\n");
            printf("\n\n\tEnter Your Choice:\n\n\t[1] HOME PAGE\t\t[0] Exit\n");
                scanf("%d",&ch);
                switch (ch){
                    case 1:
                        goto home;
                    case 0:
                        break;
                    default:
                        printf("Invalid Choice !");
                        break;
                }
        }

    return 0;
}


