import CarParts.Engine;
import CarParts.SeatBelt;
import CarParts.WildScreen;

public interface ICarBuiler {
    CarBuilder AddWheels(int numberOfWheels);
    CarBuilder AddSeatBelts(SeatBelt seatBelt);
    CarBuilder Paint(String color);
    CarBuilder AddWildScreen(WildScreen wildScreen);
    CarBuilder AddEngine(Engine engine);
    Car Build();
}
