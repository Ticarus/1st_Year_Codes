/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.exp_14;

/**
 *
 * @author ereng
 */
public class Exp_14 {

    public static void main(String[] args) {
        for(int line=1;line<=5;line++) //This for loop determines how many vertical lines will be looped
        {
            for(int dots=5;dots>line;dots--) //This for loop determines how many dots will be printed and decreases the number of dots to be printed in each loop 
            {
                System.out.print(".");
            }
            for(int i=1;i<=line;i++)  //This for loop determines how many and what numbers are going to be printed at the end of dots and with each new loop it raises the count of numbers and the value of number that will be printed
            {
                System.out.print(line);  
            }
            System.out.println("");
        }
    }
}
