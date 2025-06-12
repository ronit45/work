import java.util.ArrayList;

// Define the Readable interface
interface Readable {
    String read(); // Abstract method for reading
}

// TextMessage class implementing Readable
class TextMessage implements Readable {
    private String sender;
    private String content;

    // Constructor to initialize sender and content
    public TextMessage(String sender, String content) {
        this.sender = sender;
        this.content = content;
    }

    // Method to get the sender
    public String getSender() {
        return sender;
    }

    // Implementation of the read method
    @Override
    public String read() {
        return "Sender: " + sender + "\nMessage: " + content;
    }
}

// EBook class implementing Readable
class EBook implements Readable {
    private String name;
    private ArrayList<String> pages;
    private int pageNumber;

    // Constructor to initialize name, pages, and pageNumber
    public EBook(String name, ArrayList<String> pages) {
        this.name = name;
        this.pages = pages;
        this.pageNumber = 0; // Initialize page number to 0
    }

    // Method to get the name of the EBook
    public String getName() {
        return name;
    }

    // Method to get the current page as a String
    public String page() {
        return pages.get(pageNumber);
    }

    // Method to go to the next page
    public void nextPage() {
        pageNumber++;
        if (pageNumber % pages.size() == 0) {
            pageNumber = 0; // Reset page number if modulus condition is met
        }
    }

    // Implementation of the read method
    @Override
    public String read() {
        String currentPage = page();
        nextPage(); // Move to the next page
        return currentPage;
    }
}

// Main class to demonstrate functionality
public class Main {
    public static void main(String[] args) {
        // Create and initialize pages for the EBook
        ArrayList<String> pages = new ArrayList<>();
        pages.add("Page 1: Introduction to Java");
        pages.add("Page 2: Object-Oriented Programming");
        pages.add("Page 3: Interfaces and Polymorphism");
        pages.add("Page 4: Advanced Java Concepts");

        // Create an EBook object and add pages to it
        EBook myEBook = new EBook("Learning Java", pages);

        // Read and print the pages one by one
        System.out.println("EBook: " + myEBook.getName());
        for (int i = 0; i < pages.size(); i++) {
            System.out.println(myEBook.read());
        }

        // Create a TextMessage object and initialize its data members
        TextMessage message = new TextMessage("Alice", "Hello! How are you?");
        System.out.println("\nText Message:");
        System.out.println(message.read());
    }
}
