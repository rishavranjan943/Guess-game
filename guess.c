#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
void guess()
{
    int you,comp,count=0;
    srand(time(0));
    comp=rand() % 100;
    do
    {
        printf("Enter the number which you guess : ");
        scanf("%d",&you);
        if(comp==you)
        {
            count++;
            printf("You won in %d turns\n",count);
        }
        else if(comp > you)
        {
            count++;
            printf("Number you entered is less than number taken by computer\n");
        }
        else if(comp < you)
        {
            count++;
            printf("Number you entered is more than number taken by computer\n");
        }

    } while(comp!=you);
}
int main()
{
    printf("Guess game : \n");
    printf("Rule : \n");
    printf("If number entered by you is same as computer you won otherwise you loose\n");
    guess();
    return 0;
}