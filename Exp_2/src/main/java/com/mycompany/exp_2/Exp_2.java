/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.exp_2;

/**
 *
 * @author ereng
 */
public class Exp_2 {

    public static void main(String[] args) {
        int i, x, y, power;
        x = 1;
        y = 1;
        for(i=0;i<=10;i++)
        {
            power = x * y;
            System.out.println(power + " = 4^"+i);
            x += x;
            y += y;
        }
      
    }
}
