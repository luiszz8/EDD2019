/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bolsa;

/**
 *
 * @author Luis
 */
public class Bolsa { 

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Lista bol=new Lista();
        bol.insertar("la");
        bol.insertar("le");
        bol.insertar("li");
        bol.insertar("lo");
        bol.insertar("lu");
        System.out.println("La bolsa tiene "+bol.cuantos()+" objetos");
    }
    
}
