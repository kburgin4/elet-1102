/****

Write a code to calculate the cost of insurance depending on the user age. For any driver younger than 25 the yearly insurance cost is $5000/year. 
After their 25th birthday the insurance drop to $3500.  If the record of good driving continues, the driver will get a 2% discount.  
Between 35 and 50, the insurance will drop to $2,800.  
After 50, the insurance will stay steady at a cost of $1500 a year. - 20 points


****/
#include <stdio.h>

int main()
{
    int userage;
    int driversaftey;
    int base_insurance_cost;
    int discount_insurance_cost;

    printf("please enter your age");
    scanf("%d", &userage);
    printf("you are %d years old\n",userage);


    if (userage < 25)
    {
        base_insurance_cost = 5000;
        printf("your insurance cost is %d per year\n", base_insurance_cost);
    }
    

    if (userage>25 && userage< 35)
    {
        base_insurance_cost = 3500;
        printf("your base insurance cost is %d.\n", base_insurance_cost);

        discount_insurance_cost = base_insurance_cost * .98;
        printf("if you have been a safe driver than the price is %d \n",discount_insurance_cost);
    }
    
    if (userage>35 && userage< 50)
    {
        base_insurance_cost = 2800;
        printf("your base insurance cost is %d dollars", base_insurance_cost);

        discount_insurance_cost = base_insurance_cost * .98;
        printf("if you have been a safe driver than the price is %d \n",discount_insurance_cost);
    }

    if (userage >= 50)
    {
          base_insurance_cost = 1500;
         printf(" your base insurance is %d dollars", base_insurance_cost);

        discount_insurance_cost = base_insurance_cost * .98;
        printf("if you have been a safe driver than the price is %d \n",discount_insurance_cost);
    }
    
    



    return (0);
}