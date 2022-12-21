/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.exp_19;
import java.util.*;    //to be able to use Scanner class
/**
 *
 * @author ereng
 */
public class Exp_19 {

    public static void main(String[] args) {
       Scanner console = new Scanner(System.in);              //Scanner object to read console input
       
       int num1,num2,choice,sum,sub,product,div,modulo,cont;  //Stores the input values
       
       System.out.println("======Simple Calculator======");   //This part is used to describe how to use calculator
       System.out.println("1.Addition");                       
       System.out.println("2.Substraction");
       System.out.println("3.Multiplication");
       System.out.println("4.Division");
       
       do     //This do-while loop is used to repeat the calculator process 
       {
           System.out.println("Input the operation you wish to do:");  //Asking the user to input the value for the desired operation 
           choice = console.nextInt();   //Scans the operation choice
       
          System.out.println("Input the value of two numbers:");  //Asks for numbers to operate with
       
          num1 = console.nextInt();  //Scans first number's value
          num2 = console.nextInt();  //Scans second number's value
            
             if(choice == 1)   //These nested ifs controls the operation choice
             {
                 sum = num1 + num2;
           
                 System.out.println(num1 + " + " + num2 + " = " + sum);
             }
             else if(choice == 2)
             {
                 sub = num1 - num2;
           
                 System.out.println(num1 + " - " + num2 + " = " + sub);
             }
             else if(choice == 3)
             {
                 product = num1 * num2;
           
                 System.out.println(num1 + " x " + num2 + " = " + product);
             }
             else if(choice == 4)
             {
                 div = num1 /  num2;
                 modulo = num1 % num2;
           
                 System.out.println(num1 + " / " + num2 + " = " + div);
                 System.out.println("Remainder:" + modulo);
             }
          
          System.out.println("If you want to continue input \"1\" if you want to quit input \"0\"");  //This part asks to user if they wish to continue and calculate something again or not
          cont = console.nextInt();  //This part Scans if user wants to continue or not
       }     
       while(cont == 1);  //if user inputs 1 up there this loop will be activated and user can do one more calculation or if they type anything not 1 not necessarily 0 exits the loop means no more calculation until program runs again 
    }
}
