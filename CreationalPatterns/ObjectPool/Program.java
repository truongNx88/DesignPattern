/**
 * Program
 */
public class Program {
    public static void main(String[] args) {
        Staff staff = new Staff("TruongNXd");
        if (OfficeManager.getIntance().isStock()) {
            staff.setEquipment(OfficeManager.getIntance().getEquipment());
        } 
        else {
            staff.setEquipment(new Equipment("New Equipment"));
        }
        staff.printInfor();
    }
}