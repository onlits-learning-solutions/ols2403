
import java.util.Scanner;

class WordCount {
    public static void main(String[] args) {
        int words = 1;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a sentence: ");
        String sen = s.nextLine();

        for(int i=0; i<sen.length(); i++) {
            if(sen.charAt(i) == ' ')
                words++;
        }
        System.out.println("Number of words: " + words);
    }
}