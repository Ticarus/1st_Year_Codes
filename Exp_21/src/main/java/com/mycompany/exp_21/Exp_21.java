/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.exp_21;
import java.util.*;
/**
 *
 * @author ereng
 */
public class Exp_21 {

    public static void main(String[] args) {
        Scanner console = new Scanner(System.in);
        
        System.out.println("What is your full name?  ");
        String name = console.nextLine();
        
        String first = name.substring(0, name.indexOf(" "));
        String last = name.substring(name.indexOf(" ") + 1);
        last = last.toUpperCase();
        String fInitial = first.substring(0, 1);
        fInitial = fInitial.toUpperCase();
        
        System.out.println("Your gangsta name is \"" + fInitial + ".Diddy " + last + " " + first + "-izzle\"");
    }
}
