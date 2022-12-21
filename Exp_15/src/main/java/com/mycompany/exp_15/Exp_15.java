/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.exp_15;

/**
 *
 * @author ereng
 */
public class Exp_15 {

    public static void main(String[] args) {
        for (int line=1;line<=5;line++)  //This for loop determines the vertical line count
        {
            for(int i=5;i>line;i--)  //This for loop determines the dots which will be printed at left side of the number
            {
                System.out.print(".");
            }
            System.out.print(line);  //This prints the number
            for(int j=1;j<line;j++)  //This for loop determines the dots which will be printed at right side of the number
            {
                System.out.print(".");
            }
            System.out.println("");
        }
    }
}
