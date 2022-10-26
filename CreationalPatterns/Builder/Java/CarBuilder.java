import CarParts.Engine;
import CarParts.SeatBelt;
import CarParts.WildScreen;

public class CarBuilder implements ICarBuiler{

    public int numberOfWheels;
    public SeatBelt seatBelt;
    public String color;
    public WildScreen wildScreen;
    public Engine engine;

    @Override
    public CarBuilder AddWheels(int numberOfWheels) {
        this.numberOfWheels = numberOfWheels;
        return this;
    }

    @Override
    public CarBuilder AddSeatBelts(SeatBelt seatBelt) {
        this.seatBelt = seatBelt;
        return this;
    }

    @Override
    public CarBuilder AddWildScreen(WildScreen wildScreen) {
        this.wildScreen = wildScreen;
        return this;
    }

    @Override
    public CarBuilder AddEngine(Engine engine) {
        this.engine = engine;
        return this;
    }

    @Override
    public CarBuilder Paint(String color) {
        this.color = color;
        return this;
    }

    @Override
    public Car Build() {
        return new Car(numberOfWheels, seatBelt, color, wildScreen, engine);
    }
    
}
