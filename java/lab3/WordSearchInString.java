import java.util.Scanner;

public class WordSearchInString {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get the string and word to search from the user
        System.out.print("Enter the string: ");
        String inputString = scanner.nextLine();

        System.out.print("Enter the word to search: ");
        String wordToSearch = scanner.nextLine();

        // Search for the word inside the string
        if (inputString.contains(wordToSearch)) {
            System.out.println("The word \"" + wordToSearch + "\" is found in the string.");
        } else {
            System.out.println("The word \"" + wordToSearch + "\" is not found in the string.");
        }
    }
}