/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.vowelcheck;
import java.util.*;
/**
 *
 * @author ereng
 */
public class VowelCheck {

    public static void main(String[] args) {
        Scanner console = new Scanner(System.in);
        
        String word;
        
        System.out.print("Input a letter:");
        
        word = console.next();
        
        System.out.println(word + "'s Vowel status:" + isVowel(word));
        System.out.println(word + "'s non Vowel status:" + isnonVowel(word));
    }
    
    public static boolean isVowel(String word){
        return word.equals("a") || word.equals("A") || word.equals("e") || word.equals("E") || word.equals("i") ||word.equals("I") || word.equals("o") || word.equals("O") || word.equals("u") || word.equals("U");
    }
    
    public static boolean isnonVowel(String word){
        return !(word.equals("a") || word.equals("A") || word.equals("e") || word.equals("E") || word.equals("i") ||word.equals("I") || word.equals("o") || word.equals("O") || word.equals("u") || word.equals("U"));
    }
}
