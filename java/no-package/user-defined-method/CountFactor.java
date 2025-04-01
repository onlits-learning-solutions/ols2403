
import java.util.Scanner;

class CountFactor {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a number: ");;
        int n = s.nextInt();
        int count = countFactor(n);
        System.out.println("There are " + count + " factors of " + n + ".");
    }

    static int countFactor(int n) {
        int count = 0;
        for(int i=1; i<=n; i++) {
            if(n % i == 0)
                count++;
        }
        return count;
    }
}