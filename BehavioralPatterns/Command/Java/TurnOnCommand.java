public class TurnOnCommand implements ICommand {

    private Fan fan;

    public TurnOnCommand(Fan fan) {
        this.fan = fan;
    }
    @Override
    public void Execute() {
        fan.TurnOn();
        
    }

    @Override
    public void Undo() {
        fan.TurnOff();
        
    }
    
}
