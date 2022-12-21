/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.addinggame;
import java.util.*;
/**
 *
 * @author ereng
 */
public class AddingGame {

    public static void main(String[] args) {
        Scanner console = new Scanner(System.in);    //To create a scanner object (to be able to use scanner)
        Random rand = new Random();    //To create a random object (to be able to use random)
        
        int points = 0;    //Player's gained points
        int wrong = 0;    //Player's wrong guesses
        
        System.out.println("||=====Adding game=====||");
        System.out.println("Every correct answer is 1 points");
        System.out.println("The game ends after 3 wrong tries");
        
        while(wrong < 3)  
        {
            int result = play(console, rand);    //Calling play method
            
            if (result > 0)    
            {
                points++;
            }
            else
            {
                wrong++;
            }
        }
        System.out.println("You earned " + points + " points!");
    }
    
    public static int play(Scanner console, Random rand){
        int operands = rand.nextInt(6) + 2;    //Decides how many operands will be in operation (2 - 7)
        int sum = rand.nextInt(10) + 1;    //Decides the value of an operand (1 - 10)
        
        System.out.print(sum);
        
        for(int i = 2 ; i <= operands ; i++)    //This part prints and sums the random operands
        {
            int n = rand.nextInt(10) + 1;
            sum += n;
            System.out.print(" + " + n);
        }
        System.out.print(" = ");
        
        int guess = console.nextInt();  
        
        if(guess == sum)  
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
 