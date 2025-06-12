
import java.util.*;

class Customer {
    int id;
    String name;
    int balance;

    Customer(int id, String name, int balance) {
        this.id = id;
        this.name = name;
        this.balance = balance;
    }

    void display() {
        System.out.println("Customer ID: " + id + ", Name: " + name + ", Balance: " + balance);
    }
}

public class bankdeposit {
    public static void main(String[] args) {
        Customer[] customers = {
            new Customer(1, "Maria", 200),
            new Customer(2, "Riya", 200),
            new Customer(4, "Azmir", 200),
            new Customer(3, "Ravi", 1000),
            new Customer(5, "Varun", 100)
        };

        Arrays.sort(customers, (c1, c2) -> Integer.compare(c1.id, c2.id));

        System.out.println("Customer details in ascending order of ID:");
        for (Customer customer : customers) {
            customer.display();
        }

        for (Customer customer : customers) {
            if (customer.id == 3) {
                if (customer.balance >= 250) {
                    customer.balance -= 250;
                    System.out.println("\nAfter withdrawal:");
                    customer.display();
                } else {
                    System.out.println("\nInsufficient balance for customer ID 3.");
                }
                break;
            }
        }
    }
}