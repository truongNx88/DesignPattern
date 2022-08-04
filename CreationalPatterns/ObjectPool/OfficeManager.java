import java.util.ArrayList;
import java.util.Arrays;
import java.util.Random;

public class OfficeManager {
    
    private static ArrayList<Equipment> equipments;
    private static final Object lock = new Object();
    private static OfficeManager uniqueIntance;
    Random random = new Random();

    private OfficeManager() {

    }

    public static OfficeManager getIntance() {
        if (uniqueIntance == null) {
            synchronized(lock) {
                uniqueIntance = new OfficeManager();
                setEquipments();
            }
        }
        return uniqueIntance;
    }

    public boolean isStock() {
        return random.nextBoolean();
    }

    public Equipment getEquipment() {
        return equipments.get(random.nextInt(2));
    }

    private static void setEquipments() {
        equipments = new ArrayList<Equipment>(Arrays.asList(new Equipment("Equipment 1"), new Equipment("Equipment 2")));
    }

}
