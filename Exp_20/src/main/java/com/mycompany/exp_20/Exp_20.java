/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.exp_20;
import java.util.*;    //To be able to use Scanner class

/**
 *
 * @author ereng
 */
public class Exp_20 {

    public static void main(String[] args) { 
        Scanner console = new Scanner(System.in);  //Scanner object to read console input
        
        System.out.println("What is your name? ");   
        String name = console.next();  //Scans the user's input (only a word)
        name = name.toUpperCase();   //Raises the letters of the string to uppercase 
        
        System.out.println(name + " has " + name.length() + " letters and starts with " + name.substring(0, 1)); 
    }
}
