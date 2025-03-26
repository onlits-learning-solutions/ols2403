import java.util.Scanner;

public class RectangleArea {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter length: ");
        float l = s.nextFloat();
        System.out.print("Enter breadth: ");
        float b = s.nextFloat();
        float a = l * b;
        System.out.println("Area is " + a);
    }
}