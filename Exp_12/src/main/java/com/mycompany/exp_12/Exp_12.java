/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.exp_12;

/**
 *
 * @author ereng
 */
public class Exp_12 {

    public static void main(String[] args) {
        for(int line=1;line<=5;line++)
        {
            for(int i=5;i>line;i--)
            {
                System.out.print(".");
            }
            System.out.print(line);
            System.out.println("");
        }
        
    }
}
