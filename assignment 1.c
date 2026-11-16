
//FOCP ASSIGNMENT-1//

//Q1. DISPLAY STUDENT INFORMATION//
/*#include<stdio.h>
 int main(){
    int student_id,age;
    float per ;
    char grade;
    printf("Enter STUDENT ID : %d\n",student_id);
    printf("Enter PERCENTAGE : %f\n",per);
    printf("Enter GRADE : %c\n",grade);
    return 0;
}*/

//Q2. ACCEPT AND DISPLAY USER DETAILS//
/*#include<stdio.h>
 int main(){
    int age;
    float height;
    char grade;
    printf("Enter AGE : ");
    scanf("%d",&age);
    printf("Enter PERCENTAGE : ");
    scanf("%f",&height);
    printf("Enter GRADE : ");
    scanf(" %c",&grade);
    return 0;
}*/

//Q3. SIMPLE BILL CALCULATION//
/*#include<stdio.h>
 int main(){
    float price,quantity;
    printf("Enter PRICE : ");
    scanf("%f",&price);
    printf("Enter QUANTITY : ");
    scanf(" %f",&quantity);
    printf("Enter GRADE : %f",(price*quantity));
    return 0;
}*/

//Q4. CALCULATE AVERAGE OF 3 NUMBERS//
/*#include<stdio.h>
 int main(){
    float no1,no2,no3;
    scanf("%f",&no1);
    scanf("%f",&no2);
    scanf(" %f",&no3);
    printf("Average= %.2f",(no1+no2+no3)/3.0);
    return 0;
}*/

//Q5. SWAP 2 CASES//
/*#include<stdio.h>
 int main(){
    int no1,no2;
    scanf("%d",&no1);
    scanf("%d",&no2);
    printf("Before Swapping : %d\t%d\n",no1,no2);
    int no3= no2;
    no2= no1;
    printf("After Swapping  : %d\t%d",no3,no2);
    return 0;
}*/

//Q6. CALCULATE QUOTIENT AND REMAINDER//
/*#include<stdio.h>
 int main(){
    int no1,no2;
    scanf("%d",&no1);
    scanf("%d",&no2);
    printf("Before Swapping : %d\t%d\n",no1,no2);
    int no3= no2;
    no2= no1;
    printf("After Swapping  : %d\t%d",no3,no2);
    return 0;
}*/

//Q7. CALCULATE TOTAL MARKS AND PERCENTAGE//
/*#include<stdio.h>
 int main(){
    float sub1,sub2,sub3,sub4,sub5;
    printf("ENTER MARKS OF SUBJECT 1 : ");
    scanf("%f",&sub1);
    printf("ENTER MARKS OF SUBJECT 2 : ");
    scanf("%f",&sub2);
    printf("ENTER MARKS OF SUBJECT 3 : ");
    scanf("%f",&sub3);
    printf("ENTER MARKS OF SUBJECT 4 : ");
    scanf("%f",&sub4);
    printf("ENTER MARKS OF SUBJECT 5 : ");
    scanf(" %f",&sub5);
    int total=sub1+sub2+sub3+sub4+sub5;
    printf("TOTAL MARKS : %d\n",total);
    float per = (sub1+sub2+sub3+sub4+sub5)/5.0;
    printf("PERCENTAGE : %f",per);
    return 0;
}*/

//Q8. EMPLOYEE SALARY CALCULATION//
/*#include<stdio.h>
 int main(){
    float basic_sal,allow,bonus;
    scanf("%f",&basic_sal);
    scanf("%f",&allow);
    scanf(" %f",&bonus);
    printf("Average= %.2f",(basic_sal+allow+bonus)*1.0);
    return 0;
}*/

//Q9. TEMPERATURE CONVERSION//
/*#include<stdio.h>
 int main(){
    float t_celcius;
    scanf("%f",&t_celcius);
    float far= (t_celcius*(9/5))+32;
    printf("%.2f F",far);
    return 0;
}*/

//Q10. INDUSTRY STYLE INVOICER CALCULATOR//
/*#include<stdio.h>
 int main(){
    int prod_id;
    float prod_price,quantity,dis_per;
    scanf("%d",&prod_id);
    scanf("%f",&prod_price);
    scanf(" %f",&quantity);
    scanf(" %f",&dis_per);
    float subtotal= prod_price*quantity;
    float dis_amt= subtotal*(dis_per/100);
    float final_amt= subtotal-dis_amt;
    printf("PRODUCT ID : %d\n",prod_id);
    printf("SUBTOTAL : %.2f\n",subtotal);
    printf("DISCOUNT AMOUNT : %.2f\n",dis_amt);
    printf("FINAL PAYABLE AMOUNT : %.2f",final_amt);
    return 0;
}*/
