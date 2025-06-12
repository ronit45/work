import java.util.Scanner;

public class StringOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input strings from the user
        System.out.print("Enter the first string: ");
        String str1 = scanner.nextLine();
        System.out.print("Enter the second string: ");
        String str2 = scanner.nextLine();

        // Change the case of the first string
        String changedCaseStr = changeCase(str1);
        System.out.println("String with changed case: " + changedCaseStr);

        // Reverse the first string
        String reversedStr = reverseString(str1);
        System.out.println("Reversed string: " + reversedStr);

        // Compare the two strings
        compareStrings(str1, str2);

        // Insert the second string into the first string
        System.out.print("Enter the position to insert the second string into the first string: ");
        int position = scanner.nextInt();
        String insertedStr = insertString(str1, str2, position);
        System.out.println("String after insertion: " + insertedStr);

        
    }

    // Method to change the case of a string
    public static String changeCase(String str) {
        StringBuilder result = new StringBuilder(str.length());
        for (char c : str.toCharArray()) {
            if (Character.isUpperCase(c)) {
                result.append(Character.toLowerCase(c));
            } else {
                result.append(Character.toUpperCase(c));
            }
        }
        return result.toString();
    }

    public static String reverseString(String str) {
        return new StringBuilder(str).reverse().toString();
    }

    public static void compareStrings(String str1, String str2) {
        if (str1.equals(str2)) {
            System.out.println("The strings are equal.");
        } else {
            System.out.println("The strings are not equal.");
        }
    }

    public static String insertString(String str1, String str2, int position) {
        if (position < 0 || position > str1.length()) {
            return "Invalid position.";
        }
        return str1.substring(0, position) + str2 + str1.substring(position);
    }
}