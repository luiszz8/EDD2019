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
public class Lista {
    public Nodo inicio;
    public Nodo ultimo;
    public int tamayo;
    
    public void Lista(){
        inicio = null;
        ultimo = null;
        tamayo = 0;
    }
    
    public boolean esVacia(){
        return inicio == null;
    }
    
    public void insertar(Object valor){
        
        Nodo nuevo = new Nodo();
        nuevo.dato=valor;
        if (esVacia()) {
            inicio = nuevo;
            ultimo = nuevo;  
            ultimo.sig=inicio;
        } else{
            nuevo.sig=inicio;
            inicio = nuevo;
            ultimo.sig=inicio;
        }
        tamayo++;
    }
    public int cuantos(){
        return tamayo;
    } 
}
