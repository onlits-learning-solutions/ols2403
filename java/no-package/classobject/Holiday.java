
import java.time.LocalDate;
import java.util.Scanner;

class Holiday {
    String name;
    LocalDate date;
    String description;

    void newHoliday() {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter holiday name: ");
        name = s.nextLine();
        // System.out.print("Enter date (yyyy-mm-dd): ");
        // String d = s.next();
        // int year = Integer.parseInt(d.substring(0, 3));
        // int month = Integer.parseInt(d.substring(5, 6));
        // int dayOfMonth = Integer.parseInt(d.substring(8, 9));
        int year = 2025;
        int month = 4;
        int dayOfMonth = 6;
        date = LocalDate.of(year, month, dayOfMonth);
        System.out.print("Enter description: ");
        description = s.nextLine();
    }

    void displayHoliday() {
        System.out.println("Holiday Name: " + name);
        System.out.println("Date: " + date);
        System.out.println("Description: " + description);
    }
    public static void main(String[] args) {
        Holiday holiday = new Holiday();
        holiday.newHoliday();
        System.out.println("----------------------------------");
        holiday.displayHoliday();
    }
}