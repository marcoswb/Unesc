package exer_03;

import java.util.Scanner;

//Faça um programa em Java que leia a média final de um aluno e
//forneça uma mensagem associada ao conceito obtido. Utilize "if/else”.
//Informações a serem apresentadas:
//- Se a média é menor que 7, “Você precisa estudar mais”;
//- Se a média é igual a 7, “Você foi aprovado”;
//- Se a média está entre 7 e 8, ou seja de 7.1 à 7.99 “Parabéns, suas notas
//ficaram acima da média”;
//- Se a média é maior ou igual a 8 e menor que 9, “Parabéns,sua média
//ficou próxima da nota máxima”;
//- Se a média é maior ou igual a 9, “Parabéns, você é um excelente aluno”;

public class Exer_03 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Informe a média final do aluno =>");
        float media = scan.nextFloat();
        
        if(media < 7){
            System.out.println("Você precisa estudar mais");
        } else if(media == 7){
            System.out.println("Você foi aprovado");
        } else if((media > 7) && (media < 8)){
            System.out.println("Parabéns, suas notas ficaram acima da média");
        } else if((media >= 8) && (media < 9)){
            System.out.println("Parabéns,sua média ficou próxima da nota máxima");
        } else {
            System.out.println("Parabéns, você é um excelente aluno");
        }
                
    }
    
}
