/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package br.com.projeto.model;

import java.util.Scanner;
import javax.swing.JOptionPane;

/**
 *
 * @author eucli
 */
public class Test_of_types {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        int string = 0;
        
        try {
            System.out.println("Digite uma letra:");
            string = input.nextInt();
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null,"Isso é uma string e não um número inteiro: " + e);
        }
    }
    
}
