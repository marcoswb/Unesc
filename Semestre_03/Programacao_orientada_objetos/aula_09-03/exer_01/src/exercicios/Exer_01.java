package exercicios;


import java.util.Scanner;

//Faça um algoritmo em Java que receba três notas e seus respectivos
//pesos, calcule e mostre a média ponderada dessas notas.
//__________________________________________________________
//Média Aritmética Ponderada - MAP: Às vezes, é importante atribuir-se
//pesos diferenciados a cada valor, para o cálculo da média e, neste caso, a
//média recebe o nome de média ponderada. Assim, dados n valores x1, x2,
//x3, ... , xn aos quais são atribuídos os pesos k1, k2, k3, ... , kns
//respectivamente, a média ponderada destes n valores será dada por:
//Mp = (x1.k1 + x2.k2 + x3.k3 + ... xn.kn) / (k1 + k2 + k3 + ... + kn)
//Exemplo: Se os valores 10, 8 e 6 possuem pesos 4, 3 e 2
//respectivamente, a média ponderada destes valores será igual a:
//Mp = (10.4 + 8.3 + 6.2) / (4 + 3 + 2) = 76 / 9 = 8,44

public class Exer_01 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Informe a primeira nota =>");
        float nota_01 = scan.nextFloat();
        
        System.out.println("Informe o peso da primeira nota =>");
        int peso_01 = scan.nextInt();
        
        System.out.println("Informe a segunda nota =>");
        float nota_02 = scan.nextFloat();
        
        System.out.println("Informe o peso da segunda nota =>");
        int peso_02 = scan.nextInt();
        
        System.out.println("Informe a terceira nota =>");
        float nota_03 = scan.nextFloat();
        
        System.out.println("Informe o peso da terceira nota =>");
        int peso_03 = scan.nextInt();
        
        
        float media_ponderada = (nota_01 * peso_01 + nota_02 * peso_02 + nota_03 * peso_03) / (peso_01 + peso_02 + peso_03);
                
        System.out.println("A média ponderada das notas é = "+media_ponderada);
    }
    
}
