// 1.pre&post increment

#include <stdio.h>
int main()
/*{
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    printf("%d\n",++a);
    printf("%d\n",a++);
    return 0;
}*/

// 2.pre&post decerment

/*{
int a;
    printf("enter a number :");
    scanf("%d",&a);
    printf("%d\n",--a);
    printf("%d\n",a--);
    
    return 0;
}*/

// 3.speed

  /*{  
    int d;
    int t;
    printf("enter the distance:");
    scanf("%d",&d);
    printf("enter the time:");
    scanf("%d",&t);
    printf("speed is :%d",d/t);
    return 0;
}*/

// 4.remainder of two numbers


/*{
    int a;
    int b;
    printf("enter the value a :");
    scanf("%d",&a);
    printf("enter the value b :");
    scanf("%d",&b);
    printf("remainder is :%d",a%b);
    return 0;
}*/

// 5.Average of three numbers


/*{
    int a;
    int b;
    int c;
    
    printf("Enter the value A :");
    scanf("%d",&a);
    printf("Enter the value B :");
    scanf("%d",&b);
    printf("Enter the value C :");
    scanf("%d",&c);
    int d=a+b+c;
    printf("The average is :%d\n",d/3);
    return 0;
    
}*/
 
 // 6.perimeter and area for rectangular
 
 /*{
     int l;
     int b;
     printf("enter the length :");
     scanf("%d",&l);
     printf("enter the breath :");
     scanf("%d",&b);
     printf("perimeter of rectangular %d\n",2*(l+b));
     printf("area of rectangular %d\n",(l*b));
     }*/
     
     // 7.perimeter and area of square
     
    /*{
     
     int s;
     printf("enter side length :");
     scanf("%d",&s);
     printf("perimeter of square %d\n",(4*s));
     printf("area of square %d\n",(s*s));
     }*/
     
     // 8.perimeter and area of circle
     
     /*{
     
     int r;
     printf("enter the radius :");
     scanf("%d",&r);
     float p=2*3.14*r;
     printf("%f",p);
     printf("perimeter of circle : %f\n",p);
     printf("area of circle : %f\n",3.14*r*r);
     }*/
     
     // 9.perimeter and area of rec,squ,cir in switch case
 
 /*{
 
    int shape;
    printf("1.Rectangle\n2.square\n3.circle");
    printf("\nEnter choice :");
    scanf("%d",&shape);
   
    switch(shape){
        case 1:
        int l;
        int b;
        printf("Enter Length :");
        scanf("%d",&l);
        printf("Enter Breadth :");
        scanf("%d",&b);
        printf("Perimeter of Rectangle is :%d\n", 2*(l+b));
        printf("Area of rectangle is :%d\n", l*b);
        break;
        case 2:
        int s;
        printf("Enter side length :");
        scanf("%d",&s);
        printf("Perimeter of Square is :%d\n",4*s);
        printf("Area of Square is :%d\n",s*s);
        break;
        case 3:
        int r;
        printf("Enter radius :");
        scanf("%d",&r);
        float m=2*3.14*r;
        printf("Perimeter of circle is :%.2f\n",m);
        float n=3.14*(r*r);
        printf("Area of circle is :%.2f\n",n);
        break;
        default:
        printf("Invalid Shape");
        
    }
}*/

//10.total and percentage of five subjects

/*{
    int a;
    int b;
    int c;
    int d;
    int e;
    
    printf("enter the tamil mark :");
    scanf("%d",&a);
    printf("enter the english mark :");
    scanf("%d",&b);
    printf("enter the maths mark :");
    scanf("%d",&c);
    printf("enter the physics mark :");
    scanf("%d",&d);
    printf("enter the chemistry mark :");
    scanf("%d",&e);
    float sum=(a+b+c+d+e);
    
    printf (" total mark is : %d\n",sum);
    float p=(sum/500)*100;
   printf(" percentage is :%f\n",p);
    return 0;
}*/



// 11.Celsius  to convert Fahrenheit 
/*{
    int c;
    printf("Enter celsius :");
    scanf("%d",&c);
    float fa=(c*9.0/5.0)+32.0;
    printf("Fahrenheit is%f",fa);
    return 0;
}*/

// 12.simple interst
/*{
    int p;
    int r;
    int t;
    printf("Amount :");
    scanf("%d",&p);
    printf("Rate of interst :");
    scanf("%d",&r);
    printf("Time :");
    scanf("%d",&t);
    int si=(p*r*t)/100;
    printf("Interst is :%d\n",si);
    
}*/

   // 13.assignment operator

/*{
    int a;
    int b;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Enter a number :");
    scanf("%d",&b);
    printf("%d\n",a=b);
    printf("%d\n",a+=b);
    printf("%d\n",a-=b);
    printf("%d\n",a*=b);
    printf("%d\n",a/=b);
    printf("%d\n",a%=b);
    return 0;
}*/

// 14.last two digits

/*{
    int a;
    int b;
    printf("enter a number :");
    scanf("%d",&a);
    b=a%100;
    printf("last two digit : %d",b);
    return 0;
    
}*/

// 15.comma operator to square and cube

/*{
int a=5,b=6;
    int c=a*a,d=a*a*a;
    int e=b*b,f=b*b*b;
    printf("squre of a is :%d\n",c);
    printf("cube of a is :%d\n",d);
    printf("squre of b is :%d\n",e);
    printf("cube of b is :%d\n",f);
   return 0;
}*/


// 16.size of operator


/*{
    int a;
    float f;
    double d;
    char c;
    int arr[20];
    printf("size of (a) =%zu\n",sizeof (a));
    printf("size of (f)= %zu\n",sizeof (f));
    printf("size of (d)= %zu\n",sizeof (d));
    printf("size of (c)= %zu\n",sizeof (c));
    printf("size of (arr)= %zu\n",sizeof (arr)); 
    
    return 0;
}*/



     
         
     
 
    
    
