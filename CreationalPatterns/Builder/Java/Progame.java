import CarParts.Engine;
import CarParts.SeatBelt;
import CarParts.WildScreen;

public class Progame {
    public static void main(String[] args) {
        Car car = new Car(4, 
            new SeatBelt("TruongNXd seat"),
            "red", 
            new WildScreen("TruongNXd wild"), new Engine("TruongNXd engine"));

        Car carByBuilder = new CarBuilder()
            .AddWheels(4)
            .AddSeatBelts(new SeatBelt("TruongNXd seat"))
            .AddWildScreen(new WildScreen("TruongNXd wild"))
            .AddEngine(new Engine("TruongNXd engine"))
            .Paint("red")
            .Build();
        
        System.out.println(car.convertName());
        System.out.println("------------------------------------------------");
        System.out.println(carByBuilder.convertName());
    }
}
