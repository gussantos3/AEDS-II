package org.example;
import java.util.Scanner;

public class Main {
    public static int factorial(int n) {
        if (n == 0)
            return 1;

        return n * factorial(n - 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
            System.out.println("type the integer");
            n = sc.nextInt();

            System.out.println("the value of the factorial is: " + factorial(n));
    }
}

