public class Program {
    public static void main(String[] args) {
        Thread run1 = new Thread(()->TruongNXdSingleton.getInstance().saysHi());
        Thread run2 = new Thread(()->TruongNXdSingleton.getInstance().saysHi());
        Thread run3 = new Thread(()->TruongNXdSingleton.getInstance().saysHi());
        Thread run4 = new Thread(()->TruongNXdSingleton.getInstance().saysHi());
        run1.start();
        run2.start();
        run3.start();
        run4.start();
    }
    
}
