// Invoice.java
public class Invoice {
    private String partNumber;
    private String partDescription;
    private int quantity;
    private double pricePerItem;

    // Constructor
    public Invoice(String partNumber, String partDescription, int quantity, double pricePerItem) {
        this.partNumber = partNumber;
        this.partDescription = partDescription;
        this.quantity = quantity < 0 ? 0 : quantity; // Set quantity to 0 if negative
        this.pricePerItem = pricePerItem < 0.0 ? 0.0 : pricePerItem; // Set price to 0.0 if negative
    }

    // Getters and Setters
    public String getPartNumber() {
        return partNumber;
    }

    public void setPartNumber(String partNumber) {
        this.partNumber = partNumber;
    }

    public String getPartDescription() {
        return partDescription;
    }

    public void setPartDescription(String partDescription) {
        this.partDescription = partDescription;
    }

    public int getQuantity() {
        return quantity;
    }

    public void setQuantity(int quantity) {
        this.quantity = quantity < 0 ? 0 : quantity; // Ensure quantity is non-negative
    }

    public double getPricePerItem() {
        return pricePerItem;
    }

    public void setPricePerItem(double pricePerItem) {
        this.pricePerItem = pricePerItem < 0.0 ? 0.0 : pricePerItem; // Ensure price is non-negative
    }

    // Method to calculate the invoice amount
    public double getInvoiceAmount() {
        return quantity * pricePerItem;
    }
}
