#include<stdio.h>
int main(){
    int a,Rs,rs;
    int PIN[5];
    printf("\nBandhan bank welcomes you");
    printf("Insert your card");
    printf("\nLoading....");
    printf("\nName = XXXX");
    printf("\nCard NO =*****");
    printf("\nEnter your PIN:");
    scanf("%d",&PIN);
    printf("\nTotal amount on account = 10000");
    printf("\n--------");
    printf("\nSelect...");
    printf("\n1.Withdraw\n2.Deposit");
    printf("\nyou want to.. :");
    scanf("%d",&a);
    printf("\nYou selected: %d",a);
    printf("\n-----------------------");
    switch(a)
    {
        case 1:
            printf("\nLoading....");
            printf("\nwithdraw");
            printf("\nAmount on account = 10000");
            printf("\nEnter withdraw amount:");
            scanf("%d",&Rs);
            printf("\nAmount=%d",Rs);
            rs=10000-Rs;
            printf("\nBalance amount=%d",rs);
            printf("\n------------------");
            break;
        case 2:
            printf("\nLoading....");
            printf("\nDeposit");
            printf("\nAmount on account = 10000");
            printf("\nEnter your deposit amount:");
            scanf("%d",&Rs);
            printf("\nAmount=%d",Rs);
            rs=10000+Rs;
            printf("\nTotal amount on account = %d",rs);
            printf("\n------------------");
            break;
        default:
            printf("\nInvalid");
    }
        printf("\nPick your cash\nTake out your card");
}
