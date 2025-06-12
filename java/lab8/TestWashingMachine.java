interface Motor {
    int capacity = 100;

    void run();
    void consume();
}

class WashingMachine implements Motor {

    @Override
    public void run() {
        System.out.println("Washing Machine is running.");
    }

    @Override
    public void consume() {
        System.out.println("Washing Machine is consuming power.");
    }

    public void displayCapacity() {
        System.out.println("Washing Machine Capacity: " + Motor.capacity + " liters.");
    }
}

public class TestWashingMachine {
    public static void main(String[] args) {
        WashingMachine wm = new WashingMachine();
        
        wm.run();
        wm.consume();
        
        wm.displayCapacity();
    }
}
