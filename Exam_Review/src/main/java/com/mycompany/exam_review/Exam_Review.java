/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.exam_review;
import java.util.*;

/**
 *
 * @author ereng
 */
public class Exam_Review {

    public static void main(String[] args) {
        lab1_4();
    }
    
    public static void lab1_1(){
        slashes();
        text();
        back_slashes();
    }
    
    public static void lab1_2(){
        lab1_1();
        for(int i=0;i<4;i++)
        {
            pack_bt();
        }
    }
    
    public static void lab1_3(){
        egg_top();
        egg_mid();
        egg_bot();
    }
    
    public static void lab1_4(){
        egg_top();
        egg_bot();
        egg_mid();
        egg_top();
        egg_bot();
    }
    
    public static void lab1_5(){
        stage3();
    }
    
    public static void lab2_1(){
        find_pos();
    }
    
    public static void lab2_2(){
        one_to_100_for();
    }
    
    public static void lab2_3(){
        squares_to_10();
    }
    
    public static void lab2_4(){
        sum_to_10();
    }
    
    public static void lab3_1(){
        Scanner console = new Scanner(System.in);
        
        int number;
     
        System.out.print("Input an integer:");
        number = console.nextInt();
        
        printNumbers(number);
    }
    
    public static void lab3_2(){
        Scanner console = new Scanner(System.in);
        
        int num;
        
        System.out.print("Input an integer:");
        num = console.nextInt();
        
        printPowersOf2(num);
    }
    
    public static void lab3_3(){
        Scanner console = new Scanner(System.in);
        
        int base,power;
        
        System.out.print("Input the base value:");
        base = console.nextInt();
        System.out.print("Input the power value:");
        power = console.nextInt();
        
        printPowersOfN(base, power);
    }
    
    public static void lab3_4(){
        Scanner console = new Scanner(System.in);
        
        int a,b;
        
        System.out.print("Input two integers:");
        a = console.nextInt();
        b = console.nextInt();
        
        largerAbsValue(a, b);
    }
    
    public static void lab3_5(){
        Scanner console = new Scanner(System.in);
        
        int a,b,c;
        
        System.out.print("Input three integers:");
        a = console.nextInt();
        b = console.nextInt();
        c = console.nextInt();
        
        largestAbsVal(a, b, c);
    }
    
    public static void lab3_6(){
        Scanner console = new Scanner(System.in);
        
        int a,b,c;
        
        System.out.print("Input three integer (a,b,c):");
        a = console.nextInt();
        b = console.nextInt();
        c = console.nextInt();
        
        quadratic(a, b, c);
    }
    
    public static void lab3_7(){
        Scanner console = new Scanner(System.in);
        
        int a,b;
        
        System.out.println("Input two integers:");
        a = console.nextInt();
        b = console.nextInt();
        
        printSquare(a, b);
    }
    
    public static void lab3_8(){
        Scanner console = new Scanner(System.in);
        
        int a,b;
        
        System.out.print("Input rows and columns values(first roes then columns):");
        a = console.nextInt();
        b = console.nextInt();
        
        printGrid(a, b);
    }
    
    public static void lab3_9(){   
        Scanner console = new Scanner(System.in);
        
        int a;
        
        System.out.print("Input an integer:");
        a = console.nextInt();
        
        fibonacci(a);
    }
    
    public static void lab3_9_alt(){
        fibonacci_alt();
    }
    
    public static void lab4_1(){
        Scanner console = new Scanner(System.in);
        
        int a;
        
        System.out.print("Input the amount of rows you wish to print:");
        a = console.nextInt();
        
        pattern1(a);
    }
    
    public static void lab4_2(){
        Scanner console = new Scanner(System.in);
        
        int a;
        
        System.out.print("Input the amount of rows you wish to print:");
        a = console.nextInt();
        
        pattern2(a);
    }
    
    public static void lab4_3(){
        Scanner console = new Scanner(System.in);
        
        int a;
        
        System.out.print("Input the amount of rows you wish to print:");
        a = console.nextInt();
        
        pattern3(a);
    }
    
    public static void lab4_4(){
        Scanner console = new Scanner(System.in);
        
        int a;
        
        System.out.print("Input the number of rows you wish to print:");
        a = console.nextInt();
        
        pattern4(a);
    }
    
    public static void lab4_5(){ 
        pattern5();
    }
    
    public static void lab4_6(){
        pattern6();
    }
    
    public static void lab5_1(){
        Scanner console = new Scanner(System.in);
        
        int num;
        
        System.out.print("Input an integer:");
        num = console.nextInt();
        
        int d = lastDigit(num);
        
        System.out.print("Last digit of " + num + " is " + d);
    }
    
    public static void lab5_2(){
        Scanner console = new Scanner(System.in);
        
        double r,a;
        
        System.out.print("Input the radius of the circle:");
        r = console.nextDouble();
        
        a = area(r);
        
        System.out.print("The area of the circle with the radius of " + r + " is " + a);
    }
    
    public static void lab5_3(){
        Scanner console = new Scanner(System.in);
        
        int x1,x2,y1,y2;
        
        System.out.print("Input x1 and x2 values:");
        x1 = console.nextInt();
        x2 = console.nextInt();
        System.out.print("Input y1 and y2 values:");
        y1 = console.nextInt();
        y2 = console.nextInt();
        
        double d = distance(x1,x2,y1,y2);
        
        System.out.print("Distance:" + d);
    }
    
    public static void lab5_4(){
        Scanner console = new Scanner(System.in);
        
        double p;
        int hours,salary;
        
        System.out.print("Input the salary:");
        salary = console.nextInt();
        System.out.print("Input employees hours in work today:");
        hours = console. nextInt();
        
        p = pay(salary, hours);
        
        System.out.print("Employee's pay is:" + p);
        
    }
    
    public static void lab5_5(){
        Scanner console = new Scanner(System.in);
        
        double a,b,c,area;
        
        System.out.print("Input three sides of the triangle:");
        a = console.nextDouble();
        b = console.nextDouble();
        c = console.nextDouble();
        
        area = triangleArea(a, b, c);
        
        System.out.print("Area of the triangle is " + area);
    }
    
    public static void extra_lab2_1(){
        fibonacci_numbers();
    }
    
    public static void extra_lab2_2(){
        Scanner console = new Scanner(System.in);
        
        int rows;
        
        System.out.print("Input the count of rows you wish to print:");
        rows = console.nextInt();
        
        extra_pattern1(rows);
    }
    
    public static void extra_lab2_3(){
        extra_pattern2();
    }
    
    public static void extra_lab2_4(){
        extra_pattern3();
    }
    
    public static void lab6_1(){
        digits_sum();
    }
    
    public static void lab6_2(){
        digit_even_odd_zero();
    }
    
    public static void lab6_3(){
        grade_arrangement_average ();
    }
    
    public static void lab7_1(){
        printRange();
    }
    
    public static void lab7_2(){
        smallestLargest();
    }
    
    public static void lab7_3(){
        Scanner console = new Scanner(System.in);
        longestName(console, 4);
    }
    
    public static void lab7_4(){
        Scanner console = new Scanner(System.in);
        evenSumMax(console);
    }
    
    public static void lab8_1(){
        Scanner console = new Scanner(System.in);
        printPalindrome(console);
    }
    
    public static void lab8_2(){
        Scanner console = new Scanner(System.in);
        stutter(console);
    }
    
    public static void lab8_3(){
        Scanner console = new Scanner(System.in);
        wordCount(console);
    }
    
    public static void lab8_4(){
        Scanner console = new Scanner(System.in);
        perfectNumbers(console);
    }
    
    public static void lab9_1(){
        int [] array = {1,3,4,5,6,7,8,9,10};
        
        boolean result = isUnique(array);
        
        System.out.println(result);
    }
    
    public static void lab9_2(){
        int[] a1 = {1,3,4,5,5,7,8,9};
        int[] a2 = {2,3,4};
        
        System.out.println(contains(a1,a2));
    }
    
    public static void lab9_3(){
        int[] a2 = {2,3,4};
        
        System.out.println(Arrays.toString(collapse(a2)));
    }
    
    public static void lab9_4(){
        int[] a1 = {1,3,4,5,6,7,8,9};
        int[] a2 = {2,3,4};
        
        System.out.print(Arrays.toString(append(a1,a2)));
    }
    public static void pack_bt(){
        text();
        back_slashes();
    }
    
    public static void slashes(){
        System.out.println("//////////////////////");
    }
    
    public static void text(){
        System.out.println("|| Victory is mine! ||");
    }
    
    public static void back_slashes(){
        System.out.println("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
    }
    
    public static void egg_top(){
        System.out.println("  _______");
        System.out.println(" /       \\");
        System.out.println("/         \\");
    }
    
    public static void egg_mid(){
        System.out.println("-\"-\'-\"-\'-\"-");
    }
    
    public static void egg_bot(){
        System.out.println("\\         /");
        System.out.println(" \\       /");
        System.out.println("  ¯¯¯¯¯¯¯");
    }
    
    public static void stage1(){   //First stage for Lab 1 Challenge (lab1_5)    10 lines
        System.out.println("All work and no play makes Jack a dull boy.");
        System.out.println("All work and no play makes Jack a dull boy.");
        System.out.println("All work and no play makes Jack a dull boy.");
        System.out.println("All work and no play makes Jack a dull boy.");
        System.out.println("All work and no play makes Jack a dull boy.");
        System.out.println("All work and no play makes Jack a dull boy.");
        System.out.println("All work and no play makes Jack a dull boy.");
        System.out.println("All work and no play makes Jack a dull boy.");
        System.out.println("All work and no play makes Jack a dull boy.");
        System.out.println("All work and no play makes Jack a dull boy.");
    }
    
    public static void stage2(){     //Second stage for Lab 1 Challenge (lab1_5) 10 x 10 = 100 lines
        stage1();
        stage1();
        stage1();
        stage1();
        stage1();
        stage1();
        stage1();
        stage1();
        stage1();
        stage1();
    }
    
    public static void stage3(){     //Third stage for Lab 1 Challenge (lab1_5) 100 x 10 = 1000 lines
        stage2();
        stage2();
        stage2();
        stage2();
        stage2();
        stage2();
        stage2();
        stage2();
        stage2();
        stage2();
    }
    
    
    public static void find_pos(){
        Scanner console = new Scanner(System.in);
        
        double s,s0,v0,t,a;
        
        System.out.print("Input initial position value:");
        s0 = console.nextDouble();
        System.out.print("Input initial velocity value:");
        v0 = console.nextDouble();
        System.out.print("Input the time:");
        t = console.nextDouble();
        System.out.print("Input the rate of acceleration:");
        a = console.nextDouble();
        
        s = s0 + (v0 * t) + ((a * t * t) / 2);
        
        System.out.println("Position:" + s);
    }
    
    public static void one_to_100_for(){
        for(int i=1;i<=100;i++)
        {
            System.out.print(" " + i + " ");
        }
    }
    
    public static void squares_to_10(){
        for(int i=1;i<=10;i++)
        {
            System.out.print(" " + i*i + " ");
        }
    }
    
    public static void sum_to_10(){
        int sum = 0;
        
        for(int i=1;i<=10;i++)
        {
            sum += i;
        }
        System.out.print(sum);
    }
    
    public static void printNumbers(int num){
        for(int i=1;i<=num;i++)
        {
            System.out.print(" [" + i + "] ");
        }
        System.out.println();
    }
    
    public static void printPowersOf2(int num){
        for(int i=0;i<=num;i++)
        {
            System.out.print(" [" + (int)Math.pow(2, i) + "] ");
        }
        System.out.println();
    }
    
    public static void printPowersOfN(int base, int power){
        for(int i=0;i<=power;i++)
        {
            System.out.print(" [" + (int)Math.pow(base, i) + "] ");
        }
        System.out.println();
    }
    
    public static void largerAbsValue(int a, int b){
       System.out.println(Math.max(Math.abs(a), Math.abs(b)));
    }
    
    public static void largestAbsVal(int a, int b, int c){
        int abs_a = Math.abs(a);
        int abs_b = Math.abs(b);
        int abs_c = Math.abs(c);
        
        if(abs_a >= abs_b && abs_a >= abs_c)
        {
            System.out.println(abs_a);
        }
        else if(abs_b >= abs_a && abs_b >= abs_c)
        {
            System.out.println(abs_b);
        }
        else if(abs_c >= abs_a && abs_c >= abs_b)
        {
            System.out.println(abs_c);
        }       
    }
    
    public static void quadratic(int a, int b, int c){
        double x1,x2;
        
        x1 = (-b + Math.sqrt(Math.pow(b, 2) - (4 * a * c))) / (2 * a);
        x2 = (-b - Math.sqrt(Math.pow(b, 2) - (4 * a * c))) / (2 * a);
        
        System.out.println("Root 1 = " + x1);
        System.out.println("Root 2 = " + x2);
    }
    
    public static void printSquare(int a, int b){
        int noCols = b - a + 1;
        int val;
        
        for(int r=a;r<=b;r++)
        {
            val = r;
            
            for(int c=1;c<=noCols;c++)
            {
                System.out.print(val + " ");
                
                if(val==b)
                {
                    val=a;
                }
                else
                {
                    val++;
                }
            }
            System.out.println();
        }
    }
    
    public static void printGrid(int a, int b){
        int rows = a;
        int cols = b;
        int val;
        
        for(int i=1;i<=rows;i++)
        {
            val = i;
            
            for(int j=1;j<=cols;j++)
            {
                System.out.print(val + " ");
                
                val +=rows;
            }
            System.out.println();
        }   
    }
    
    public static void fibonacci(int a){   
        int r=0;
        
        for(int i=0;i<=a;i++)
        {
            for(int k=0;k<=a-i;k++)
            {
                System.out.print("  ");
            }
            
            for(int j=0;j<=r;j++)
            {
                System.out.print((int)Math.pow(2, j) + " ");
            }
            
            for(int j=(r-1);j>=0;j--)
            {
                System.out.print((int)Math.pow(2, j) + " ");
            }
            System.out.println();
            
            r++;
        }        
    }
    
    public static void fibonacci_alt(){
        int row = 7;
        
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=row-i;j++)
            {
                System.out.print("  ");
            }
            for(int j=0;j<i;j++)
            {
                System.out.print(" " + (int)Math.pow(2, j));
            }
            for(int j=i-2;j>=0;j--)
            {
                System.out.print(" " + (int)Math.pow(2, j));
            }
            System.out.println();
        }
    }
    
    public static void pattern1(int a){
        for(int i=a;i>0;i--)
        {
            for(int j=1;j<=i;j++)
            {
                System.out.print("_");
            }
            System.out.println();
        }
    }
    
    public static void pattern2(int a){
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=5-(i-1);j++)
            {
                System.out.print("_");
            }
            for(int k=1;k<=i-1;k++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    
    public static void pattern3(int a){
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=(i*2)-1;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    
    public static void pattern4(int a){
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=(2*i)-1;j++)
            {
                System.out.print(i);
            }
            System.out.println();
        }
    }
    
    public static void pattern5(){
        for(int i=1;i<=4;i++)
        {
            for(int j=1;j<=4-i;j++)
            {
                System.out.print("_");
            }
            for(int k=1;k<=(2*i)-1;k++)
            {
                System.out.print("*");
            }
            for(int j=1;j<=4-i;j++)
            {
                System.out.print("_");
            }
            System.out.println();
        }
    }
    
    public static void pattern6(){
        for(int i=1;i<=4;i++)
        {
            for(int j=1;j<=4-i;j++)
            {
                System.out.print("_");
            }
            for(int k=1;k<=(2*i)-1;k++)
            {
                System.out.print(i);
            }
            for(int j=1;j<=4-i;j++)
            {
                System.out.print("_");
            }
            System.out.println();
        }
    }
    
    public static int lastDigit(int num){
        return (Math.abs(num)%10);
    }
    
    public static double area(double r){
        return Math.PI * Math.pow(r, 2);
    }
     
    public static double distance(int x1, int x2, int y1, int y2){
        return (Math.sqrt(Math.abs(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2))));
    }
    
    public static double pay(int salary, int hours){
        double p;
        
        if(hours<=8)
        {
            p = salary * hours;
        }
        else
        {
            p = (salary * 8.0) + (1.5 * salary) * (hours - 8);
        }
        return p;
    }
    
    public static double triangleArea(double a, double b, double c){
        double s,area;
        
        s = (a + b + c) / 2;
        area = (Math.sqrt(Math.abs(s * (s - a) * (s - b) * (s - c))));
        return area;
    }
    
    public static void fibonacci_numbers(){ 
        int a = 1;
        int b = 1;
        
        for(int i=1;i<=6;i++)
        {
            System.out.print(" " + a + " " + b);
            a += b;
            b += a;
        }
    }
    
    public static void extra_pattern1(int rows){
        for(int i=1;i<=rows;i++)
        {
            for(int j=1;j<=i;j++)
            {
                System.out.print(i);
            }        
            System.out.println();
        }
    }
    
    public static void extra_pattern2(){
        int line = 5;
        int spc = line - 1;
        
        for(int i=1;i<=line;i++)
        {
            for(int j=1;j<=spc;j++)
            {
                System.out.print(" ");
            }
            System.out.print(i);
            System.out.println();
            
            spc--;
        }
    }
    
    public static void extra_pattern3(){
        int line = 5;
        int spc = line - 1;
        
        for(int i=1;i<=line;i++)
        {
            for(int j=1;j<=spc;j++)
            {
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++)
            {
                System.out.print(i);
            }
            System.out.println();
            
            spc--;
        }
    }

    public static void digits_sum(){
        Scanner console = new Scanner(System.in);
        int number;
        System.out.print("Please enter a number: ");
        number = console.nextInt();
        number = Math.abs(number);
        
        int numbertemp = number;
        
        int digit;
        int digit_sum = 0;
        
        while(numbertemp > 0)
        {
            digit = numbertemp % 10;
            digit_sum += digit;
            numbertemp = numbertemp / 10;
        }
        
        System.out.println("The sum of the digits = " + digit_sum);
    }
    
    public static void digit_even_odd_zero(){
        Scanner console = new Scanner(System.in);
        int number;
        System.out.print("Please enter a number: ");
        number = console.nextInt();
        number = Math.abs(number);
        
        int numbertemp = number;
        
        int digit;
        int odd = 0;
        int even = 0;
        int zero = 0;
        
        while(numbertemp > 0)
        {
            digit = numbertemp % 10;
            
            if(digit % 2 == 0)
            {
                even++;               
            }
            else if(digit % 2 == 1)
            {
                odd++;
            }
            else if(digit == 0)
            {
                zero++;                
            }
            numbertemp = numbertemp / 10;
        }
        
        System.out.println("There is " + even + " even digit(s)");
        System.out.println("There is " + odd + " odd digit(s)");
        System.out.println("There is " + zero + " zero(s)");
    }
    
    public static void grade_arrangement_average (){
        Scanner console = new Scanner(System.in);
        
        int grade;
        int grade_temp = 0;
        int grade_count = 0;
        int grade_sum = 0;
        int grade_avg;
        int highest_grade = 0;
        int lowest_grade = 100;
        
        do
        {   
            System.out.print("Input a grade(-1 to quit): ");
            grade = console.nextInt();
            
            if(grade <= -1)
            {
                break;
            }
            
            grade_count++;
            grade_sum += grade;
            
            if(grade > grade_temp)
            {
                highest_grade = grade;
            }
            else if(grade < grade_temp)
            {
                lowest_grade = grade;
            }
            
            grade_temp = grade;
            
        }while(grade != -1);
        
        grade_avg = grade_sum / grade_count;
        
        System.out.println("Grade average = " + grade_avg);
        System.out.println("Highest grade = " + highest_grade);
        System.out.println("Lowest grade = " + lowest_grade);
    }
    
    public static void printRange(){
        Scanner console = new Scanner(System.in);
        
        int n1,n2,i;
        
        System.out.print("Input first number: ");
        n1 = console.nextInt();
        System.out.print("Input second number: ");
        n2 = console.nextInt();
        
        if(n1 < n2)
        {
            for(i = n1 ; i <= n2 ; i++)
            {
                System.out.print(" " + "[" + i + "]" + " ");
            }
        }
        if(n1 > n2)
        {
            for(i = n1 ; i >= n2 ; i--)
            {
                System.out.print(" " + "[" + i + "]" + " ");
            }
        }
        if(n1 == n2)
        {
            System.out.print(" " + "[" + n1 + "]" + " ");
        }
    }
    
    public static void smallestLargest(){
        Scanner console = new Scanner(System.in);
        
        int noNumbers,i,number;
        int smallest = 0;
        int largest = 1;
        System.out.print("How many number you want to input: ");
        noNumbers = console.nextInt();
        
        for(i = 0 ; i < noNumbers ; i++)
        {
            System.out.print("Input Number " + (i+1) + ":");
            number = console.nextInt();
            
            if(number > largest)
            {
                largest = number;
            }
            if(number < smallest)
            {
                smallest = number;
            }
        }
        
        System.out.println("Largest = " + largest);
        System.out.println("Smallest = " + smallest);
    }
    
    public static void longestName(Scanner console, int n){
        String name;
        String longest = "";
        
        for(int i = 1 ; i <= n ; i++)
        {
            System.out.print("Name#" + i + ": ");
            name = console.next();
            
            if(name.length() > longest.length())
            {
                longest = name;
            }
        }
        
        System.out.println(longest + " name is longest");
    }
    
    public static void evenSumMax(Scanner console){
        int num,n;
        int even_sum = 0;
        int even_max = 0;
        
        System.out.print("How many numbers you want to input: ");
        n = console.nextInt();
        
        for(int i = 1 ; i <= n ; i++)
        {
            System.out.print("Input number#" + i + ": ");
            num = console.nextInt();
            
            if(num % 2 == 0)
            {
                even_sum += num;
                
                if(num > even_max)
                {
                    even_max = num;
                }
            }
        }
        
        System.out.println("Even number's sum: " + even_sum);
        System.out.println("Max even number: " + even_max);
    }
    
    public static void printPalindrome(Scanner console){
        System.out.print("Input one or more words:");
        
        String input = console.nextLine();
        String lcInput = input.toLowerCase();
        
        int matches = 0;
        
        for(int i = 0 ; i < lcInput.length() / 2 ; i++)
        {
            if(lcInput.charAt(i) == lcInput.charAt(lcInput.length() - 1 - i))
            {
                matches++;
            }
        }
        if(matches == lcInput.length() / 2)
        {
            System.out.println(input + " is a palindrome!");
        }
        else
        {
            System.out.println(input + " is not a palindrome.");
        }
    }
    
    public static void stutter(Scanner console){
        System.out.print("Input a word:");
        
        String s = console.nextLine();
        String result = "";
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            result += s.charAt(i);
            result += s.charAt(i);
        }
        System.out.println(result);
    }
    
    public static void wordCount(Scanner console){
        System.out.print("Input a sentence:");
        
        String s = console.nextLine();
        
        int count = 0;
        
        if(s.charAt(0) != ' ')
        {
            count++;
        }
        
        for(int i = 0 ; i < s.length() - 1 ; i++)
        {
            if(s.charAt(i) == ' ' && s.charAt(i + 1) != ' ')
            {
                count++;
            }
        }
        System.out.println("There are " + count + " words in the sentence you have input.");
    }
    
    public static void perfectNumbers(Scanner console){
        System.out.print("Input the max value of the number you want to check for perfect numbers:");
        
        int n = console.nextInt();
        
        System.out.println();
        
        System.out.print("Perfect numbers up to " + n +":");
        
        for(int current = 1 ; current <= n ; current++)
        {
            int sum = 0;
            
            for(int factor = 1 ; factor < current ; factor++)
            {
                if(current % factor == 0)
                {
                    sum += factor;
                }
            }
            
            if(sum == current)
            {
                System.out.print(" " + current);
            }
        }
    }
    
    public static boolean isUnique(int[] array){
        int value;
        
        for(int i = 0 ; i < array.length ; i++)
        {
            value = array[i];
            
            for(int j = i + 1 ; j < array.length ; j++)
            {
                if(value == array[j])
                {
                    return false;
                }
            }
        }
        return true;
    }
    
    public static boolean contains(int[] a1, int[] a2){
        int counter;
        
        for(int i = 0 ; i < (a1.length - a2.length) ; i++)
        {
            counter = 0;
            
            for(int j = 0 ; j < a2.length ; j++)
            {
                if(a1[i + j] == a2[j])
                {
                    counter++;
                }
                else
                {
                    break;
                }
                
                if(counter == a2.length)
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    public static int[] collapse(int[] array){
        int L = array.length;
        int outSize;
        
        if(L % 2 == 0)
        {
            outSize = L / 2;
        }
        else
        {
            outSize = L / 2 + 1;
        }
        
        int[] array2 = new int[outSize];
        int i2 = 0;
        
        for(int i = 0 ; i < L - 1 ; i = i + 2)
        {
            array2[i2] = array[i] + array[i + 1];
            i2++;
        }
        
        if(L % 2 == 1)
        {
            array2[outSize - 1] = array[L - 1];
        }
        return array2;
    }
    
    public static int[] append(int[] a1, int[] a2){
        int[] a3 = new int[a1.length + a2.length];
        
        for(int i = 0 ; i < a1.length ; i++)
        {
            a3[i] = a1[i];
        }
        
        for(int i = 0 ; i < a2.length ; i++)
        {
            a3[a1.length + i] = a2[i];
        }
        return a3;
    } 
}
