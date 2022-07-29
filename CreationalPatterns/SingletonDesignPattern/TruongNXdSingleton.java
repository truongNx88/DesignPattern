import java.util.Random;

/**
 * TruongNXdSingleton
 */
public class TruongNXdSingleton {

    private static TruongNXdSingleton uniqueInstance ;
    private int index;
    private static final Object lock = new Object();

    private TruongNXdSingleton(int index) {
        this.index = index;
    }

    public static TruongNXdSingleton getInstance() {
        if (uniqueInstance == null) {
            synchronized(lock){
                    int randomIndex = new Random().nextInt(7);
                    uniqueInstance = new TruongNXdSingleton(randomIndex);
                }
                
            }
        return uniqueInstance;
    }
        
    public void saysHi() {
        System.out.println("Say Hi " + index);
    }
}