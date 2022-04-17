#include <stdio.h>
#include <stdlib.h>

int main()
{ int cmd;
     float debit,credit,balance=0.0f;

     printf("***Acme checkbook-balanceing program***\n");
        printf("commands: 0=clear,1=credit,2=Debit");
           printf("3=Balance, 4=Exit\n\n");

  for(;;){

     Printf("Enter the command:");
        scanf("%d",&cmd);

     switch(cmd)
     {
         case 0:
                 balance=0.0f;
                    break;

         case 1:
              printf("Enter the amount of credit:");
               scanf("%d",credit);
               balance+=credit;
               break;

         case 2:
               printf("Enter amount of debit");
               scanf("%d",debit);
               balance-=debit;
               break;

        case 3:
               printf("current Balance:%.2f",balance) ;
               break;

        case 4:
               return 0;

        default:
        printf("commands: 0=clear,1=credit,2=Debit");
           printf("3=Balance, 4=Exit\n\n");
           }
            }
            }

