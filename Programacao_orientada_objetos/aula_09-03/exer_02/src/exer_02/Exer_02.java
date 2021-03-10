package exer_02;


import java.util.Scanner;

//Faça um algoritmo em Java que receba o salário-base de um
//funcionário e mostre o salário a receber, sabendo-se que esse funcionário
//tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre
//o salário-base.

public class Exer_02 {

    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Informe o salário do funcionário =>");
        float salario = scan.nextFloat();
        
        float gratificacao = (salario * 5) / 100;
        float imposto = (salario * 7) / 100;
        
        float novo_salario = salario + gratificacao - imposto;
                
        System.out.println("Novo salário é = "+novo_salario);
    }
    
}
