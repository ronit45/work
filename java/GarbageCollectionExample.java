public class GarbageCollectionExample {
    public String createObject() {
        return new String("Persistent Object");
    }

    public static void main(String[] args) {
        GarbageCollectionExample example = new GarbageCollectionExample();
        String reference = example.createObject(); // Object is now referenced by 'reference'
        System.out.println(reference); // Object won't be eligible for GC yet
    }
}
