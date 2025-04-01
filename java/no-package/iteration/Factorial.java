
import java.util.Scanner;

class Factorial {
    public static void main(String[] args) {
        int fact = 1;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = scanner.nextInt();
        for(int i=n; i>=1; i--) {
            fact *= i;  // fact = fact * i
        }
        System.out.println("Factorial of " + n + " is " + fact);
    }
}