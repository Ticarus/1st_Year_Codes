/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.vowelcheck.alt;
import java.util.*;
/**
 *
 * @author ereng
 */
public class VowelCheckAlt {

    public static void main(String[] args) {
        Scanner console = new Scanner(System.in);
        
        String s;
                
        System.out.print("Input a letter:");
        
        s = console.next();
        
        boolean isVowel = isVowel(s);
        
        System.out.println("Vowel Status:" + isVowel(s));
        System.out.println("Non Vowel Status:" + isnonVowel(isVowel));
        
    }
    
    public static boolean isVowel(String s){
        return s.equalsIgnoreCase("a") || s.equalsIgnoreCase("e") || s.equalsIgnoreCase("i") || s.equalsIgnoreCase("o") || s.equalsIgnoreCase("u");
    }
    
    public static boolean isnonVowel(boolean isVowel){
        return !isVowel;
    }
}
