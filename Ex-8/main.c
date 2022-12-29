#include <stdio.h>
#include <stdlib.h>

int main()              //Practice for switch-case
{
    int choice1,choice2;

    do
    {
        printf("1.(+,-,x,/)\n");
        printf("2.Area\n");
        printf("3.Volume\n");
        printf("4.Exit\n");

        printf("Input your choice:");
        scanf("%d",&choice1);

        switch(choice1)
        {
         case(1):         //Four basic math operators
             {
                 int num1,num2,sum,sub,mult,div,mod;

                 printf("1.(+)\n");
                 printf("2.(-)\n");
                 printf("3.(x)\n");
                 printf("4.(/)\n");
                 printf("5.Exit\n");
                 printf("Input your choice:");
                 scanf("%d",&choice2);

                 if(choice2 > 0 && choice2 < 5)
                 {
                     printf("Input the first number:\n");
                     scanf("%d",&num1);
                     printf("Input the second number:\n");
                     scanf("%d",&num2);
                 }

                 if(choice2 == 1)
                 {
                     sum = num1 + num2;

                     printf("%d + %d = %d\n",num1,num2,sum);
                 }
                 else if(choice2 == 2)
                 {
                     sub = num1 - num2;

                     printf("%d - %d = %d\n",num1,num2,sub);
                 }
                 else if(choice2 == 3)
                 {
                     mult = num1 * num2;

                     printf("%d x %d = %d\n",num1,num2,mult);
                 }
                 else if(choice2 == 4)
                 {
                     div = num1 / num2;
                     mod = num1 % num2;

                     printf("%d / %d = %d\n",num1,num2,div);
                     printf("Remainder:%d\n",mod);
                 }
                 else if (choice2 == 5)
                 {
                     exit(0);
                 }
                 else
                 {
                     printf("Invalid input.\n");

                     break;
                 }

                 break;
             }

         case(2):             //Area calculator
            {
                int base,height,radius,side1,side2,area_of_rectangle;
                float area_of_triangle,area_of_circle;

                printf("1.Triangle\n");
                printf("2.Rectangle\n");
                printf("3.Circle\n");
                printf("4.Exit\n");
                printf("Input your choice:");
                scanf("%d",&choice2);

                if(choice2 == 1)
                {
                    printf("Input triangle's base length:");
                    scanf("%d",&base);
                    printf("Input triangle's height:");
                    scanf("%d",&height);

                    area_of_triangle = (float)(base * height) / 2;

                    printf("The area of the triangle with base length of %d and height of %d is %.1f\n",base,height,area_of_triangle);
                }
                else if(choice2 == 2)
                {
                    printf("Input rectangle's side 1 length:");
                    scanf("%d",&side1);
                    printf("Input rectangle's side 2 length:");
                    scanf("%d",&side2);

                    area_of_rectangle = side1 * side2;

                    printf("The area of rectangle with side length of %d and %d is %d\n",side1,side2,area_of_rectangle);
                }
                else if(choice2 == 3)
                {
                    printf("Input the circle's radius:");
                    scanf("%d",&radius);

                    area_of_circle = 3.14 * (float)(radius * radius);

                    printf("The area of the circle with radius of %d is %.1f\n",radius,area_of_circle);
                }
                else if(choice2 == 4)
                {
                    exit(0);
                }
                else
                {
                    printf("Invalid input.\n");

                    break;
                }

                break;
            }

         case(3):            //Volume calculator
            {
                int base,height,length,width,radius,volume_of_rectangular_prism;
                float volume_of_triangular_prism,volume_of_sphere;

                printf("1.Triangular prism\n");
                printf("2.Rectangular prism\n");
                printf("3.Sphere\n");
                printf("4.Exit\n");
                printf("Input your choice:");
                scanf("%d",&choice2);

                if(choice2 == 1)
                {
                  printf("Input prism's base length:");
                  scanf("%d",&base);
                  printf("Input prism's height:");
                  scanf("%d",&height);
                  printf("Input prism's side length:");
                  scanf("%d",&length);

                  volume_of_triangular_prism = ((float)(base * length) * (float)height) / 2;

                  printf("Volume of the triangular prism with base of %d, height of %d and side length of %d is %.1f\n",base,height,length,volume_of_triangular_prism);
                }
                else if(choice2 == 2)
                {
                    printf("Input prism's width:");
                    scanf("%d",&width);
                    printf("Input prism's height:");
                    scanf("%d",&height);
                    printf("Input prism's side length:");
                    scanf("%d",&length);

                    volume_of_rectangular_prism = width * height * length;

                    printf("Volume of the rectangular prism with base of %d, height of %d and side length of %d is %d\n",width,height,length,volume_of_rectangular_prism);
                }
                else if(choice2 == 3)
                {
                    printf("Input sphere's radius:");
                    scanf("%d",&radius);

                    volume_of_sphere = (4 * (3.14 * (float)(radius * radius * radius))) / 3;

                    printf("Volume of the sphere with radius of %d is %.1f\n",radius,volume_of_sphere);
                }
                else if(choice2 == 4)
                {
                    exit(0);
                }
                else
                {
                    printf("Invalid input.\n");

                    break;
                }

                break;
            }

         case(4):              //Exit
            {
                exit(0);
            }

         default:
            {
                printf("%d is not a valid choice.\n",choice1);
                printf("Try again.\n");

                break;
            }
        }
    }
    while(choice1 > 0 || choice1 < 5);

    return 0;
}
