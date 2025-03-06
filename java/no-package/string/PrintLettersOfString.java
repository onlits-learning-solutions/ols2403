
import java.util.Scanner;

public class PrintLettersOfString {
    public static void main(String[] args) {
        System.out.print("Enter a string: ");
        Scanner scanner = new Scanner(System.in);
        String string = scanner.next();
        System.out.println("The letters of entered string are:");
        for(int i=0; i<string.length(); i++)
            System.out.println(string.charAt(i));
    }
}