public class TurnOffCommand implements ICommand {
    private Fan fan;

    public TurnOffCommand(Fan fan) {
        this.fan = fan;
    }
    @Override
    public void Execute() {
        fan.TurnOff();
        
    }

    @Override
    public void Undo() {
        fan.TurnOn();
        
    }
}
