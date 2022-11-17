public class Remote {
    private ICommand turnOffCommand;
    private ICommand turnOnCommand;

    public Remote(ICommand turnOnCommand, ICommand turnOffCommand) {
        this.turnOffCommand = turnOffCommand;
        this.turnOnCommand = turnOnCommand;
    } 

    public void turnOnClickProcess(){
        turnOnCommand.Execute();
    }

    public void turnOffClickProcess() {
        turnOffCommand.Execute();
    }

    
}
