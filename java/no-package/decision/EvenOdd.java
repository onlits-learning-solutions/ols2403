
import java.util.Scanner;

public class EvenOdd {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.printf("Enter a number: ");
        int n = scanner.nextInt();

        if(n % 2 == 0)
            System.out.printf("Even Number\n");
        else
            System.out.printf("Odd Number\n");
    }
}