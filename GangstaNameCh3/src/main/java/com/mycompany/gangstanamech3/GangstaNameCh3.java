/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.gangstanamech3;
import java.util.*;
/**
 *
 * @author ereng
 */
public class GangstaNameCh3 {

    public static void main(String[] args) {
        Scanner console = new Scanner(System.in);
        
        System.out.print("Input your first name:");
        
        String first_name = console.next();
        
        System.out.print("Input your last name:");
        
        String last_name = console.next();
        
        System.out.println((first_name.substring(0,1)).toUpperCase() + ". Diddy " + last_name.toUpperCase() + " " + first_name + "-izzle");
    }
}
