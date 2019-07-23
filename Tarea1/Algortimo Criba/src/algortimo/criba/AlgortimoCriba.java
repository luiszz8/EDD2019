/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package algortimo.criba;

import java.util.Scanner;

/**
 *
 * @author Luis
 */
public class AlgortimoCriba {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Escriba el numero que desea");
        Scanner sc = new Scanner(System.in);
        String num=sc.nextLine();
        int tamano=Integer.parseInt(num);
                
        boolean primo[];
        primo= new boolean[tamano + 1];
        for ( int i = 2; i < tamano; i++ )
        primo[i] = true; //EN PRINCIPIO TODOS LOS NUMEROS SE CONSIDERAN PRIMOS

        for ( int j = 2; j <= tamano; j++ )
        if ( true == primo[j] ) // Para numeros grandes este if hace una 
                                  // diferencia de tiempo importante
        for ( int k = 2; k <= (tamano)/j; k++ )
        primo[k*j] = false;
        
        System.out.println("Estos son los numeros primos:");
        
        int salto = 1; 
        for ( int n = 1; n <= tamano; n++ )
        { //ABRE FOR

        if ( true == primo[n] )
        {
        System.out.printf("%4d\t", n);
        salto++;
        }
        if ( 5 == salto )
        {
        System.out.println();
        salto = 1;
        }
        }
    }
    
}

 