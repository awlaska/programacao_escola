package c_Fibonacci;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int i;

        System.out.println("Quantas iterações? ");
        Scanner scan = new Scanner(System.in);
        int numero = scan.nextInt();

        int[] x = new int[numero];
        x[0] = 0;
        x[1] = 1;

        System.out.println(x[0]);
        System.out.println(x[1]);

        for(i = 2; i < numero; i++){
            x[i] = x[i-1] + x[i-2];
            System.out.println(x[i]);
        }
    }
}