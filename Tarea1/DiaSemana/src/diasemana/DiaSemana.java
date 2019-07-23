/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package diasemana;

import java.util.Calendar;
import java.util.Scanner;

/**
 *
 * @author Luis
 */
public class DiaSemana {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Calendar c = Calendar.getInstance();
        Scanner sc = new Scanner(System.in);
        System.out.println("Ingrese año");
        int anyo=Integer.parseInt(sc.nextLine());
        System.out.println("Ingrese mes");
        int mes=Integer.parseInt(sc.nextLine());
        System.out.println("Ingrese dia");
        int dia=Integer.parseInt(sc.nextLine());
        c.set(anyo, mes-1, dia);
        String Valor_dia="";

        int diaSemana = c.get(Calendar.DAY_OF_WEEK);
        if (diaSemana == 1) {
            Valor_dia = "Domingo";
        } else if (diaSemana == 2) {
            Valor_dia = "Lunes";
        } else if (diaSemana == 3) {
            Valor_dia = "Martes";
        } else if (diaSemana == 4) {
            Valor_dia = "Miercoles";
        } else if (diaSemana == 5) {
            Valor_dia = "Jueves";
        } else if (diaSemana == 6) {
            Valor_dia = "Viernes";
        } else if (diaSemana == 7) {
            Valor_dia = "Sabado";
        }
        System.out.println("El dia es: "+Valor_dia);
        }
}
