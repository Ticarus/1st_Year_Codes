/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.exp_17;

/**
 *
 * @author ereng
 */
public class Exp_17 {

    public static void main(String[] args) {
        line();
        top_half();
        bottom_half();
        line();
    }
    
    public static void line(){
        System.out.println("#================#");  
    }
    
    public static void top_half(){
        for(int line=1;line<=4;line++)
        {
            System.out.print("|");
            
            for(int space=1;space<=(line*-2)+8;space++)
            {
                System.out.print(" ");
            }
           
            System.out.print("<>");
            
            for(int dots=1;dots<=(line*4)-4;dots++)
            {
                System.out.print(".");
            }
            
            System.out.print("<>");
          
            for(int space=1;space<=(line*-2)+8;space++)
            {
                System.out.print(" ");
            }
          
            System.out.print("|");
            System.out.println("");
        }
    }
    
    public static void bottom_half(){
        for(int line=1;line<=4;line++)
        {
            System.out.print("|");
            
            for(int space=1;space<=(line*2)-2;space++)
            {
                System.out.print(" ");
            }
            
            System.out.print("<>");
            
            for(int dots=1;dots<=(line*-4)+16;dots++)
            {
                System.out.print(".");
            }
            
            System.out.print("<>");
            
            for(int space=1;space<=(line*2)-2;space++)
            {
                System.out.print(" ");
            }
            
            System.out.print("|");
            System.out.println("");
        }
    }
}
