/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.rhymealliterate.booleanzen;
import java.util.*;
/**
 *
 * @author ereng
 */
public class RhymeAlliterateBooleanZen {

    public static void main(String[] args) {
        Scanner console = new Scanner(System.in);
        
        String inp,s1,s2;
        
        System.out.print("Input two words:");
        
        inp = console.nextLine();
        
        s1 = inp.substring(0, inp.indexOf(" "));
        s2 = inp.substring(inp.indexOf(" ") + 1);
        
        if(rhyme(s1, s2))
        {
            System.out.println("They rhyme!");
        }
        if(alliterate(s1, s2))
        {
            System.out.println("They alliterate!");
        }
    }
    
    public static boolean rhyme(String s1, String s2){
        return (s2.length() >= 2 && s1.endsWith(s2.substring(s2.length() - 2))); 
    }
    
    public static boolean alliterate(String s1, String s2){
        return ((s1.toUpperCase()).startsWith((s2.toUpperCase()).substring(0,1)));
    }
}
