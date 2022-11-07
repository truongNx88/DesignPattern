import Base.MilkTea;
import Decorator.BlackSugar;
import Decorator.Bubble;
import Decorator.EggPudding;
import Decorator.FruitPudding;
import Decorator.WhiteBubble;

public class MainProgram {
    public static void main(String[] args) {
        var ourMilkTea = new EggPudding(
                            new FruitPudding(
                                new Bubble(
                                    new MilkTea())));
        
        System.out.println("Our Milk Tea Cost: " +  ourMilkTea.Cost());

        var secondMilkTea = new EggPudding(
            new BlackSugar(
                new WhiteBubble(
                    new MilkTea()
                )
            )
        );
        System.out.println("Our 2nd Milk Tea Cost: " +  secondMilkTea.Cost());

    }
}
