/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.exp_18;
import java.util.*;            //This adds the Scanner class
/**
 *
 * @author ereng
 */
public class Exp_18 {

    public static void main(String[] args){
        Scanner console = new Scanner(System.in);    //Scanner object to read console input
        
        System.out.print("Input the grade:");    //prompt:a message telling the user what kind of input to type
        int grade = console.nextInt();    //Scanner method for int
       
        System.out.println("Your grade is:" + grade);  //prints the users input
    }
}
