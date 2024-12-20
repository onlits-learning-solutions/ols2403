
import java.util.Scanner;

public class ReverseNumber {
    public static void main(String[] args)
    {
        int num, d, rev = 0;
        System.out.printf("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        while(num > 0)
        {
            d = num % 10;
            num /= 10;
            rev = rev * 10 + d;
        }
        System.out.printf("Reverse: %d\n", rev);
    }
}