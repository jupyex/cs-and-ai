#include <cs50.h>
#include <stdio.h>

int specific_digit(long n, long len,long place);
int check_len(long n);
int luhn_algo(long n);

int main(void)
{
    long credit_no;
    credit_no=get_long("Number: ");
    if (luhn_algo(credit_no)%10==0)
    {
        if ((check_len(credit_no)==15)&&(specific_digit(credit_no,check_len(credit_no),1)==3)&&((specific_digit(credit_no,check_len(credit_no),2)==4)||(specific_digit(credit_no,check_len(credit_no),2)==7)))
        {
            printf("AMEX\n");
        }
        else if (((check_len(credit_no)==13)||(check_len(credit_no)==16))&&(specific_digit(credit_no,check_len(credit_no),1)==4))
        {
            printf("VISA\n");
        }
        else if ((check_len(credit_no)==16)&&(specific_digit(credit_no,check_len(credit_no),1)==5)&&((specific_digit(credit_no,check_len(credit_no),2)>0)&&(specific_digit(credit_no,check_len(credit_no),2)<6)))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

int check_len(long n)
{
    int counter=0;
    do
    {
        n/=10;
        counter+=1;
    }
    while(n!=0);
    return counter;
}

int digits(long n, int len)
{
    long digit;
    int sum=0;
    for (int i=0;i<len;i++)
    {
        long multiplier=1;
        for(int j=0;j<len-i-1;j++)
        {
            multiplier*=10;
        }
        digit=n/multiplier%10;
        sum+=digit;
    }
    return sum;
}


int luhn_algo(long n)
{
    int check_len(long n);
    int digits(long n, int len);
    long digit;
    int sum=0;
    int temp;
    for (int i=0;i<check_len(n);i++)
    {
        long multiplier=1;
        for(int j=0;j<check_len(n)-i-1;j++)
        {
            multiplier*=10;
        }
        digit=n/multiplier%10;
        if (((check_len(n)%2==0)&&(i%2==0))||((check_len(n)%2==1)&&(i%2==1)))
        {
            temp=(int)digit*2;
            sum+=digits(temp, check_len(temp));
        }
        else
        {
            sum+=(int)digit;
        }
    }
    return sum;
}

int specific_digit(long n, long len,long place)
{
    int check_len(long n);
    int digit;
    long multiplier=1;
    for(int j=0;j<len-place;j++)
    {
        multiplier*=10;
    }
    digit=n/multiplier%10;
    return digit;
}
