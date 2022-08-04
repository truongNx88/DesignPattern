
public class Staff {
    
    private String name;
    private Equipment equipment;

    public Staff(String name) {
        this.name = name;
    }

    public void setEquipment(Equipment equipment) {
        this.equipment = equipment;
    }

    public void printInfor() {
        System.out.println(String.format("Officer name %s using equipment name %s", name, equipment.getName()));
    }

}
