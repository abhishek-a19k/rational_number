/*
Name : Abhishek Kadariya
Roll No: 0501
*/
//program to create a rational data type

#include <stdio.h>
#include<conio.h>


typedef struct {
        int numerator;
        int denomenator;
        } rational;


rational makerational (int,int);

rational add_rational(rational, rational);

rational multiply_rational (rational,rational);

rational equal_rational(rational,rational);

int main ()
{
	int a,b,c,d;
	printf("Enter Numerator and Denomenator of first rational number\n");
	scanf("%d%d",&a,&b);
	printf("Enter Numerator and Denomenator of second rational number\n");
	scanf("%d%d",&c,&d);
	rational r1=makerational(a,b);
	rational r2=makerational(c,d);
	
	rational r3=add_rational(r1,r2);
	printf("%d/%d",r3.numerator,r3.denomenator);
	
	rational final=multiply_rational(r1,r2);
	printf("%d/%d",final.numerator,final.denomenator);
	
    rational result=equal_rational(r1,r2);
    printf("%d",result.equal);
    
    
    getch ();
    return 0;
    
    

};
//function for making the numbers rationl
rational makerational(int a, int b)
{
	if (b==0)
	{
		printf("ERROR :\n");
		exit(0);
	}
    else 
	{
	rational r_num;
	r_num.numerator=a;
	r_num.denomenator=b;
	return r_num;
	}
}
//function to add rational no
rational add_rational (rational r1,rational r2)
{
	rational result;
	result.numerator=(r1.numerator*r2.denomenator)+(r2.numerator*r1.denomenator);
	result.denomenator=(r1.denomenator*r2.denomenator);
	return result;
}
//function to  find the product of rational no
rational multiply_rational (rational r1,rational r2)
{
	rational product;
	result.numerator=(r1.numerator*r2.numerator);
	result.denomenator=(r1.denomenator*r2.denomenator);
	return product;
}

//function to check the equality of rational no
rational equal_rational(rational r1, rational r2)
{

    rational result;
    if(r1.numerator*r2.denominator == r2.numerator*r1.denominator)
   {
   printf("The rational numbers are equal");
   }
    else
        {
        printf("The rational numbers are not equal");
        }


    return result;
}
