
import java.util.Scanner;

class ValidatePassword {

    static boolean isPasswordValid(String password) {
        if (password.length() < 10) {
            return false;
        }

        for (int i = 0; i < password.length(); i++) {
            if (!Character.isAlphabetic(password.charAt(i)) && !Character.isDigit(password.charAt(i))) {
                return false;
            }
        }

        int digit = 0;
        for (int i = 0; i < password.length(); i++) {
            if (Character.isDigit(password.charAt(i))) {
                digit++;
            }
        }

        if (digit < 2) {
            return false;
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter password: ");
        String password = s.next();
        if (isPasswordValid(password)) {
            System.out.println("Password is valid"); 
        }else {
            System.out.println("Password is invalid");
        }
    }
}
