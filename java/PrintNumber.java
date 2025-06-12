import java.util.* ;
public class PrintNumber {
    //Integer
    public void printNumber(Integer num) {
        System.out.println("Integer: " + num);
    }

    //Double
    public void printNumber(Double num) {
        System.out.println("Double: " + num);
    }

    // Character
    public void printNumber(Character ch) {
        System.out.println("Character: " + ch);
    }

    // Boolean
    public void printNumber(Boolean bool) {
        System.out.println("Boolean: " + bool);
    }

    // Float
    public void printNumber(Float num) {
        System.out.println("Float: " + num);
    }

    //Long
    public void printNumber(Long num) {
        System.out.println("Long: " + num);
    }

    // Short
    public void printNumber(Short num) {
        System.out.println("Short: " + num);
    }

    // Byte
    public void printNumber(Byte num) {
        System.out.println("Byte: " + num);
    }

    public static void main(String[] args) {
        PrintNumber printer = new PrintNumber();

        // Printing various numbers using wrapper classes
        printer.printNumber(42);          // Integer
        printer.printNumber(3.14);        // Double
        printer.printNumber('A');         // Character
        printer.printNumber(true);        // Boolean
        printer.printNumber(2.718f);      // Float
        printer.printNumber(123456789L);  // Long
        printer.printNumber((short) 10);  // Short
        printer.printNumber((byte) 5);    // Byte
    }
}