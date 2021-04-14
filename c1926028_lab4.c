#include<stdio.h>
int main(){

	//Question1
	float number1,number2;
	char operator;
	
	printf("Enter [number1] [+ - * /] number2\n");
	scanf("%f %c %f",&number1,&operator,&number2);
	
	
	switch(operator){
		case '+':
			printf("%2.f+%2.f=%2.f\n",number1,number2,number1+number2);
			break;
		case '-':
			printf("%2.f-%2.f=%2.f\n",number1,number2,number1-number2);
			break;
		case '*':
			printf("%2.f*%2.f=%2.f\n",number1,number2,number1*number2);
			break;
		case '/':
			printf("%2.f/%2.f=%2.f\n",number1,number2,number1/number2);
			break;
		default:
			printf("Invalid operator");
			break;
	}
	return 0;
	//Question2
  int days;
  int month;
  printf("Enter month:");
  scanf("%d",&month);

  switch(month){
  case 2:
    days=28;
  break;

  case 4:
  case 6:
  case 9:
  case 11:
  days=30;
  break;

  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12: 
  days=31;
  break;
  
  default:
   days=0;
   break;

  }
  if(days)
    printf("Number of days in %d month is:%d\n",month,days);
  else
     printf("You have entered an invalid month!!");
  
  return 0;
  
  //Question3
   int age;
  char ch;

  printf("Enter age:");
  scanf("%d",&age);

  if(age<18){
    printf("child %c",ch);
  }
  else if(age>=18 && age<=30){
    printf("young %c",ch);
  }
  else if(age>30){
    printf("mature %c",ch);
  }
return 0;
//Question4
char ch;
float radius;
float pi=3.14;
float volume;
int side;
printf("Input:");
scanf("%c",&ch);


switch(ch){
    
  case  's':
        printf("input the radius of sphere:");
        scanf("%f",&radius);
        volume=(4.0/3.0)*pi*(radius*radius*radius);
        printf("Volume of the sphere %f",volume);
        break;
  case 'S':
        printf("input the radius of sphere:");
        scanf("%f",&radius);
        volume=(4.0/3.0)*pi*(radius*radius*radius);
        printf("Volume of the sphere %f",volume);
        break;
  case 'c':
        printf("input the side of cube:");
        scanf("%d",&side);
        volume=side*side*side;
        printf("Volume of the cube %f",volume);
        break;
  case 'C':
       printf("input the side of cube:");
       scanf("%d",&side);
       volume=side*side*side;
       printf("Volume of the cube %f",volume);
      break;
}
return 0;
//Question5
int p,c,m;
	printf("Eligibility Criteria:\n");
	printf("Marks in Maths >=65\n");
	printf("and Marks in Phy>=55\n");
	printf("and Marks in Chem>=50");
	printf("and Total in all three subject>=190\n");
	printf("or Total in Maths and Physics>=140\n");
    printf("-------------------------------------\n");
    
    printf("Input the marks obtained in Physics:");
    scanf("%d",&p);
    printf("Input the marks obtained in Chemistry:");
    scanf("%d",&c);
    printf("Input the marks obtained in Mathematics:");
    scanf("%d",&m);
	printf("Total marks of Maths,Physics and Chemistry:%d\n",p+c+m);
	printf("Total marks of Maths and Physics:%d\n",p+m);
	
     if(m>=65 || p>=55 || c>=50 || p+c+m>=190 || m+p>=140){
    	printf("The candidate is eligible for admission.");
	}
	else
		printf("The candidate is not eligible for admission.");
		return 0;
	
//Question6
  char ch;
  float c,f;
  printf("Press c to convert temperature from Fahrenheit to Celsius\n");
  printf("Press f to convert temperature from Celsius to Fahrenheit\n");
  printf("Enter your choice (c,f):");
  scanf("%c",&ch);

  if(ch=='c'){
   printf("Enter temperature in Fahrenheit:");
   scanf("%f",&f);
   c=(f-32)*5/9;
   printf("Temperature in Celsius:%.2f",c);
  }
  else if(ch=='f'){
    printf("Enter temperature in Celcius:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in Fahrenheit:%.2f",f);
  }

  return 0;
}


