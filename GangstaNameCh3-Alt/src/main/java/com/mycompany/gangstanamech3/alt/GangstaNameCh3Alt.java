/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.gangstanamech3.alt;
import java.util.*;
/**
 *
 * @author ereng
 */
public class GangstaNameCh3Alt {

    public static void main(String[] args) {
        Scanner console = new Scanner(System.in);
        System.out.print("Type your name,playa:");
        String name = console.nextLine();
        
        String first = name.substring(0, name.indexOf(" "));
        String last = name.substring(name.indexOf(" ") + 1);
        last = last.toUpperCase();
        String fInitial = first.substring(0, 1);
        
        System.out.println("Your gangsta name is " + fInitial + ". Diddy " + last + " " + first + "-izzle");
    }
}
