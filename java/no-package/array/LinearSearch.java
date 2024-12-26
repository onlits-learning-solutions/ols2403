import java.util.Scanner;

public class LinearSearch {

    public static void main(String[] args) {
        int[] nums = {41, 10, 9, 101, 96, 72, 5, 31, 29, 15};
        Scanner scanner = new Scanner(System.in);

        System.out.printf("Enter a number: ");
        int key = scanner.nextInt();

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == key) {
                System.out.printf("%d found at index %d.\n", key, i);
                return;
            }
        }
        System.out.printf("%d not found.\n", key);
    }
}
