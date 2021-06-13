#include<stdio.h>
int main()
{
    double array[100];
    printf("Enter number of coin : ");
    int coinNumber;
    scanf("%d",&coinNumber);
    double sum=0;
    printf("Enter coin value : ");
    for(int i =0; i<coinNumber; i++)
    {
        scanf("%lf",&array[i]);
        sum=sum+array[i];
    }
    for(int i =0; i<coinNumber; i++)
    {
        for(int j=i+1; j<coinNumber; j++)
        {
            if(array[j]>array[i])
            {
                double temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    printf("coin values are  : ");
    for(int i=0; i<coinNumber; i++)
    {
        printf("%.1lf ",array[i]);
    }

    printf("\nThe sum of coins = %.1lf\n",sum);
    printf("\n");
    int i =0;
    while(sum>=0)
    {
        if(i==coinNumber){
            break;
        }
        double coin = array[i];
        int count = sum/coin;
        printf("Payout %d coin of value %.2lf\n",count,coin);
        sum = sum - (count*coin);
        i++;
    }
}
