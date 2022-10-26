import CarParts.Engine;
import CarParts.SeatBelt;
import CarParts.WildScreen;

public class Car {
    public int numberOfWheels;
    public SeatBelt seatBelt;
    public String color;
    public WildScreen wildScreen;
    public Engine engine;

    public Car(int numberOfWheels, SeatBelt seatBelt, String color, WildScreen wildScreen, Engine engine) {
        this.numberOfWheels = numberOfWheels;
        this.seatBelt = seatBelt;
        this.color = color;
        this.wildScreen = wildScreen;
        this.engine = engine;
    }

    // @Override
    public String convertName() {
        String content = new String();
        content += "Number of wheels:    \t "+ numberOfWheels +"\n";
        content += "Brand of seat belts: \t "+ seatBelt.getBrand() +"\n";
        content += "Color:               \t "+ color +"\n";
        content += "Windscreen brand:    \t "+ wildScreen.getName() +"\n";
        content += "Engine:              \t "+ engine.getName();
        return content;
    }
}
