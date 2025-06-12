import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

interface Customer {
    void get_customer_details();
}

class InvalidCurrentBillException extends Exception {
    public InvalidCurrentBillException(String message) {
        super(message);
    }
}


class Current_bill implements Customer {
    private String customer_Id;
    private String customer_name;
    private String bill_date;
    private String city;
    private double unitsConsumed;
    private double totalAmount;

   
    @Override
    public void get_customer_details() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter Customer ID: ");
        customer_Id = scanner.nextLine();
        
        System.out.print("Enter Customer Name: ");
        customer_name = scanner.nextLine();
        
        System.out.print("Enter Bill Date: ");
        bill_date = scanner.nextLine();
        
        System.out.print("Enter City: ");
        city = scanner.nextLine();
        
        System.out.print("Enter Units Consumed: ");
        unitsConsumed = scanner.nextDouble();
    }

    
    public double get_total_amount() {
        if (unitsConsumed <= 50) {
            totalAmount = unitsConsumed * 5;
        } else if (unitsConsumed <= 100) {
            totalAmount = 50 * 5 + (unitsConsumed - 50) * 7.5;
        } else {
            totalAmount = 50 * 5 + 50 * 7.5 + (unitsConsumed - 100) * 10;
        }
        return totalAmount;
    }

    
    public String validateData() throws InvalidCurrentBillException {
        if (customer_Id.length() != 5 || !customer_Id.matches("\\d+")) {
            throw new InvalidCurrentBillException("Customer ID must be a 5-digit number.");
        }
        return "Data is valid";
    }

    
    public void writeToFile() {
        try (FileWriter writer = new FileWriter("CustomerBill.txt", true)) {
            writer.write("Customer ID: " + customer_Id + "\n");
            writer.write("Customer Name: " + customer_name + "\n");
            writer.write("Bill Date: " + bill_date + "\n");
            writer.write("City: " + city + "\n");
            writer.write("Units Consumed: " + unitsConsumed + "\n");
            writer.write("Total Bill Amount: " + totalAmount + "\n");
            writer.write("======================================\n");
            System.out.println("Details written to file successfully.");
        } catch (IOException e) {
            System.out.println("Error writing to file: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        Current_bill bill = new Current_bill();
        bill.get_customer_details();
        
        try {
            System.out.println(bill.validateData());
            double totalAmount = bill.get_total_amount();
            System.out.println("Total Bill Amount: " + totalAmount);
            bill.writeToFile();
        } catch (InvalidCurrentBillException e) {
            System.out.println("Validation Error: " + e.getMessage());
        }
    }
}
