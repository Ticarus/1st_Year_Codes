/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.exp_9;

/**
 *
 * @author ereng
 */
public class Exp_9 {

    public static void main(String[] args) {
        int stars = 5;
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=stars;j++)
            {
                System.out.print("*");
            }
            System.out.println("");
            stars--;
        }
    }
}
